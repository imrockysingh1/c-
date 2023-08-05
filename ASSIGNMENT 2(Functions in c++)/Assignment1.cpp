//Define a function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std;
int primenumber(int);
int main()
{
    int n;
    cout<<"Enter a numeber :- ";
    cin>>n;
    if(primenumber(n)==1)
        cout<<"Given number is not prime";
    else
        cout<<"Given number is a prime number ";
    return 0;
}
int primenumber(int n)
{
    int flag=0;
    for(int i=3;i<=n/2;i++)
    {
        if(n%i==0)
        flag=1;
    }
    return flag;
}