#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��������в�ͬλ�ĸ��� eg:1999,2299�Ľ��Ϊ7
//����int��32������m��	n�Ķ����Ʊ��ʽ�У��ж��ٸ�λ��bit����ͬ
//int count_bit_one(int n) {
//	int count = 0;
//	while (n) {
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int get_diff_bit(int m, int n) {
//	int tmp = m ^ n;//�����ͬ�ĵط�Ϊ0����ͬ�ļ�Ϊ1
//	return count_bit_one(tmp);//����1�ĸ�����Ϊ��ͬλ�ĸ���
//
//}
//
//int main() {
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}












////��ȡһ������������ϵ�������е�ż��λ������λ���ֱ��ӡ������������
//void print_jhw(int m) {
//	int i = 0;
//	printf("����λ:\n");
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d ", (m >> i) & 1);//m����iλ��&1
//	}
//	printf("\n");
//
//}
//
//void print_osw(int m) {
//	int i = 0;
//	printf("ż��λ:\n");
//	for (i = 31; i >= 0; i -= 2) {
//		printf("%d ", (m >> i) & 1);//m����iλ����λ��&1����1��1,��Ϊ1ֻ�����һλΪ1��
//									//�൱��ֻ�Ա����һλ�������һλ���������һλ��1��1����0��0
//									//00000000000000000000101 &00000000000000000000001Ϊ1
//									//00000000000000000000010 &00000000000000000000001Ϊ0
//	}
//	printf("\n");
//
//}
//
//int main() {
//	int m = 0;
//	scanf("%d", &m);
//	print_jhw(m);
//	print_osw(m);
//	return 0;
//}