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
//函数指针数组：存放函数指针的数组
//int main() {
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d\n",(*parr[i])(2, 3));
//	}
//	return 0;
//
//}
	
//*************************函数指针数组的用途--转移表**************************
//计算器
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
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入一个数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入一个数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入一个数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入一个数:>");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
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
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			int ret = parr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("退出\n");
//		}
//		else {
//			printf("选择错误！\n");
//		}
//	} while (input);
//	return 0;
//}

//*************************回调函数：就是一个通过函数指针调用的函数*******
void add1(int x,int y) {
	printf("成功调用:%d", x+y);
}

void test(void(*p)(int,int)) {
	printf("test\n");
	int a = 2;
	int b = 4;
	p(a,b);//或(*p)(a,b);

}
int main() {
	test(add1);
	return 0;
}
////使用回调函数改进（计算器）
//void calc(int(*pf)(int, int)) {//以pf函数指针接收函数地址
//	int x = 0;
//	int y = 0;
//	printf("请输入一个数:>");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", (*pf)(x, y));//或pf(x, y) ,通过函数地址调用相关函数
//}
//int main() {
//	int input = 0;
//
//	do {
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);//函数名就是函数的地址
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
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//}