#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//дһ���ݹ麯��������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)   ����1+7+2+9 ��Ϊ19

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
//ʹ�õݹ�ʵ��n��k�η�
double Cifang(int n, int k) {
	if (k < 0) {
		return (1.0 / Cifang(n, -k));
	}
	else if (k == 0) {
		return 1;//��else����֮�� return 1�����ڽ���k-1�������ݹ����
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