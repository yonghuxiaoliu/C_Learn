#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*int main() {
	int arr[10] = { 0 };
	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++) {
		*(p + i) = 1;
	}
	return 0;
}*/

int my_strlen(char* str) {
	char* start = str;
	char* end = str;
	while (*end != '\0') {
		end++;
	}
	return end - start;

}

/*int main() {
	char arr[] = "bit";
	int len = my_strlen(arr);
	printf("%d\n", len);

	return 0;
}*/