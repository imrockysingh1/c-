//Define a function to print Pascal Triangle up to N lines.
#include<string.h>
#include<iostream>
using namespace std;
int comb(int , int);
int fact(int);
int fact(int n)
{
    if(n==0)
      return 1;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int comb(int a,int b)
{
    int com=fact(a)/(fact(b)*fact(a-b));
    return com;
}
int main()
{
    int x;
    cout<<"Enter a numeber :- ";
    cin>> x ;
    for(int i=0;i<x;i++)
    {
        for (int j=0;j<=i;j++)
        {
            if(j==0)
            for(int k=0;k<(x-1)-i;k++)
                cout<<" ";
            cout<<comb(i,j)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}