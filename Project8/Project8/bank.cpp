#include <iostream>
#include "account.h"

//Transaction ������ ���� - ������ �ʱ�ȭ ���
Transaction::Transaction(TransactionType type, int amount) :
	type(type), amount(amount) {
}

//BankAccount ������ �ʱ�ȭ ���
BankAccount::BankAccount(int accountNumber, string owner, int balance) :
	accountNumber(accountNumber), owner(owner), balance(balance) {
}

//���� ��� ����
void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else {
		balance += amount;
		cout << amount << "���� ���� �ԱݵǾ����ϴ�. ���� �ܾ�: " << balance << "��\n";
		//�Ա� �ŷ� �߰�
		//addTransaction(TransactionType::�Ա�, amount);
		addTransaction(�Ա�, amount);
	}
}

//��� ��� ����
void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "��ȿ�� �ݾ��� �Է��ϼ���.\n";
	}
	else if (amount > balance) {
		cout << "�ܾ��� �����մϴ�. �ٽ� �Է��ϼ���.\n";
	}
	else {
		balance -= amount;
		cout << amount << "���� ���� ��ݵǾ����ϴ�. ���� �ܾ�: " << balance << "��\n";
		//��� �ŷ� �߰�
		addTransaction(���, amount);
	}
}

//���� ���� ��� 
void BankAccount::displayInfo() {
	cout << "\n[���� ����]\n";
	cout << "    ���� ��ȣ: " << accountNumber << endl;
	cout << "    ������: " << owner << endl;
	cout << "    ���� �ܰ�: " << balance << endl;
	cout << "-----------------------------\n";
}

int  BankAccount::getaccountnumber() {
	return accountNumber;
}

//�ŷ� �߰�
void BankAccount::addTransaction(TransactionType type, int amount) {
	//�ŷ� 1�� ��ü ����
	Transaction transaction(type, amount);
	//������ ��ü�� ���Ϳ� ����
	transactions.push_back(transaction);
}

//�ŷ� ���� ���
void BankAccount::getTransactionHistory() {
	cout << "[" << owner << "] ���� �ŷ� ����(�ֱ� "
		<< transactions.size() << "��)\n";
	if (transactions.empty()) {
		cout << "�ŷ� ������ �����ϴ�.\n";
		return;  //��� ����
	}

	//���� ��� for
	for (Transaction& transaction : transactions) {
		string typeStr = (transaction.type == �Ա� ? "�Ա�" : "���");
		cout << " |" << typeStr << "| " << transaction.amount << "��\n";
	}
}