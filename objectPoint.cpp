//
// Created by luo on 2022/1/17.
//

#include "objectPoint.h"
#include "Point.h"
#include <iostream>
using namespace std;


//������������һ��thisָ��


void objectPoint()
{
    Point a(4,5);
    Point *PointPtr=&a;

    cout<<" x="<<a.getx()<<endl;

    cout<<" x="<<PointPtr->getx()<<endl;
}