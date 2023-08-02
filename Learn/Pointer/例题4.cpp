#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一个递归函数，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)   返回1+7+2+9 和为19

//
//int DigitSum(unsigned int num) {
//	if (num < 10) {
//		return num;
//	}
//	else {
//		return num%10+DigitSum(num / 10);
//	}
//}
//
//int main() {
//	unsigned int num;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}



//************************************************************
//使用递归实现n的k次方
double Cifang(int n, int k) {
	if (k < 0) {
		return (1.0 / Cifang(n, -k));
	}
	else if (k == 0) {
		return 1;//从else过来之后 return 1，不在进行k-1操作。递归结束
	}
	else {
		return n * Cifang(n, k - 1);
	}
}

int main() {
	int n, k;
	double ret;
	scanf("%d %d", &n, &k);
	ret = Cifang(n, k);
	printf("ret = % lf", ret);
	return 0;
}