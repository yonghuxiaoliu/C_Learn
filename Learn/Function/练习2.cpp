#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���⺯�������������÷�
//��������������.h�ļ���
//�����Ķ������.c�ļ���
//����ģ���Ϊ�ӷ� ģ��
#include "add2.h"

int main() {
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}