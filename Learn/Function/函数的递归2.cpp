#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//阶乘
//循环的方式
int Fac1(int num) {
	int i = 0;
	int ret = 1;
	for (i = 1; i<=num; i++) {
		ret *= i;
	}
	return ret;
}
//递归的方式
int Fac2(int num) {
	if (num <= 1)
		return 1;//零的阶乘也为1
	else
		return num * Fac2(num - 1);
}

/*int main()
{
	int n;
	int ret = 0;
	scanf("%d", &n);
	//ret = Fac1(n);
	ret = Fac2(n);
	printf(" % d的阶乘为： % d", n, ret);
	return 0;
}*/











//斐波那级数1.1.2.3.5.8.13.21.34.55....(时间复杂度太高)
//递归方式
/*int Fib(int n) {
	int count = 0;
	if (n == 3) {
		count++;//测试第三个斐波那数的计算次数
	}
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);

}*/

//用循环的形式
//50
//49 48
//48 47 47 46
//47 46 46 45 45 45 44
int Fib(int n) {
	int a = 1;
	int b = 1;
	//int c = 0; //因为当n=1,2时，不进入while语句，此时结果为1.所以直接令c=1
	int c = 1;
	
	while (n > 2) {
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main() {
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	printf("ret=%d\n", ret);
	return 0;
}