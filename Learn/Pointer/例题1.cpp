#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*int main() {
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;//改完之后，一次访问两个字节，访问（元素的一半）
	int i = 0;
	for (i = 0; i < 4; i++) {
		*(p + i) = 0;
	}
	for (i = 0; i < 5; i++) {
		printf("%d", arr[i]);
	}
	return 0;

}	*/



/*int main() {
	int a = 0x11223344;//四个字节
	char* pc = (char*)&a;//一个字节
	*pc = 0;
	printf("%x\n", a);
	return 0;
}*/



/*
int i;//全局变量--不初始化--默认值为0
int main() {
	i--;
	//-1
	//10000000000000000000000000000001 原码
	//11111111111111111111111111111110 反码
	//11111111111111111111111111111111 补码

	if (i > sizeof(i)) {//计算变量、类型所站内存的大小》=0（自动转为无符号数
		printf(">\n");
	}
	else {
		printf("<\n");
	}
	return 0;
}
*/


/*int main() {
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a=%d,b=%d,c=%d\n", a, b, c);
	return 0;
}*/







//求一个数 二进制表示中的1的个数
//13
//00000000000000000000000000001101
//15
//00000000000000000000000000001111
// 
// 对于-1时，原程序不符
// 改进
// -1
// 10000000000000000000000000000001
// 11111111111111111111111111111110
// 11111111111111111111111111111111
//int count_bit_one(int n) {

//法一
/*int count_bit_one(unsigned int n) {
	int count = 0;
	while (n) {
		if (n % 2 == 1) {
			count++;
		}
		n = n / 2;
	}
	return count;
}
*/


//法二 
// 改进
// -1
// 10000000000000000000000000000001 原码
// 11111111111111111111111111111110	反码
// 11111111111111111111111111111111	补码
// 与00000000000000000000000000000001与补码按位与，上面的数再向右移位
/*int count_bit_one(int n) {
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++) {
		if (((n >> i) & 1) == 1) {
			count++;
		}
	}
	return count;
}
*/


//法三
//n=n&(n-1)
//13
//1101 n
//1100 n-1
//n=n&(n-1)=1100
//1011 n-1
//n=n&(n-1)=1000
//0111 n-1
//n=n&(n-1)=0000
/*int count_bit_one(int n) {
	int count = 0;
	while (n) {
		n = n & (n - 1);
		count++;
	}
	return count;
}*/

/*int main() {
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("count=%d\n", count);
	return 0;

}

*/