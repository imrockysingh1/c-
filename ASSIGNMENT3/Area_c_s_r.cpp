//Define a class Area and define instance member functions to find the area of the
//different shapes like square, rectangle , circle etc

#include<iostream>
using namespace std;
class Area
{
    private:
        int Length , Breadth;
        int Side;
        int radius;
        float area_circle;
        int area_square;
        int area_rectangle;
    public:
        void setr(int r){radius=r;}
        int getR(){return radius;}
        float getAreacircle(){return area_circle;}
        void findAreacircle()
        {
            area_circle=3.14*radius*radius;
        }
        void setlb(int l,int b){Length=l,Breadth=b;}
        int getL(){return Length;}
        int getB(){return Breadth;}
        int getArearectangle(){return area_rectangle;}
        void findArearectangle()
        {
            area_rectangle=Length*Breadth;
        }
        void setSide(int s){Side=s;}
        int getside(){return Side;}
        int getAreasquare(){return area_square;}
        void findAreaSquare()
        {
            area_square=Side*Side;
        }
};
int main()
{
    Area a;
    a.setlb(6,4);
    a.setr(3);
    a.setSide(6);
    a.findAreacircle();
    a.findArearectangle();
    a.findAreaSquare();
    cout<<"Area of Rectangle of length "<<a.getL()<<" and breadth "<<a.getB()<<" is "<<a.getArearectangle()<<endl;
    cout<<"Area of circle of radius "<<a.getR()<<" is "<<a.getAreacircle()<<endl;
    cout<<"Area of Square of side "<<a.getside()<<" is "<<a.getAreasquare();
    return 0;
}