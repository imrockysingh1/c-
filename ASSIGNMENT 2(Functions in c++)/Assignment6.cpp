//Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;
int swap(int &);
int main()
{
    int x,y;
    cout<<"Enter two numebers :- ";
    cin>>x>>y;
    swap(x,y);
    cout<<"After Swapping "<< x<<" " << y;
    return 0;
}
int swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-a;
}