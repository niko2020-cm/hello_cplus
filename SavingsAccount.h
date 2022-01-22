//
// Created by luo on 2022/1/20.
//

#ifndef HELLO_CPLUS_SAVINGSACCOUNT_H
#define HELLO_CPLUS_SAVINGSACCOUNT_H

class SavingsAccount {
private:
    int id;             //�˺�
    double balance;     //���
    double rate;        //���������
    int lastDate; //�ϴα����������
    double accumulation;//�����ۼ�֮��
    static double total;//�����˻����ܽ��

    /*��¼һ���ˣ�dateΪ���ڣ�amountΪ��descΪ˵��*/
    void record(int date, double amount);
        /*��õ�ָ������Ϊֹ�Ĵ������ۻ�ֵ*/
    double accumulate(int date) const {
        return accumulation + balance * (date - lastDate);
    }

public:
    //���캯��
    SavingsAccount(int date, int id, double rate);//�������Ҫ���˻�id ����

    /*��Ϣ��ȡ����*/
    int getId() const { return id; }
    double getBalance()const{return balance;}
    double getRate()const{return rate;}
    static double getTotal(){return total;}

    /*�����ֽ�*/
    void deposit(int date,double amount);
    /*ȡǮ*/
    void withdraw(int date,double amount);
    /*������Ϣ*/
    void settle(int date);
    /*��ʾ�˻���Ϣ*/
    void show()const;

};


#endif //HELLO_CPLUS_SAVINGSACCOUNT_H
