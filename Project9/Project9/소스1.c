#include <stdio.h>

#include <stdlib.h>

#include <string.h>
#include <Windows.h>

/*
재귀 알고리즘: 자기가 자신을 호출하는 함수- 자기 자신보다 작은 입력값으로 호출해야 함
*/

int func(int a) {
	int total = 1;
	for (int i = 1; i <= a; i++) {
		total *= i;
	}
	return total;
	
	
}

int fact(int a) {

	if (a <= 0) {
		Sleep(1000);
		return 1;
	}
	else {
		return a * fact(a - 1);
	}

}

int fibo(int a) {
	int* arr = (int*)malloc(sizeof(int) * a);
	arr[0] = 1, arr[1] = 1;
	for (int i = 2; i < a; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	int result = arr[a - 1];
	free(arr); 

	return result;

}

int fibo2(int a) {
	if (a <= 2) {
		return 1;
	}
	else {
		return fibo2(a - 1) + fibo2(a - 2);
	}

}

int main() {
	for (int i = 1; i < 12; i++) {
		printf("%d ", fibo(i));
	}
	return 0;
}