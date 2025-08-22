#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node* next;
} node;

node* head = NULL; // ���� ����Ʈ ������

void insertFirst(int value) {
    node* newnode = (node*)malloc(sizeof(node));
    newnode->data = value;
    newnode->next = head; // �� ��尡 ���� head�� ����Ŵ
    head = newnode;       // �� ��带 head�� �ٲ�
    printf("�տ� ���� �Ϸ�\n");
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
    printf("�ڿ� ���� �Ϸ�\n");
}

void printList() {
    if (head == NULL) {
        printf("����Ʈ�� ��� �ֽ��ϴ�.\n");
        return;
    }
    node* current = head;
    printf("����Ʈ: ");
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
    printf("��� ��� ���� �Ϸ�\n");
}

int main() {
    bool run = true;
    int choice, value;

    while (run) {
        printf("\n==============================\n");
        printf("1. �� �տ� ��� ����\n");
        printf("2. �� �ڿ� ��� ����\n");
        printf("3. ����Ʈ ���\n");
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
