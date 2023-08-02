#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*111111数组是有一段连续的空间存储的
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		printf("&arr[%d] = %p\n", i, &arr[i]);
	}
	return 0;

}*/


//二维数组

//222222二维数组的遍历(标准)
/*int main() {
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for (i = 0; i < 3; i++) {
		int j = 0;//注意j=0要在第一层循环里面定义
		for (j = 0; j < 4; j++) {
			printf("a[%d][%d]=%d ", i, j, arr[i][j]);
		}
		printf("\n");//每一行 回车
	}
	return 0;
*/

//44444实现冒泡排序
void bubble_sort(int arr[],int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz-1; i++)	//(10个元素，需要进行9趟冒泡排序)
	{ 
		int flag = 1;//假设这一趟要排序的数据已经有序
		//每趟冒泡排序
		int j=0;
		for (j = 0; j < sz-1-i; j++) //每趟有不同的对数（sz-1-i）去比较
		{
			if (arr[j] > arr[j + 1]){//同时也是检测是否有序的代码，
									//如果有序的话就不执行if代码块，flag仍为1
									//否则进入if代码块，令flag=0；
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			    flag = 0;//本趟排序的数据其实不完全有序
			}

		}
		if (flag == 1) break;
	}
	
}

/*int main() {
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序，拍成升序
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}*/