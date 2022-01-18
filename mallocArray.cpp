//
// Created by luo on 2022/1/18.
//

#include "mallocArray.h"
#include <iostream>
#include "Point.h"
using namespace std;

void mallocArray()
{

#if   0
    auto *ptr=new Point[2];
    ptr[0].move(5,10);
    ptr[1].move(15,20);
    cout<<" "<<distance(ptr[0],ptr[1])<<endl;
    cout<<"Deleting..."<<endl;
    delete []ptr;
#else
    int (*cp)[8][9];
    cp = new int[7][8][9];//auto不能用于二维及二维数组以上，声明和定义分开可以避免类型错误
    for(int i=0;i<7;i++)
        for(int j=0;j<8;j++)
            for(int k=0;k<9;k++)
                //cp[i][j][k]=(i*100+j*10+k);
                *(*(*(cp+i)+j)+k)=(i*100+j*10+k);

    for(int i=0;i<7;i++)
    {
        for(int j=0;j<8;j++)
        {
            for(int k=0;k<9;k++)
                cout<<" "<<cp[i][j][k];
            cout<<endl;
        }
        cout<<endl;
    }
    delete [] cp;
#endif
}