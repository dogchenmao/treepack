# treepack
tools based on lpack

大纲：
	parse.py 用于解析较规整的C++代码，支持结构体嵌套，支持头文件包含
	style.py 用于构造lua代码，简单支持结构体嵌套引用

依赖：
	python3


使用：
	1.修改 inc_all.h 中的头文件列表，加入自己要解析的文件名列表，其中，'PREDEF_MARCROS.h',需要保留，其他两个可删
	2.运行命令 python style.py recurse
	3.生成的 lua 代码在 inf.lua 文件里

注意：
	1.若提示找不到宏定义，则拷贝相关宏定义到 PREDEF_MARCROS.h 中
	2.暂不支持字节对齐
	3.暂未支持枚举
