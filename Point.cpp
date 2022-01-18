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
void Point::showCount(){//输出点的个数
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
int Point::count=0;//静态成员 存放在内存的静态区，只能初始化一次,要么在这里初始化，要么在调用点类的第一个函数哪里初始化，建议在这里