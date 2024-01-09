//
// Created by luo on 2022/1/17.
//

#include "objectPoint.h"
#include "Point.h"
#include <iostream>
using namespace std;


//对象中隐含有一个this指针


void objectPoint()
{
    Point const a(4,5);
    const Point *PointPtr=&a;

    cout<<" x="<<a.getx()<<endl;

    cout<<" x="<<PointPtr->getx()<<endl;
}