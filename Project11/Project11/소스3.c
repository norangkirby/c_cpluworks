#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>

int main() {

	int size;
	scanf("%d", &size);

	int* arr = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	int i, j;
	for (i = 0; i < size; i++) {
		int temp = arr[i];
		for (j = i; j > 0 && arr[j - 1]>temp; j--) {
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}

}