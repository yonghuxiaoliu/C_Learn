#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ӡ99�˷���
void print_table(int n) {
	int i = 1;
	for (i = 1; i <= n; i++) {
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf("%-3d*%-3d=%-3d  ", i, j, i * j);
		}
		printf("\n");
	}

}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}



//*******************************************************************
//ʵ�������ַ����Ĺ��ܣ�����ʹ���ַ�������)
//*******************************************************************
//һһһһһһһһһһһһһһһһһһһһһһһһһһһһһһһһһһһһ
//�Լ�˼·


void my_print(char* arr,int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("arr[%d]=%c ", i, *(arr + i));
	}
	printf("\n");

}
//�Լ���д�ķǵݹ�(ͨ��ָ�룩
//void reverse_string(char* arr, int sz) {
//	int i = 0;
//	int j = sz - 1;
//	int tmp = 0;
//	for (i = 0, j = sz - 1; i < j; i++, j--) {
//		tmp = *(arr + i);
//		*(arr + i) = *(arr + j);
//		*(arr + j) = tmp;
//	}
//
//}

//�Լ���д�ķǵݹ飨ͨ�����飩
//void reverse_string(char* arr, int sz) {
//	int  left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//	while (left < right) {
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//	
//
//}

//�ǵݹ�������
//int main() {
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;//��\0
//	my_print(arr, sz);
//	//reverse_string(arr,sz);
//	reverse_string(arr, sz);
//	printf("�����:\n");
//	my_print(arr, sz);
//	return 0;
//}


//�Լ���д�ĵݹ�ʵ��
//int reverse_string(char* arr, int sz,int juli) {
//	int  left = 0+juli;
//	int right = sz - 1-juli;
//	int tmp = 0;
//	if (left < right) {
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		reverse_string(arr, sz, juli + 1);
//	}
//	else return 0;
//	
//}
//�Լ���д�ĵݹ�������
//int main() {
//	int juli=0;
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0])-1;//��\0
//	my_print(arr,sz);
//	reverse_string(arr, sz,juli);
//	printf("�����:\n");
//	my_print(arr,sz);
//	return 0;
//}

//������������������������������������������������������������������������
//��ʦ����
//int my_strlen1(char* arr) {
//	int count = 0;
//	while (*arr != '\0') {
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//void reverse_string(char* arr) {
//	char tmp = arr[0];
//	int len = my_strlen1(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen1(arr + 1) >= 2) {
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = tmp;
//}
//
//int main() {
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n",arr);//���ַ��� ��ֱ�Ӵ�ӡ
//	return 0;
//}
