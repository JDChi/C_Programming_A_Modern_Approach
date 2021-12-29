# gcc 的前面是 tab 制表符
# 在终端使用 make 命令，会去寻找当前目录下的 makefile 文件
#
# 每组代码行里，第一行给出目标文件和其所依赖的文件
# 第二行表示待执行的命令
qsort: qsort.o quicksort.o
	gcc -o qsort qsort.o quicksort.o
qort.o: qsort.c quicksort.h
	gcc -c qsort.c
quicksort.o: quicksort.c quicksort.h
	gcc -c quicksort.c