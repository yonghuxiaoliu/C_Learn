#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�׳�
//ѭ���ķ�ʽ
int Fac1(int num) {
	int i = 0;
	int ret = 1;
	for (i = 1; i<=num; i++) {
		ret *= i;
	}
	return ret;
}
//�ݹ�ķ�ʽ
int Fac2(int num) {
	if (num <= 1)
		return 1;//��Ľ׳�ҲΪ1
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
	printf(" % d�Ľ׳�Ϊ�� % d", n, ret);
	return 0;
}*/











//쳲��Ǽ���1.1.2.3.5.8.13.21.34.55....(ʱ�临�Ӷ�̫��)
//�ݹ鷽ʽ
/*int Fib(int n) {
	int count = 0;
	if (n == 3) {
		count++;//���Ե�����쳲������ļ������
	}
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);

}*/

//��ѭ������ʽ
//50
//49 48
//48 47 47 46
//47 46 46 45 45 45 44
int Fib(int n) {
	int a = 1;
	int b = 1;
	//int c = 0; //��Ϊ��n=1,2ʱ��������while��䣬��ʱ���Ϊ1.����ֱ����c=1
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