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
        puts("ť ����");
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
        puts("ť �����");
        return -1;
    }
    strcpy(name, que[front]);
    free(que[front]);  // �޸� ����
    front = (front + 1) % SONNOM;
    return 0;
}

int main() {
    char customer[LEN];

    enque("��A");
    enque("��B");
    enque("��C");

    while (!check()) {
        if (deque(customer) == 0) {
            printf("%s ó����\n", customer);
        }
    }

    return 0;
}
