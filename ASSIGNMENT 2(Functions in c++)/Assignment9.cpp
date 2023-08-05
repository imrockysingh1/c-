//Write functions using function overloading to find a maximum of two numbers and
//both the numbers can be integer or real.
#include <iostream>
using namespace std;
int max(int ,int );
float max(float ,float);
int main()
{
    float a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Greates number is "<<max(a,b);
    return 0;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
float max(float a,float b)
{
    if(a>b)
        return a;
    else
        return b;
}