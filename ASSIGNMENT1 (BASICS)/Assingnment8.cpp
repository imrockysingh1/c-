//SWap two nos without 3rd variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers :- ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a = "<<a<<endl<<"b = "<<b;
    return 0;
}