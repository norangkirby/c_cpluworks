#include <stdio.h>
/*
	���� ����Ʈ(Linked List)
	- ���(node)��� �������� �޸� ����� �����ͷ� ����� �ڷᱸ��
	- �� ���� ������ + �ּ�(���� ���)�� ������
*/

typedef struct {
	int data;  //������ ��
	struct List* next;  //�ڱ� ���� ����ü ������
}List;


int main()
{
	List x, y, z;  //��� ����(3��)

	//������ ����
	x.data = 10;
	y.data = 20;
	z.data = 30;

	//��� ����(��ũ)
	x.next = &y; //x(head) -> y
	y.next = &z; //y -> z
	z.next = NULL; //������ ���

	//��� ���
	List* p; //���� ���
	p = &x;  //head ����� �ּ� ����

	printf("%d %x\n", x.data, p->next); //ù° ��� ���
	p = p->next; //���� ���� �̵�
	printf("%d %x\n", y.data, p->next); //�ι�° ���

	puts("=== ��ü ��� ��� ===");
	for (p = &x; p != NULL; p = p->next) {
		printf("%d -> ", p->data);
	}
	puts("NULL\n");

	
	return 0;
}