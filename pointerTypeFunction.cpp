//
// Created by luo on 2022/1/17.
//

#include "pointerTypeFunction.h"
#include <iostream>
using namespace std;

/*�����ԷǾ�̬�ľֲ���ַ���������ķ���ֵ*/

/*����ֱ��ʹ�þֲ������ĵ�ַ��������ֵ*/

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
    cout<<" position:"<<(zeroPtr-array);/*����ָ������õ����м�Ԫ�صĸ���*/
#else
    int *intPtr=newIntVar();
    *intPtr=5;
    delete intPtr;//��̬�ڴ�ķ�����ͷŲ���ͬһ������Ҫ�Լ��ֶ��ͷţ������ڴ�й¶
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