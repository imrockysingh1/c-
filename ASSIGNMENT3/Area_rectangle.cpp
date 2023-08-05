//Define a class Rectangle and define an instance member function to find the area of
//the rectangle.

#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int length , breadth;
        int Area;
    public:
        void set(int l,int b){length=l,breadth=b;}
        int getL(){return length;}
        int getB(){return breadth;}
        int getArea(){return Area;}
        void findArea()
        {
            Area=length*breadth;
        }
};
int main()
{
    Rectangle r;
    r.set(2,9);
    r.findArea();
    cout<<"Area of rectangle is "<<r.getArea();
    return 0;
}
