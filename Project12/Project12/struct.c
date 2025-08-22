#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define size 10
typedef struct {
	int data[size];
	int front;
	int rear;
}que;

void init(que* q) {
	q->front = 0;
	q->rear = 0;
}


bool empty(que* q) {
	return q->front == q->rear;
}

bool full(que* q) {
	return (q->rear + 1) % size == q->front;
}

void enque(que* q, int x) {
	if (full(q)) {
		puts("≤À ¬¸\n");
		return;
	}
	q->data[q->rear] = x;
	q->rear = (q->rear + 1) % size;
}

void deque(que* q) {
	if (empty(q)) {
		puts("≈÷ ∫ˆ\n");
		return;
	}
	int value = q->data[q->front];
	printf("√ﬂ√‚: %d\n", value);
	q->front = (q->front + 1) % size;
}

void printque(que* q) {
	printf("≈• ªÛ≈¬: ");
		if (empty(q)) {
			puts("∫ÒæÓ ¿÷¿Ω\n");
			return;
		}
		int i;
		i = q->front;
		while(i!= q->rear) {
			printf("%d ", q->data[i]);
			i = (i + 1) % size;
		}
		printf("\n");
}
int main() {

	que q1;
	que q2;
	init(&q1);
	init(&q2);

	puts("µ•¿Ã≈Õ ª¿‘");
	enque(&q1, 10);
	enque(&q1, 20);
	enque(&q1, 30);
	enque(&q2, 10);
	enque(&q2, 20);
	enque(&q2, 30);
	deque(&q1);
	printque(&q1);
	printque(&q2);
	return 0;
}