#include <stdio.h>
#include <stdlib.h>

void insert(int arr[], int size) {
	int i, j, tmp;

	for (i = 1; i < size; i++) {
		tmp = arr[i];
		for (j = i; j > 0 && arr[j - 1] > tmp; j--) {
			arr[j] = arr[j - 1];
		}
		arr[j] = tmp;
	}

	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int a;
	printf("ют╥б: ")
	scanf("%d", &a);
	int* arr = (int*)malloc(sizeof(int) * a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
	}
	insert(arr, a);
	
	return 0;
}