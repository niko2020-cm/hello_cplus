//
// Created by luo on 2022/1/20.
//

#include "summaryOne.h"
#include "SavingsAccount.h"
#include <iostream>
using namespace std;

void summaryOne()
{
    SavingsAccount sa0(1,21325302,0.015),sa1(1,58320212,0.015);

    sa0.deposit(5,5000);
    sa1.deposit(25,10000);
    sa0.deposit(45,5500);

    sa1.withdraw(60,4000);

    sa0.settle(90);
    sa1.settle(90);

    sa1.show();
    sa0.show();
    cout<<"Total:"<<SavingsAccount::getTotal()<<endl;

}