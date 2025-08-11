#pragma once
#include <iostream>

using namespace std;

/*�߻� Ŭ����:
	-���� �Ұ��� �����Լ��� ������ �ִ� Ŭ����
	-virtual Ű���带 ����
	-����Ҹ��� �ʼ�
	*/
class Animal {
public:
	virtual  ~Animal() {}//����Ҹ���

	void breathe() {
		cout << "���� ���ϴ�." << endl;
	}
	//�����Լ� ���� �� ��ӹ��� Ŭ�������� ���� ������ ��� ��
	//�Լ� �ڿ� override Ű���尡 ��
	virtual void cry() = 0;
};
