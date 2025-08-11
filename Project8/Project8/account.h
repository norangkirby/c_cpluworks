
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <vector>
using namespace std;

//거래 유형 - 열거형 상수 자료형
enum TransactionType {
	입금, 출금
};

//거래 구조체 자료형
struct Transaction {
	//멤버 변수 - public형
	TransactionType type; //거래 유형
	int amount;   //거래 금액

	//생성자 선언부
	Transaction(TransactionType type, int amount);
};

class BankAccount {
private:
	int accountNumber; //계좌 번호
	string owner;      //예금주
	int balance;       //잔고
	vector<Transaction> transactions; //거래

public:
	//생성자 선언부 - 기본 매개변수 초기화하고 구현부에서는 매개변수 초기화 하지 않음
	BankAccount(int accountNumber, string owner, int balance = 0);

	//멤버 함수 선언부
	void deposit(int amount);  //입금 기능
	void withdraw(int amount); //출금 기능
	void displayInfo();        //계좌 정보 출력
	void getTransactionHistory();  //거래 내역 출력
	int getaccountnumber();
private:
	void addTransaction(TransactionType type, int amount); //거래 추가
};
#endif 