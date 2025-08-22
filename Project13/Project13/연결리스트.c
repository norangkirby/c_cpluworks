#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node* next;
} node;

node* head = NULL; // 연결 리스트 시작점

void insertFirst(int value) {
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = value;
    newnode->next = head; // 새 노드가 기존 head를 가리킴
    head = newnode;       // 새 노드를 head로 바꿈
    printf("앞에 삽입 완료\n");
}

void insertLast(int value) {
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
    }
    else {
        node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newnode;
    }
    printf("뒤에 삽입 완료\n");
}

void printList() {
    if (head == NULL) {
        printf("리스트가 비어 있습니다.\n");
        return;
    }
    node* current = head;
    printf("리스트: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void freeList() {
    node* current = head;
    node* temp;

    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
    head = NULL;
    printf("모든 노드 삭제 완료\n");
}

int main() {
    bool run = true;
    int choice, value;

    while (run) {
        printf("\n==============================\n");
        printf("1. 맨 앞에 노드 삽입\n");
        printf("2. 맨 뒤에 노드 삽입\n");
        printf("3. 리스트 출력\n");
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
