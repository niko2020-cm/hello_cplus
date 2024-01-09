//
// Created by luo on 2022/1/18.
//

#include "ArrayOfPoints.h"
#include <cassert>
ArrayOfPoints::ArrayOfPoints(int size):size(size) {
    points=new Point[size];
}
ArrayOfPoints::~ArrayOfPoints() {
    delete [] points;
}

Point& ArrayOfPoints::element(int index) {
    assert(index>=0&& index<size);
    return points[index];
}

