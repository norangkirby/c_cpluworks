#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>

#define max_queue 4

int que[max_queue];
int front = 0;
int rear = 0;

void enque(int x) {
	que[rear] = x;
	rear = (rear + 1) % max_queue;
	printf("삽입 완료\n");
	printf("front= %d rear= %d\n", front, rear);
}

int deque() {
	if (front == rear) {
		printf("큐 없음\n");
		return -1;
	}
	int data;
	data = que[front];
	front = (front + 1) % max_queue;
	return data;
}
int main() {
	puts("데이터 삽입");
	enque(10);
	enque(20);
	enque(30);

	int val;
	val = deque();
	printf("%d\n", val);
	val = deque();
	printf("%d\n", val);

	return 0;
}