//
// Created by luo on 2022/1/15.
//

#include "Point.h"
#include <iostream>
using namespace std;

//Point::Point(int x, int y) :x(x),y(y){
//    count++;
//}
//Point::Point(const Point &p) {
//    x=p.x,y=p.y;
//    count++;
//}
//Point::~Point(){count--;}
//int Point::getx() const{return x;}
//int Point::gety() const{return y;}
void Point::showCount(){//�����ĸ���
    cout<<"Object count="<<count<<endl;
}
int Point::count=0;//��̬��Ա ������ڴ�ľ�̬����ֻ�ܳ�ʼ��һ��,Ҫô�������ʼ����Ҫô�ڵ��õ���ĵ�һ�����������ʼ��������������