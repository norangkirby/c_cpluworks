#include <iostream>
using namespace std;

/*
   �Լ� ���ǿ� ȣ��
   - �������� : main()�� ���������� ����, ���� ����, ������
   - �������� : �Լ� ���ȿ��� �����ǰ� ȣ���� �Ҹ�
   - �������� : ���������ε� ���� ����ȭ ��, �����տ� static ���
*/

//int x = 10; //���� ����
//int y = 10;

void click() {
	int x = 10; //���� ����
	static int y = 10; //���� ����ȭ ��

	x++;
	y++;

	cout << "x = " << x << ", y = " << y << endl;
}

int main()
{
	click(); //11 11
	click(); //11 12
	click(); //11 13

	return 0;
}
