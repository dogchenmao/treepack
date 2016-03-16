
import re

def append_to_end(line, suf):
	return line.replace('\n', suf + '\n')

def catch_if_state(line):
	rs = re.match('^\s*if[\s\(]+', line)
	return rs != None
	pass

def conv_if_state(line):
	return append_to_end(line, ' then')
	pass
	
def catch_else_state(line):
	rs = re.match('^\s*}?\s*else\s+if[\s\(]', line) or re.match('^\s*}?\s*else[\s\{]', line)
	return rs != None
	pass

def conv_else_state(line):
	line = re.sub('(\s*)}(\s*else[\s{])', r'\1\2', line)
# 	line=re.sub('(\s*)[\s}]else\s+if([\(\s].+?)\n',r'\1elseif\2then',line)
	line = re.sub('^(\s*)else\s+if([\(\s].+?)\n', r'\1elseif\2then\n', line)
	return line
	pass

def catch_whiledo_state(line):
	rs = re.match('^\s*while[\s\(]+', line)
	return rs != None
	pass

def conv_whiledo_state(line):
	return append_to_end(line, ' do')
	pass

def catch_logic_state(line):
	rs = re.match('.*[\w\s]*[(&&)(||)!][\w\s]*', line)
	return rs != None
	pass

def conv_logic_state(line):
	line = line.replace('&&', ' and ')
	line = line.replace('||', ' or ')
	line = line.replace('!', ' not ')
	
	line = re.sub(r'\s+(and|or|not)', r' \1', line)
	line = re.sub(r'(and|or|not)[\t ]+', r'\1 ', line)
	return line
	pass

def catch_mmpoint_state(line):
	rs = re.match(r'.*(\w+(\(\))?)(->)(\w+)', line)
	return rs != None
	pass

def conv_mmpoint_state(line):
	rs = re.sub(r'(\w+)(->)(\w+)', r'\1:\3', line)
	rs = re.sub(r'(\w+(\(\))?)(->)(\w+)', r'\1:\4', rs)
	return rs
	pass

def catch_begin_state(line):
	rs = re.match('\s*{\s+', line)
	return rs != None
	pass

def conv_begin_state(line):
	return ''
	pass

def catch_end_state(line):
	rs = re.match('\s*}\s*', line)
	return rs != None
	pass

def conv_end_state(line):
	line = line.replace('}', 'end')
	return line
	pass

def catch_csend_state(line):
	rs = re.match('.*\s*;\s*\n', line)
	return rs != None
	pass

def conv_csend_state(line):
	return re.sub('\s*;\s*\n', '\n', line)
	pass

def catch_boolv_state(line):
	rs = re.search(r'[^\w]+(TRUE|FALSE)[^\w]+', line)
	return rs != None
	pass

def conv_boolv_state(line):
	line = re.sub(r'([^a-zA-Z_]+)TRUE([^a-zA-Z_]+)', r'\1true\2', line)
	line = re.sub(r'([^a-zA-Z_]+)FALSE([^a-zA-Z_]+)', r'\1false\2', line)
	return line
	pass
	
def catch_annotation_state(line):
	return True
	
def conv_annotation_state(line):
	line = line.replace('//', '--')
	return line
	 
def catch_doc_state(line):
	return re.match('^(\s*)/\*', line) or re.match('\*/\s*$', line)

def conv_doc_state(line):
	line = re.sub('(\s*)/\*', r'\1--[[', line)
	line = re.sub('\*/(\s*)', r']]\1', line)
	return line

for_mode = '(?P<space>\s*)for\s*\((\w+)?\s*(?P<var>\w+)\s*=\s*(?P<start>\w+)\s*;\s*\w+\s*[<=]{1,2}\s*(?P<end>\w+)\s*;\s*\w+\s*\+\s*=\s*(?P<step>\w+)\s*\)'
def catch_for_state(line):
	return re.match(for_mode, line)
	
def conv_for_state(line):
	rs = re.match(for_mode, line)
	space = rs.group('space')
	var = rs.group('var')
	start = rs.group('start')
	end = rs.group('end')
	step = rs.group('step')
	
	lfor_state = ''.join((space, 'for ', var, ' = ', start, ',', end, ',', step, ' do\n'))
	
	return lfor_state

def catch_dowhile_state(line):
	return re.match('^\s*do\s*$', line) or re.match('^\s*}?\s*while\s*\(.+?\)\s*;\s*$', line)
	
def conv_dowhile_state(line):
	if(re.match('^\s*do\s*$', line)):
		line = 'repeat\n'
	elif(re.match('^\s*}?\s*while\s*\(.+?\)\s*;\s*$', line)):
		line = re.sub('^(\s*)}?(\s*)while', r'\1\2until', line)
	
	return line
	
typedinit_line = '(?P<space>\s*)[a-zA-Z_\s\[\]\*]+\s+(?P<defs>[a-zA-Z_]+\s*=.+$)'
def catch_typedinit_state(line):
	return re.match(typedinit_line, line)

def conv_typedinit_state(line):
	rs = re.match(typedinit_line, line)
	return rs.group('space') + 'local ' + rs.group('defs') + '\n'
	
def catch_array_state(line):
	return False
	
def conv_array_state(line):
	return line
	
def preproc_line(content):
	content = content.replace('}', '}\n')
	content = content.replace('}\n\n', '}\n')
	content = re.sub('(\s*)}\s*(while\s*\(.+?\).*\n)', r'\1}\2', content)
	content = re.sub('(\s*)}\s*(else\s+if\s*\(.+?\).*\n)', r'\1}\2', content)
	content = re.sub('(\s*)}\s*(else\s*.*\n)', r'\1}\2', content)
	return content
	
def conv_content(content):

	tline = None
	lines = list()
	proc_list = [
		'if'
		, 'else'
		, 'dowhile'
		, 'whiledo'
		, 'logic'
		, 'begin'
		, 'end'
		, 'mmpoint'
		, 'csend'
		, 'boolv'
		, 'annotation'
		, 'doc'
		, 'typedinit'
		, 'for'
		, 'array'
	]
	for line in content:
		tline = line
		for proc_name in proc_list:
			catch_proc = eval('catch_' + proc_name + '_state')
			conv_proc = eval('conv_' + proc_name + '_state')
			if(catch_proc(tline)):
				tline = conv_proc(tline)

		lines.append(tline)
		tline = None

	tcontent = ''.join(lines)
	return tcontent
	pass

if(__name__ == '__main__'):
	import sys
	target = sys.argv[1]
	output = (2 in sys.argv and sys.argv[2]) or target.rstrip('.cpp') + '.lua'

	f = open(target, 'r')
	content = f.read()
	content = preproc_line(content)
	f.close()
	
	f = open('temp', 'w+')
	f.write(content)
	f.seek(0)
	tc = conv_content(f)
	f.close()

	fout = open(output, 'w')
	fout.write(tc)
	fout.close()

	pass
