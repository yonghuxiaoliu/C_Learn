#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//求二进制中不同位的个数 eg:1999,2299的结果为7
//两个int（32）整数m和	n的二进制表达式中，有多少个位（bit）不同
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
//	int tmp = m ^ n;//异或，相同的地方为0，不同的即为1
//	return count_bit_one(tmp);//计算1的个数即为不同位的个数
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












////获取一个整数二进制系列中所有的偶数位和奇数位，分别打印出二进制序列
//void print_jhw(int m) {
//	int i = 0;
//	printf("奇数位:\n");
//	for (i = 30; i >= 0; i -= 2) {
//		printf("%d ", (m >> i) & 1);//m右移i位，&1
//	}
//	printf("\n");
//
//}
//
//void print_osw(int m) {
//	int i = 0;
//	printf("偶数位:\n");
//	for (i = 31; i >= 0; i -= 2) {
//		printf("%d ", (m >> i) & 1);//m右移i位，移位后&1，是1则1,因为1只有最后一位为1，
//									//相当于只对比最后一位，由最后一位决定，最后一位是1则1，是0则0
//									//00000000000000000000101 &00000000000000000000001为1
//									//00000000000000000000010 &00000000000000000000001为0
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