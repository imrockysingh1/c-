//Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;
int greatestdigit(int);
int main()
{
    int n;
    cout<<"Enter a numeber :- ";
    cin>>n;
    cout<<"Highest value digit in the given number is "<<greatestdigit(n);
    return 0;
}
int greatestdigit(int n)
{
    int temp , temp2=0 , highest;
    while(n)
    {
        temp = n % 10;
        n = n / 10;
        if( temp > temp2 )
        {
            highest=temp;
            temp2=temp;
        }
        else
        {
            highest=temp2;
        }
    }
    return highest;
}