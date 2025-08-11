
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <vector>
using namespace std;

//�ŷ� ���� - ������ ��� �ڷ���
enum TransactionType {
	�Ա�, ���
};

//�ŷ� ����ü �ڷ���
struct Transaction {
	//��� ���� - public��
	TransactionType type; //�ŷ� ����
	int amount;   //�ŷ� �ݾ�

	//������ �����
	Transaction(TransactionType type, int amount);
};

class BankAccount {
private:
	int accountNumber; //���� ��ȣ
	string owner;      //������
	int balance;       //�ܰ�
	vector<Transaction> transactions; //�ŷ�

public:
	//������ ����� - �⺻ �Ű����� �ʱ�ȭ�ϰ� �����ο����� �Ű����� �ʱ�ȭ ���� ����
	BankAccount(int accountNumber, string owner, int balance = 0);

	//��� �Լ� �����
	void deposit(int amount);  //�Ա� ���
	void withdraw(int amount); //��� ���
	void displayInfo();        //���� ���� ���
	void getTransactionHistory();  //�ŷ� ���� ���
	int getaccountnumber();
private:
	void addTransaction(TransactionType type, int amount); //�ŷ� �߰�
};
#endif 