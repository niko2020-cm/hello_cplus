//
// Created by luo on 2022/1/17.
//

#include "pointerToFunction.h"
#include <iostream>
using namespace std;

int max(int ,int);
int min(int ,int);
int sum(int,int);

int compute(int ,int ,int (*)(int,int));//º¯ÊıÖ¸Õë

void pointerToFunction()
{
    int a,b;

    cout<<"Please enter number A:";
    cin>>a;
    cout<<"Please enter number B:";
    cin>>b;

    cout<<"Max of"<<a<<" and"<<b<<" is "<<compute(a,b,&max)<<endl;
    cout<<"Min of"<<a<<" and"<<b<<" is "<<compute(a,b,&min)<<endl;
    cout<<"Sum of"<<a<<" and"<<b<<" is "<<compute(a,b,&sum)<<endl;

}

int max(int A,int B)
{
    return A>B? A:B;
}
int min(int A,int B)
{
    return A<B?A:B;
}
int sum(int A,int B)
{
    return A+B;
}
int compute(int A,int B,int (*func)(int ,int))
{
    return func(A,B);
}