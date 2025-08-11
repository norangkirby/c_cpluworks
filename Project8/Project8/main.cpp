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
	cout << "입력:";
	getline(cin, name);

	BankAccount newaAccount(nextaccountnumber, name);
	accounts.push_back(newaAccount);
	cout << "생성 완료| 계좌번호: "<<nextaccountnumber << endl;
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
	cout << "계좌번호 입력: ";
	cin >> accnum;
	BankAccount* account = searchAccount(accnum);
	if (account) {
		cout << "입금 금액: ";
		cin >> amount;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "숫자를 입력하세요" << endl;
			return;
		}
		cout << "입금 완료" << endl;
		account->deposit(amount);
	}
	else {
		cout << "계좌 없음" << endl;
	}

}

void withdraw() {
	int accnum;
	int amount;
	cout << "계좌번호 입력: ";
	cin >> accnum;
	BankAccount* account = searchAccount(accnum);
	if (account) {
		cout << "출금 금액: ";
		cin >> amount;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "숫자를 입력하세요" << endl;
			return;
		}
		account->withdraw(amount);
		cout << "출금 완료" << endl;

	}
	else {
		cout << "계좌 없음" << endl;
	}

}

void display() {
	int accnum;
	cout << "계좌번호 입력: ";
	cin >> accnum;
	BankAccount* account = searchAccount(accnum);
	if (account) {
		account->displayInfo();
		account->getTransactionHistory();
	}
	else {
		cout << "계좌 없음" << endl;
	}


}
int main()
{
	bool run = true;
	int choice;

	while (true) {
		cout << "========================================" << endl;
		cout << "1.계좌생성|2.예금|3.출금|4.계좌검색|5.종료" << endl;
		cout << "========================================" << endl;
		cout << "입력: ";
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
			cout << "종료" << endl;
			run = false;
			break;
		default:
			cout << "다시 입력" << endl;
			break;
		}
	}

	system("pause");
	return 0;
}