// Define a class Circle and define an instance member function to find the area of the circle.

#include<iostream>
using namespace std;
class Circle
{
    private:
        int radius;
        float Area;
    public:
        void set(int r){radius=r;}
        int getR(){return radius;}
        float getArea(){return Area;}
        void findArea()
        {
            Area=3.14*radius*radius;
        }
};
int main()
{
    Circle c;
    c.set(2);
    c.findArea();
    cout<<"Area of circle is "<<c.getArea();
    return 0;
}