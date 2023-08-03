#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main(){
//	char arr[] = "abcdefg";
//	char* p = arr;
//	printf("%s\n", arr);
//	printf("%s\n", p);
//	return 0;
//}

//int main() {
//	const char* p = "abcdefg";//此字符串是一个常量字符串，所以不可使用*p改变首元素的值
//	//printf("%c\n", *p);//p指针指向的是字符串首元素地址
//	//printf("%s\n", p);
//	return 0;
//}

//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char * p1 = "abcdef";//常量字符串
//	const char * p2 = "abcdef";
//	//if (arr1 == arr2) {//arr1与arr2在开辟的两个不同的空间，数组名是首元素的地址，所以两者不等
//	if(p1==p2){//p1,p2是两个指向同一字符串的指针，指向的都是此字符串的首元素的地址，所以相等
//		printf("相等\n");
//	}
//	else {
//		printf("不等\n");
//
//	}
//	return 0;
//}


/****************************************************************/
//指针数组（存放指针的数组）
//int main() {
//	//char ch[5] = { 0 };
//	//int a1[3] = { 0 };
//	//int* a2[4];//存放整形指针的数组--指针数组
//	//char* a3[5];//存放字符指针的数组--指针数组
//	
//
//	int i = 0;
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr1[3] = { &a,&b,&c };
//	printf("&a=%p\narr1[0]=%p\n", &a, arr1[0]);
//	for (i = 0; i < 3; i++) {
//		printf("%d ", *(arr1[i]));
//	}
//	return 0;
//}

//指针数组的使用
//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 5; j++) {
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}