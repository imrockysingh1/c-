//Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;
int pow(int , int);
int main()
{
    int x,y;
    cout<<"Enter a numeber  and its power :- ";
    cin>> x >> y;
    cout << " x to the power y is "<< pow(x , y);
    return 0;
}
int pow(int x, int y)
{
    int a=x;
    for(int i=1 ; i<y ; i++)
    {
        x = x * a;
    }
    return x;
}