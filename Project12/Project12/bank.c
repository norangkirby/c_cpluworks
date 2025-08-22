#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define SONNOM 5
#define LEN 20

int que[SONNOM][LEN];
int front = 0;
int rear = 0;

int check() {
	return (front == rear);
}

int full() {
	return (rear + 1) % SONNOM == front;
}

void enque(const char* name) {
	if (full()) {
		puts("ť ����");
		return;
	}
	strcpy(que[rear], name);
	rear = (rear + 1)% SONNOM;
}

void deque(char* name) {
	if (check()) {
		puts("ť ����");
		return -1;
	}
	strcpy(name, que[front]);
	front = (front + 1) % SONNOM;
	return 0;
}

int main() {

	char customer[LEN];
	enque("��A");
	enque("��B");
	enque("��C");

	while (!check()) {
		deque(customer);
		printf("%s ó����\n", customer);
	}

	return 0;
}