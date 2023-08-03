#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//*****************二维数组传参*******************
//形参如何去设置
void test1(int(*arr)[5]) {printf("1成功\n");}//因为二维数组传入的是数组第一行的地址（第一行有五个元素)
											//所以用int(*arr)[5]接收，这是指向有5个int型元素数组的数组指针
void test2(int arr[3][5]) { printf("2成功\n"); }
void test3(int arr[][5]) { printf("3成功\n"); }
//int main() {
//	int arr[3][5] = { {0} };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}


//***************二级指针作形参********************
//二级指针作形参可以接收什么类型的实参
void ceshi(char** p) { printf("ceshi成功\n"); }
//int main() {
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr1[10];
//	ceshi(&pc);//一级指针的地址
//	ceshi(ppc);//二级指针
//	ceshi(arr1);//指针数组名
//	return 0;
//}



//********************函数指针**********************
//指向函数的指针--存放函数地址的指针

int my_add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
//int main() {
//	int a = 10;
//	int b = 20;
//	int ret;
//	//对照数组指针 int（*p)[10]=&arr;
//	int(*pa)(int, int) = &my_add;//函数指针，或int(*pa)(int, int) = my_add;
//	
//	printf("%p\n", pa);
//	printf("%p\n", &my_add);
//	//&函数名 和 函数名都是函数的地址
//	printf("%p\n", my_add);
//
//	ret = (*pa)(a, b);
//	printf("ret=%d\n", ret);
//	return 0;
//}