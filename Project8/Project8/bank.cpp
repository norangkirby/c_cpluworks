#include <iostream>
#include "account.h"

//Transaction 생성자 구현 - 생성자 초기화 목록
Transaction::Transaction(TransactionType type, int amount) :
	type(type), amount(amount) {
}

//BankAccount 생성자 초기화 목록
BankAccount::BankAccount(int accountNumber, string owner, int balance) :
	accountNumber(accountNumber), owner(owner), balance(balance) {
}

//예금 기능 구현
void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else {
		balance += amount;
		cout << amount << "원이 정상 입금되었습니다. 현재 잔액: " << balance << "원\n";
		//입금 거래 추가
		//addTransaction(TransactionType::입금, amount);
		addTransaction(입금, amount);
	}
}

//출금 기능 구현
void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else if (amount > balance) {
		cout << "잔액이 부족합니다. 다시 입력하세요.\n";
	}
	else {
		balance -= amount;
		cout << amount << "원이 정상 출금되었습니다. 현재 잔액: " << balance << "원\n";
		//출금 거래 추가
		addTransaction(출금, amount);
	}
}

//계좌 정보 출력 
void BankAccount::displayInfo() {
	cout << "\n[계좌 정보]\n";
	cout << "    계좌 번호: " << accountNumber << endl;
	cout << "    예금주: " << owner << endl;
	cout << "    현재 잔고: " << balance << endl;
	cout << "-----------------------------\n";
}

int  BankAccount::getaccountnumber() {
	return accountNumber;
}

//거래 추가
void BankAccount::addTransaction(TransactionType type, int amount) {
	//거래 1건 객체 생성
	Transaction transaction(type, amount);
	//생성된 객체를 벡터에 저장
	transactions.push_back(transaction);
}

//거래 내역 출력
void BankAccount::getTransactionHistory() {
	cout << "[" << owner << "] 계좌 거래 내역(최근 "
		<< transactions.size() << "건)\n";
	if (transactions.empty()) {
		cout << "거래 내역이 없습니다.\n";
		return;  //즉시 종료
	}

	//범위 기반 for
	for (Transaction& transaction : transactions) {
		string typeStr = (transaction.type == 입금 ? "입금" : "출금");
		cout << " |" << typeStr << "| " << transaction.amount << "원\n";
	}
}