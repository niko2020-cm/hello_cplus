//
// Created by luo on 2022/1/16.
//
#include <iostream>
using namespace std;
void matrix(){
    /*用于理解指针和数组之间的联动关系*/
    int line1[]={1,0,0};
    int line2[]={0,1,0};
    int line3[]={0,0,1};

    /* 定义整形指针数组并初始化*/
    int *pLine[3]={line1,line2,line3};
    cout<<"Matrix test:"<<endl;

    /*输出矩阵*/

#if   1
    for(auto & i : pLine)
    {
        for(int j=0;j<3;j++)
        {
            cout<<i[j]<<" ";
        }
        cout<<endl;
    }
#else
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<pLine[i][j]<<" ";
        cout<<endl;
    }

#endif


}