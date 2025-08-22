#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define SONNOM 5
#define LEN 20

char* que[SONNOM];
int front = 0;
int rear = 0;

bool check() {
    return front == rear;
}

bool full() {
    return (rear + 1) % SONNOM == front;
}

void enque(const char* name) {
    if (full()) {
        puts("큐 만원");
        return;
    }
    que[rear] = (char*)malloc(strlen(name) + 1);
    if (que[rear] != NULL) {
        strcpy(que[rear], name);
        rear = (rear + 1) % SONNOM;
    }
}

int deque(char* name) {
    if (check()) {
        puts("큐 비었음");
        return -1;
    }
    strcpy(name, que[front]);
    free(que[front]);  // 메모리 해제
    front = (front + 1) % SONNOM;
    return 0;
}

int main() {
    char customer[LEN];

    enque("고객A");
    enque("고객B");
    enque("고객C");

    while (!check()) {
        if (deque(customer) == 0) {
            printf("%s 처분중\n", customer);
        }
    }

    return 0;
}
