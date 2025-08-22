#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>
#define maxque 10
#define maxnamelen 20

typedef struct {
	char* data[maxque];
	int front;
	int rear;

}que;

void init(que* q) {
	q->front = 0;
	q->rear = 0;
	for (int i = 0; i < maxque; i++) {
		q->data[i] = NULL;
	}
}
int main() {
	que q;
	char name[maxnamelen];
	bool run = true;
	int choice;
	init(&q);
    while (run) {
        printf("\n==============================\n");
        printf("1. �� �߰�\n");
        printf("2. �� ó��\n");
        printf("3. \n");
        printf("4. ��� ��� ����\n");
        printf("5. ����\n");
        printf("����: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("�� �Է�: ");
            scanf("%d", &value);
            insertFirst(value);
            break;
        case 2:
            printf("�� �Է�: ");
            scanf("%d", &value);
            insertLast(value);
            break;
        case 3:
            printList();
            break;
        case 4:
            freeList();
            break;
        case 5:
            freeList(); // ���� �� �޸� ����
            run = false;
            printf("����\n");
            break;
        default:
            printf("�ٽ� �Է��ϼ���\n");
        }
    }


	return 0;
}