#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*111111��������һ�������Ŀռ�洢��
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;

}*/


//��ά����

//222222��ά����ı���(��׼)
/*int main() {
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++) {
		int j = 0;//ע��j=0Ҫ�ڵ�һ��ѭ�����涨��
		for (j = 0; j < 4; j++) {
			printf("a[%d][%d]=%d ", i, j, arr[i][j]);
		}
		printf("\n");//ÿһ�� �س�
	}
	return 0;
*/

//44444ʵ��ð������
void bubble_sort(int arr[],int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz-1; i++)	//(10��Ԫ�أ���Ҫ����9��ð������)
	{ 
		int flag = 1;//������һ��Ҫ����������Ѿ�����
		//ÿ��ð������
		int j=0;
		for (j = 0; j < sz-1-i; j++) //ÿ���в�ͬ�Ķ�����sz-1-i��ȥ�Ƚ�
		{
			if (arr[j] > arr[j + 1]){//ͬʱҲ�Ǽ���Ƿ�����Ĵ��룬
									//�������Ļ��Ͳ�ִ��if����飬flag��Ϊ1
									//�������if����飬��flag=0��
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			    flag = 0;//���������������ʵ����ȫ����
			}

		}
		if (flag == 1) break;
	}
	
}

/*int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr���������ĳ�����
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}*/