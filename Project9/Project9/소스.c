#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int findmax(int a[], int len) {
	int max = a[0];
	for (int i = 0; i < len; i++) {
		if (a[i] > max) {
			max = a[i];
		}


	}
	return max;
}

int main() {

	int len;
	scanf("%d", &len);
	int* arr = (int*)malloc(len * sizeof(int));
	for (int i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}
	printf("최대값: %d", findmax(arr, len));


	srand(time(NULL));
	char brr[5][100];
	for (int i = 0; i < 5; i++) {
		scanf("%s", brr[i]);
		printf("%s의 시리얼 넘버:  %d\n", brr[i], 100 + rand() % 91);
	}

	return  0;
}