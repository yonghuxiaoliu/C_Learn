#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//*****************��ά���鴫��*******************
//�β����ȥ����
void test1(int(*arr)[5]) {printf("1�ɹ�\n");}//��Ϊ��ά���鴫����������һ�еĵ�ַ����һ�������Ԫ��)
											//������int(*arr)[5]���գ�����ָ����5��int��Ԫ�����������ָ��
void test2(int arr[3][5]) { printf("2�ɹ�\n"); }
void test3(int arr[][5]) { printf("3�ɹ�\n"); }
//int main() {
//	int arr[3][5] = { {0} };
//	test1(arr);
//	test2(arr);
//	test3(arr);
//	return 0;
//}


//***************����ָ�����β�********************
//����ָ�����βο��Խ���ʲô���͵�ʵ��
void ceshi(char** p) { printf("ceshi�ɹ�\n"); }
//int main() {
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr1[10];
//	ceshi(&pc);//һ��ָ��ĵ�ַ
//	ceshi(ppc);//����ָ��
//	ceshi(arr1);//ָ��������
//	return 0;
//}



//********************����ָ��**********************
//ָ������ָ��--��ź�����ַ��ָ��

int my_add(int x, int y) {
	int z = 0;
	z = x + y;
	return z;
}
//int main() {
//	int a = 10;
//	int b = 20;
//	int ret;
//	//��������ָ�� int��*p)[10]=&arr;
//	int(*pa)(int, int) = &my_add;//����ָ�룬��int(*pa)(int, int) = my_add;
//	
//	printf("%p\n", pa);
//	printf("%p\n", &my_add);
//	//&������ �� ���������Ǻ����ĵ�ַ
//	printf("%p\n", my_add);
//
//	ret = (*pa)(a, b);
//	printf("ret=%d\n", ret);
//	return 0;
//}