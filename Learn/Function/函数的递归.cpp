#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//设计一个程序，将输入的数字顺序打印出来(以*分开)
/*void fenge(int n)
{
	if (n > 9) {
		fenge(n / 10);//递归
	}
	printf("%d*", n % 10);

}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	//调用递归函数
	fenge(num);
	return 0;
}*/




//自己设计一个计算数组长度的函数
/*int my_strlen(char* str) {//数组作为参数传输入时，传进去的是数组首元素地址
	int n = 0;
	for (n = 0;; n++) {
		if (*str != '\0') {
			str++;
		}
		else break;
	}
	return n;

}*///自己编写的

/*int my_strlen(char* str) {//数组作为参数传输入时，传进去的是数组首元素地址
	int n = 0;
	while(*str != '\0'){
			str++;
			n++;
		}
	return n;

}*/

//设计一个函数求数组长度，但不能定义变量（不能使用计数器，使用递归）
//把大事化小
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//3
int my_strlen(char * str) {
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//将str的地址加1，即读取数组下一个元素
	else
		return 0;
}

/*int main() {
	
	char arr[] = "bitpengge";
	int size1;
	size1 = my_strlen(arr);
	printf("%d", size1);
	return 0;
}*/