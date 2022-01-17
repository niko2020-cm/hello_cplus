//
// Created by luo on 2022/1/17.
//
#include "pointForParameter.h"
#include <iostream>
using namespace std;

/*比较浮点数大小，用两个浮点数相减，如果差值充分小小于10^-6次方，就是满足的*/
void splitFloat(float x,int *intPart,float *fracPart)
{

   *intPart=static_cast<int>(x);
   *fracPart=x-static_cast<float>(*intPart);
}

void pointForParameter()
{
    cout<<"Enter 3 float point number"<<endl;
    for(int i=0;i<3;i++)
    {
        float x,f;
        int n;

        cin>>x;

        splitFloat(x,&n,&f);

        cout<<"Number:"<<x<<"  "<<"Integer Part="<<n<<" Fraction Part="<<f<<endl;
    }
}