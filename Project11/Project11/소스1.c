#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[5] = { 41, 36, 8, 77, 15 };
	int i, j, tmp;

	for (i = 1; i < 5; i++) {
		tmp = arr[i];
		for (j = i; j > 0 && arr[j - 1] > tmp; j--) {
			arr[j] = arr[j - 1];
		}
		arr[j] = tmp;
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	in
	return 0;
}