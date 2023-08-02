#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
int main() {
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	//for (i = 0; i < 10; i++) {
	//	printf("%p ====== %p\n", p + i, &arr[i]);
	//}
	for (i = 0; i < 10; i++) {
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++) {
		printf("arr[%d]=%d\n", i,*(p + i));//arr[i]
	}


	return 0;
}*/

//二级指针
/*int main() {
	int a = 10;
	int* pa = &a;
	int** ppa = &pa;
	//int * * *pa=&pa
	printf("a=%d ", **ppa);
	return 0;
}*/

//指针数组与数组指针
/*int main() {
	int a = 10;
	int b = 20;
	int c = 30;
	int arr[10];//整形数组
	int* arr2[3] = { &a,&b,&c };//指向int型指针的数组
	int i = 0;
	for (i = 0; i < (sizeof(arr2) / sizeof(arr2[0])); i++) {
		printf("arr[%d]=%p,解引用后：%d\n", i, arr2[i], *(arr2[i]));
	}
	return 0;
}*/

//编写实现reverse函数 对数组操作

void My_printf(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("arr[%d]=%d  ", i, arr[i]);
	}
	printf("\n");
}

void My_reverse(int arr[], int sz) {
	int left = 0;
	int right = sz - 1;

	while (left < right) {
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = arr[left];
		left++;
		right--;
	}
}
/*
int main() {
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	My_printf(arr, sz);
	My_reverse(arr, sz);
	My_printf(arr, sz);
	return 0;
}*/


//交换两组中的元素（数组大小相同）
/*int main() {
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++) {
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	My_printf(arr1, sz);
	My_printf(arr2, sz);
	return 0;
}*/