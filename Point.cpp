//
// Created by luo on 2022/1/15.
//

#include "Point.h"
#include <iostream>
#include <cmath>
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
void Point::move(int move_x,int move_y)
{
    x=move_x;
    y=move_y;
}
float distance(Point &a,Point &b)
{   float x,y;
    x=static_cast<float>(a.getx()-b.getx());
    y=static_cast<float>(a.gety()-b.gety());

    return sqrt(x*x+y*y);
}
int Point::count=0;//��̬��Ա ������ڴ�ľ�̬����ֻ�ܳ�ʼ��һ��,Ҫô�������ʼ����Ҫô�ڵ��õ���ĵ�һ�����������ʼ��������������