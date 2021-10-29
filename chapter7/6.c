#include <stdio.h>

int main(int argc, char const *argv[])
{
	// sizeof 的类型是 size_t，是一种由实现定义的类型，C89 中最好把表达式的值转换成一种已知的类型
	// 最安全的方法是转换成 unsigned long
	printf("Size of int : %lu\n", (unsigned long) sizeof(int)); 
	printf("Size of short : %lu\n", (unsigned long) sizeof(short)); 
	printf("Size of long : %lu\n", (unsigned long) sizeof(long)); 
	printf("Size of float : %lu\n", (unsigned long) sizeof(float)); 
	printf("Size of double : %lu\n", (unsigned long) sizeof(double)); 
	printf("Size of long double : %lu\n", (unsigned long) sizeof(long double)); 
	return 0;
}