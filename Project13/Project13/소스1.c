#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
   ���� �޸� ����� ���Ḯ��Ʈ - ����� �Է�
*/
typedef struct Node{
	int data;  //��尡 �����ϴ� ��
	struct Node* next; //���� ����� �ּ�
}Node;

int main()
{
	int num;    //����� ����
	int value;  //����� ������
	Node* head = NULL;    //head ��� �ʱ�ȭ
	Node* current = NULL; //���� ���
	Node* newNode = NULL; //�� ���

	printf("��� ������ �Է��ϼ���: ");
	scanf("%d", &num);

	//�Է��� ������ŭ ��� ���� �� ���� �ݺ�
	for (int i = 0; i < num; i++) {
		newNode = (Node*)malloc(sizeof(Node));

		printf("%d��° ��� �� �Է�: ", i + 1);
		scanf("%d", &value);

		//1. ��� ���� - �� �տ� ����
		newNode->data = value;
		newNode->next = NULL; //�� ��尡 head�� �����
		if (head == NULL) {
			head = newNode;
			current = newNode;
		}

		else {
			current->next = newNode;
			current = newNode;
		}
	}

	puts("���Ḯ��Ʈ ���");
	current = head;
	while (current != NULL) {
		printf("%d -> ", current->data);
		current = current->next;
	}
	puts("NULL");

	current = head;
	Node* temp;

	while (current != NULL) {
		temp = current->next;  // ���� ��� �ּ� �ӽ� ����
		free(current);         // ���� ��� �޸� ����
		current = temp;        // ���� ���� �̵�
	}

	return 0;
}
