#include <iostream>

using namespace std;

/*�߻� Ŭ����:
	-���� �Ұ��� �����Լ��� ������ �ִ� Ŭ����
	-virtual Ű���带 ����
	-����Ҹ��� �ʼ�
	*/
class Animal {
public:
	virtual  ~Animal(){}//����Ҹ���

	void breathe() {
		cout << "���� ���ϴ�." << endl;
	}
	//�����Լ� ���� �� ��ӹ��� Ŭ�������� ���� ������ ��� ��
	//�Լ� �ڿ� override Ű���尡 ��
	virtual void cry() = 0;
};

class Cat : public Animal {
public:
	void cry() override {
		cout << "�ֿ�"<<endl;
	}

	~Cat() override {
		cout << "���ڵ��� ON" << endl;
	}

};//inherit

class Dog : public Animal {
public:
	void cry()override {
		cout << "��¢�¼Ҹ�" << endl;
	}
	~Dog() override {
		cout << "���� �����̴�" << endl;
	}
};
int main() {
	/*Cat cat;
	cat.breathe();
	cat.cry();
	Dog dog;
	dog.breathe();
	dog.cry();*/

	Animal* cat = new Cat;
	cat->cry();

	Animal* dog = new Dog;

	delete cat;
	delete dog;

	return 0;
}