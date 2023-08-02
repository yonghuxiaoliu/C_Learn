#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//讲解函数声明的真正用法
//函数的声明放在.h文件中
//函数的定义放在.c文件中
//这俩模块成为加法 模块
#include "add2.h"

int main() {
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}