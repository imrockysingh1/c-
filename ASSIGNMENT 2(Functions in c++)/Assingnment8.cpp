//Define overloaded functions to calculate area of circle, area of rectangle and area of
//triangle
#include<iostream>
using namespace std;
int area(int , int);
float area(float , float);
float area(int);
int main()
{
    int r,len,breadth;
    float b,h;
    cout<<"Enter Radius of a cirlue";
    cin>>r;
    cout<<"Enter Length and breadth of Rectangle ";
    cin>>len>>breadth;
    cout<<"enter Base and height of traingle :-";
    cin >>b>>h;
    cout<<"Area of cirlce is "<<area(r);
    cout<<endl;
    cout<<"Area of rectangle is "<<area(len,breadth);
    cout<<endl;
    cout<<"Area of Triangle is "<<area(b,h);
    return 0;
}
int area(int length , int breadth)
{
    return length*breadth;
}
float area(int radius)
{
    return 3.14*radius*radius;
}
float area(float base , float height)
{
    return 0.5*base*height;
}