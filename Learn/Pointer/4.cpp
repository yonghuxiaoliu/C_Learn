#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x * y;

}	
int Div(int x, int y) {
		return x / y;
}
//����ָ�����飺��ź���ָ�������
//int main() {
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n",(*parr[i])(2, 3));
//	}
//	return 0;
//
//}
	
//*************************����ָ���������;--ת�Ʊ�**************************
//������
void menu() {
	printf("***********************\n");
	printf("**** 1.add   2.sub ****\n");
	printf("**** 3.mul   4.div ****\n");
	printf("****	0.exit	  *****\n");
}

//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do {
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������һ����:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("������һ����:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������һ����:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������һ����:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	
//}

//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*parr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do {
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("�˳�\n");
//		}
//		else {
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}

//*************************�ص�����������һ��ͨ������ָ����õĺ���*******
void add1(int x,int y) {
	printf("�ɹ�����:%d", x+y);
}

void test(void(*p)(int,int)) {
	printf("test\n");
	int a = 2;
	int b = 4;
	p(a,b);//��(*p)(a,b);

}
int main() {
	test(add1);
	return 0;
}
////ʹ�ûص������Ľ�����������
//void calc(int(*pf)(int, int)) {//��pf����ָ����պ�����ַ
//	int x = 0;
//	int y = 0;
//	printf("������һ����:>");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", (*pf)(x, y));//��pf(x, y) ,ͨ��������ַ������غ���
//}
//int main() {
//	int input = 0;
//
//	do {
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);//���������Ǻ����ĵ�ַ
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//}