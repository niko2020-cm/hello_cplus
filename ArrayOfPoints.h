//
// Created by luo on 2022/1/18.
//

#ifndef HELLO_CPLUS_ARRAYOFPOINTS_H
#define HELLO_CPLUS_ARRAYOFPOINTS_H
#include "Point.h"

class ArrayOfPoints {
public:
    ArrayOfPoints():size(0),points(nullptr){};//default
    explicit ArrayOfPoints(int);
    ~ArrayOfPoints();
    Point& element(int index);
private:
    Point *points;
    int size;
};


#endif //HELLO_CPLUS_ARRAYOFPOINTS_H
