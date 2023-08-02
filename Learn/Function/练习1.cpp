#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//交换两数的值
/*void swap(int* pa, int* pb);
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("交换前的值为a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("交换后的值为a=%d,b=%d", a, b);

	return 0;
}

void swap(int * pa, int * pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;

}*/

//打印出100-200内得所有素数
/*int isprime(int x);//声明
int main() {
	int i = 0;
	for (i = 100; i <= 200; i++) {
		if (isprime(i)) {
			printf("%d ", i);
		}
	}
	return 0;

}
int isprime(int x) {
	int j = 0;
	for (j = 2; j < sqrt(x); j++) {
		if (x % j == 0) {
			return 0;
		}
	}
	return 1;
}*/


//二分查找法
/*int bsearch(int arx[], int x, int sz);
int main() {
	//在一个有序数组中查找具体的莫个数
	//如果找到了返回这个数的下标，找不到就返回-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	int size = sizeof(arr) / sizeof(arr[0]);//计算数组长度
	int ret = bsearch(arr, k,size);
	if (ret == -1) {
		printf("找不到指定的数字k:%d\n",k);
	}
	else {
		printf("找到了,下标为:%d\n",ret);
	}
	return 0;
}

int bsearch(int arx[], int x, int sz) {//数组传入的仅仅是首元素地址，本质上arx是个指针，所以可以从主函数中求出长度，再传入
	int left = 0;//左元素下标
	int right = sz - 1;
	while (left<=right) {//左下标小于右下标表示中间还有元素未被查找
	
		int mid = (left + right) / 2;//中间元素下标
		if (arx[mid] < x) {
			left = mid + 1;
		}
		else if (arx[mid] > x) {
			right = mid - 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}*/


//讲解函数声明的真正用法
//函数的声明 放在.h文件（头文件）中
//函数的定义 放在.cpp文件（源文件）中
//这俩文件成为加法 模块
/*
#include "add.h"

int main() {
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}*/