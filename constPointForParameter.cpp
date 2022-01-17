//
// Created by luo on 2022/1/17.
//

#include "constPointForParameter.h"
#include <iostream>
using namespace std;
const int N=6;
void print(const int *,int );

void constPointForParameter()
{
    int array[N];
    for(int & i : array)
    {
        cin>>i;
    }
    print(array,N);

}
void print(const int *pInt,int n)
{
    cout<<"{"<<*pInt;

    for(int i=1;i<n;i++)
    {
        cout<<","<<*(pInt+i);
    }
    cout<<"}"<<endl;
}