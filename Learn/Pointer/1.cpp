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
//	const char* p = "abcdefg";//���ַ�����һ�������ַ��������Բ���ʹ��*p�ı���Ԫ�ص�ֵ
//	//printf("%c\n", *p);//pָ��ָ������ַ�����Ԫ�ص�ַ
//	//printf("%s\n", p);
//	return 0;
//}

//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char * p1 = "abcdef";//�����ַ���
//	const char * p2 = "abcdef";
//	//if (arr1 == arr2) {//arr1��arr2�ڿ��ٵ�������ͬ�Ŀռ䣬����������Ԫ�صĵ�ַ���������߲���
//	if(p1==p2){//p1,p2������ָ��ͬһ�ַ�����ָ�룬ָ��Ķ��Ǵ��ַ�������Ԫ�صĵ�ַ���������
//		printf("���\n");
//	}
//	else {
//		printf("����\n");
//
//	}
//	return 0;
//}


/****************************************************************/
//ָ�����飨���ָ������飩
//int main() {
//	//char ch[5] = { 0 };
//	//int a1[3] = { 0 };
//	//int* a2[4];//�������ָ�������--ָ������
//	//char* a3[5];//����ַ�ָ�������--ָ������
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

//ָ�������ʹ��
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