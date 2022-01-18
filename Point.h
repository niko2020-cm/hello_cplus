//
// Created by luo on 2022/1/15.
//

#ifndef HELLO_CPLUS_POINT_H
#define HELLO_CPLUS_POINT_H


class Point {
public:
    Point():x(0),y(0) {
    }//default
    explicit Point(int x,int y=10):x(x),y(y){//���캯��
        count++;
    }
    Point(const Point &p){//��ֵ����
        x=p.x,y=p.y;
        count++;
    }
    ~Point(){count--;}
    int getx() const{return x;}
    int gety() const { return y; }
    void move(int ,int);
    friend float distance(Point &,Point &);
    static void showCount();//��̬����������ͨ������ֱ�ӵ���
    /*ͨ����������̬��Աֻ���������ʾ�̬��Ա*/

private:
    int x,y;
    static int count;//����ֻ����������ʼ����.c�ļ�
};
#endif //HELLO_CPLUS_POINT_H
