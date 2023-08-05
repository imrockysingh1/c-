//Find maximum of two numbers 
#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cout<<"Enter two numbers :- ";
    cin>>a>>b;
    if(a>b)
      cout<<"a= "<<a<<" is greater.";
    else if (b>a)
       cout<<"b= "<<b<<" is greater.";
    else 
       cout<<"Both are equal";
    return 0;
}