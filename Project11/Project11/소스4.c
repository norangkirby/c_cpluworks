#include <stdio.h>

#include <stdlib.h>

int main() {

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int low = 0;
	
	int high = 9;

	int x = 8;
	int found = 0;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (arr[mid] == x) {
			printf("%d�� %d����\n", x, mid);
			found = 1;
			break;
		}
		else if (arr[mid] < x) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	if (!found) {
		printf("%d ����", x);
	}


	return 0;
}