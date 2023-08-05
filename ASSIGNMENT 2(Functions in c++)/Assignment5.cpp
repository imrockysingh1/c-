//Define a function to check whether a given number is a term in a Fibonacci series or
//not

#include<iostream>
using namespace std;
int fib(int);
int main()
{
    int n;
    cout<<"Enter a numeber :- ";
    cin>>n;
    cout<<n <<" term is "<< fib(n);
    return 0;
}
int fib(int n)
{
    int f1=1 ,f2=1,temp;
    if(n<=2)
      return 1;
    for(int i= 3 ;i<=n;i++)
    {
        temp=f1+f2;
        f1=f2;
        f2=temp;
    }
    return f2;
}