#!/bin/python3
# from style_tool_kits import *
import sys

style_name=sys.argv[1]

exec('from styles.'+style_name+' import *')

def parse_target_struct(struct_info):
	struct_info = resolve_struct_reference_relavant(struct_info)
	struct_string = parse_to_tidy_recurse_style(struct_info)
	return struct_string

def parse_struct_list(struct_info_list,request_id_list_name='rid.'):
	struct_string_lines = list()
	for value in struct_info_list.values():
		struct_string,struct_body,struct_head = parse_target_struct(value)
		#struct_string='{}={}'.format(struct_head.lower(),struct_body)
		struct_string_lines.append(struct_string)

	struct_string_lines.sort()
	struct_list_string = ',\n\n'.join(struct_string_lines)
	struct_list_string = wrap_list_string(packagename,struct_list_string)
	return struct_list_string

parse_struct_list= parse_struct_list

if __name__ == '__main__':
	parse_const_include('inc_all.h')

#,const_var_string
	struct_string = parse_struct_list(struct_info_list)
	#request_info_string = parse_request_info_list_for_mc(struct_info_list)
	#print(struct_string)

	#struct_string=parse_struct_list_to_clear_type(struct_info_list)

	#marcro_string = parcel_const_var_list('request_id_list')
	#print(marcro_string)

	#print(const_var_string)

	f = open('inf.lua','w')
	#f.write(marcro_string)
	#f.write(const_var_string)
	f.write(struct_string)
	#f.write(request_info_string)
	f.close()
