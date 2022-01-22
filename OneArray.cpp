//
// Created by luo on 2022/1/20.
//

#include "OneArray.h"
#include <iostream>
using namespace std;

void OneArray()
{
    const char key[]={'a','c','b','a','d'};
    const int NUM_QUES=5;

    char a;
    int ques=0,numCorrect=0;

    cout<<"Enter the "<<NUM_QUES<<"question tests"<<endl;

    while(cin.get(a))//clion  control+d  ½áÊøÊäÈë
    {
        if(a!='\n')
        {
            if(a==key[ques])
            {
                numCorrect++;
                cout<<" ";
            }else
            {
                cout<<"*";
            }
            ques++;
        }else
        {
            cout<<"Score "<<static_cast<float>(numCorrect)/NUM_QUES*100<<"%"<<endl;
            ques=0,numCorrect=0;
        }
    }

}
