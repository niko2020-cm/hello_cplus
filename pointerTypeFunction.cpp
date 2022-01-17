//
// Created by luo on 2022/1/17.
//

#include "pointerTypeFunction.h"
#include <iostream>
using namespace std;

/*不可以非静态的局部地址用作函数的返回值*/

/*例如直接使用局部变量的地址当作返回值*/

int*search(int *,int ,int);
int *newIntVar();
void pointerTypeFunction()
{
#if 0
    int array[10];
    
    for(int & i : array)
    {
        cin>>i;
    }

    int *zeroPtr= search(array,10,0);
    cout<<" position:"<<(zeroPtr-array);/*数组指针相减得到的中间元素的个数*/
#else
    int *intPtr=newIntVar();
    *intPtr=5;
    delete intPtr;//动态内存的分配和释放不在同一个级别，要自己手动释放，避免内存泄露
#endif
}
int *newIntVar()
{
    int *pInt=new int;

    return pInt;
}
int *search(int *pInt,int number,int destination)

{
    for(int i=0;i<number;i++)
    {
        if(pInt[i]==destination)
        {
            return &pInt[i];
        }
    }
}