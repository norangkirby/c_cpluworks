#include "drink.h"
#include "alcohol.h"
#include <iostream>
using namespace std;

int main() {
    drink coffee("Ŀ��", 2500, 4);
    drink greentea("����", 3000, 3);
    alcohol soju("����", 3500, 2, 14.3f); // float ���ͷ����� f ���̱�

    drink::printtitle();
    coffee.printdata();
    greentea.printdata();
    soju.printdata();

    int total = coffee.calc() + greentea.calc() + soju.calc();
    cout << "�Ѿ�: " << total << "��" << endl;

    return 0;
}
