//
// Created by luo on 2022/1/15.
//

#ifndef HELLO_CPLUS_POINT_H
#define HELLO_CPLUS_POINT_H


class Point {
public:
    explicit Point(int x=0,int y=0):x(x),y(y){
        count++;
    }
    Point(const Point &p){
        x=p.x,y=p.y;
        count++;
    }
    ~Point(){count--;}
    int getx() const{return x;}
    int gety() const { return y; }
    void move(int ,int);
    friend float distance(Point &,Point &);
    static void showCount();//静态函数，可以通过类名直接调用
    /*通常用来处理静态成员只能用来访问静态成员*/

private:
    int x,y;
    static int count;//这里只是声明，初始化在.c文件
};
#endif //HELLO_CPLUS_POINT_H
