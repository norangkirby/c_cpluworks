#include "account.h"
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<BankAccount> accounts;
int nextaccountnumber = 1000;

void createaccount() {
	string name;
	cin.ignore();
	cout << "�Է�:";
	getline(cin, name);

	BankAccount newaAccount(nextaccountnumber, name);
	accounts.push_back(newaAccount);
	cout << "���� �Ϸ�| ���¹�ȣ: "<<nextaccountnumber << endl;
	nextaccountnumber++;
}

BankAccount* searchAccount(int accnum) {
	for (auto& account : accounts) {
		if (account.getaccountnumber() == accnum) {
			return &account;
		}
	}
}

void deposit() {
	int accnum;
	int amount;
	cout << "���¹�ȣ �Է�: ";
	cin >> accnum;
	BankAccount* account = searchAccount(accnum);
	if (account) {
		cout << "�Ա� �ݾ�: ";
		cin >> amount;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "���ڸ� �Է��ϼ���" << endl;
			return;
		}
		cout << "�Ա� �Ϸ�" << endl;
		account->deposit(amount);
	}
	else {
		cout << "���� ����" << endl;
	}

}

void withdraw() {
	int accnum;
	int amount;
	cout << "���¹�ȣ �Է�: ";
	cin >> accnum;
	BankAccount* account = searchAccount(accnum);
	if (account) {
		cout << "��� �ݾ�: ";
		cin >> amount;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "���ڸ� �Է��ϼ���" << endl;
			return;
		}
		account->withdraw(amount);
		cout << "��� �Ϸ�" << endl;

	}
	else {
		cout << "���� ����" << endl;
	}

}

void display() {
	int accnum;
	cout << "���¹�ȣ �Է�: ";
	cin >> accnum;
	BankAccount* account = searchAccount(accnum);
	if (account) {
		account->displayInfo();
		account->getTransactionHistory();
	}
	else {
		cout << "���� ����" << endl;
	}


}
int main()
{
	bool run = true;
	int choice;

	while (true) {
		cout << "========================================" << endl;
		cout << "1.���»���|2.����|3.���|4.���°˻�|5.����" << endl;
		cout << "========================================" << endl;
		cout << "�Է�: ";
		cin >> choice;
		switch (choice) {
		case 1:
			createaccount();
			break;
		case 2:
			deposit();
			break;
		case 3:
			withdraw();
			break;
		case 4:
			display();
			break;
		case 5:
			cout << "����" << endl;
			run = false;
			break;
		default:
			cout << "�ٽ� �Է�" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}