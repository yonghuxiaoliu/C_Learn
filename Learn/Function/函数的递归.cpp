#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���һ�����򣬽����������˳���ӡ����(��*�ֿ�)
/*void fenge(int n)
{
	if (n > 9) {
		fenge(n / 10);//�ݹ�
	}
	printf("%d*", n % 10);

}

int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	//���õݹ麯��
	fenge(num);
	return 0;
}*/




//�Լ����һ���������鳤�ȵĺ���
/*int my_strlen(char* str) {//������Ϊ����������ʱ������ȥ����������Ԫ�ص�ַ
	int n = 0;
	for (n = 0;; n++) {
		if (*str != '\0') {
			str++;
		}
		else break;
	}
	return n;

}*///�Լ���д��

/*int my_strlen(char* str) {//������Ϊ����������ʱ������ȥ����������Ԫ�ص�ַ
	int n = 0;
	while(*str != '\0'){
			str++;
			n++;
		}
	return n;

}*/

//���һ�����������鳤�ȣ������ܶ������������ʹ�ü�������ʹ�õݹ飩
//�Ѵ��»�С
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//3
int my_strlen(char * str) {
	if (*str != '\0')
		return 1 + my_strlen(str + 1);//��str�ĵ�ַ��1������ȡ������һ��Ԫ��
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