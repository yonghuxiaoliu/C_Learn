#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//����������ֵ
/*void swap(int* pa, int* pb);
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("����ǰ��ֵΪa=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("�������ֵΪa=%d,b=%d", a, b);

	return 0;
}

void swap(int * pa, int * pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;

}*/

//��ӡ��100-200�ڵ���������
/*int isprime(int x);//����
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


//���ֲ��ҷ�
/*int bsearch(int arx[], int x, int sz);
int main() {
	//��һ�����������в��Ҿ����Ī����
	//����ҵ��˷�����������±꣬�Ҳ����ͷ���-1
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	int size = sizeof(arr) / sizeof(arr[0]);//�������鳤��
	int ret = bsearch(arr, k,size);
	if (ret == -1) {
		printf("�Ҳ���ָ��������k:%d\n",k);
	}
	else {
		printf("�ҵ���,�±�Ϊ:%d\n",ret);
	}
	return 0;
}

int bsearch(int arx[], int x, int sz) {//���鴫��Ľ�������Ԫ�ص�ַ��������arx�Ǹ�ָ�룬���Կ��Դ���������������ȣ��ٴ���
	int left = 0;//��Ԫ���±�
	int right = sz - 1;
	while (left<=right) {//���±�С�����±��ʾ�м仹��Ԫ��δ������
	
		int mid = (left + right) / 2;//�м�Ԫ���±�
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


//���⺯�������������÷�
//���������� ����.h�ļ���ͷ�ļ�����
//�����Ķ��� ����.cpp�ļ���Դ�ļ�����
//�����ļ���Ϊ�ӷ� ģ��
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