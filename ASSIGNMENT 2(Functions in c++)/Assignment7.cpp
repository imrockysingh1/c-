//Write a function using the default argument that is able to add 2 or 3 numbers

#include<iostream>
using namespace std;
int add(int a , int b, int c=0);
int main()
{
    int a,b,c;
    cout<<"Enter two numbers :- ";
    cin >> a>>b;
    cout<<"Sum of "<< a << "and " <<b <<"is "<<add(a,b)<<"\n"; 
    cout<<endl;
    cout<<"Enter Three numbers :-";
    cin>>a>>b>>c;
    cout<<"Sum of "<<a<<" , "<<b<<" and "<<c<<" is "<<add(a,b,c);
    return 0;
}
int add(int a,int b,int c)
{
    int sum=a+b+c;
    return sum;
}
