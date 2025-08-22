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
        printf("1. 고객 추가\n");
        printf("2. 고객 처분\n");
        printf("3. \n");
        printf("4. 모든 노드 삭제\n");
        printf("5. 종료\n");
        printf("선택: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("값 입력: ");
            scanf("%d", &value);
            insertFirst(value);
            break;
        case 2:
            printf("값 입력: ");
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
            freeList(); // 종료 전 메모리 해제
            run = false;
            printf("종료\n");
            break;
        default:
            printf("다시 입력하세요\n");
        }
    }


	return 0;
}