#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int finder(int arr[], int size, int target) {
    int cnt = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("%d번째 ", i+1);
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int a;  
    scanf("%d", &a);
    int* arr = (int*)malloc(sizeof(int) * a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    int b;
    scanf("%d", &b);

    int count = finder(arr, a, b);
    printf("\n%d개 발견\n", count);

    free(arr);

    return 0;
}