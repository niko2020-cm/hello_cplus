//
// Created by luo on 2022/1/20.
//

#ifndef HELLO_CPLUS_SAVINGSACCOUNT_H
#define HELLO_CPLUS_SAVINGSACCOUNT_H

class SavingsAccount {
private:
    int id;             //账号
    double balance;     //余额
    double rate;        //存款年利率
    int lastDate; //上次变更余额的日期
    double accumulation;//余额按日累加之和
    static double total;//所有账户的总金额

    /*记录一笔账，date为日期，amount为金额，desc为说明*/
    void record(int date, double amount);
        /*获得到指定日期为止的存款金额按日累积值*/
    double accumulate(int date) const {
        return accumulation + balance * (date - lastDate);
    }

public:
    //构造函数
    SavingsAccount(int date, int id, double rate);//构造必须要有账户id 日期

    /*信息获取方法*/
    int getId() const { return id; }
    double getBalance()const{return balance;}
    double getRate()const{return rate;}
    static double getTotal(){return total;}

    /*存入现金*/
    void deposit(int date,double amount);
    /*取钱*/
    void withdraw(int date,double amount);
    /*结算利息*/
    void settle(int date);
    /*显示账户信息*/
    void show()const;

};


#endif //HELLO_CPLUS_SAVINGSACCOUNT_H
