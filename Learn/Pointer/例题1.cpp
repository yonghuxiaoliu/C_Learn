#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*int main() {
	int arr[] = { 1,2,3,4,5 };
	short* p = (short*)arr;//����֮��һ�η��������ֽڣ����ʣ�Ԫ�ص�һ�룩
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
	int a = 0x11223344;//�ĸ��ֽ�
	char* pc = (char*)&a;//һ���ֽ�
	*pc = 0;
	printf("%x\n", a);
	return 0;
}*/



/*
int i;//ȫ�ֱ���--����ʼ��--Ĭ��ֵΪ0
int main() {
	i--;
	//-1
	//10000000000000000000000000000001 ԭ��
	//11111111111111111111111111111110 ����
	//11111111111111111111111111111111 ����

	if (i > sizeof(i)) {//���������������վ�ڴ�Ĵ�С��=0���Զ�תΪ�޷�����
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







//��һ���� �����Ʊ�ʾ�е�1�ĸ���
//13
//00000000000000000000000000001101
//15
//00000000000000000000000000001111
// 
// ����-1ʱ��ԭ���򲻷�
// �Ľ�
// -1
// 10000000000000000000000000000001
// 11111111111111111111111111111110
// 11111111111111111111111111111111
//int count_bit_one(int n) {

//��һ
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


//���� 
// �Ľ�
// -1
// 10000000000000000000000000000001 ԭ��
// 11111111111111111111111111111110	����
// 11111111111111111111111111111111	����
// ��00000000000000000000000000000001�벹�밴λ�룬���������������λ
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


//����
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