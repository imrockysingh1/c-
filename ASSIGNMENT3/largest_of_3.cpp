//Define a class LargestNumber and define an instance member function to find the
//Largest of three Numbers using the class.

#include<iostream>
using namespace std;
class Largenumber
{
    private:
        int a,b,c;
        int Largest;
    public:
        void set(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
    int getA() {return a;}
    int getB() {return b;}
    int getC() {return c;}
    int getLargest() {return Largest;}
    void findlargest()
    {
        int largest;
        if(a>b && a>c)
            Largest=a;
        else if(b>a && b>c)
            Largest=b;
        else
            Largest=c;
    } 
};
int main()
{
    Largenumber l;
    l.set(15,12,9);
    l.findlargest();
    cout<<"Largest number is "<<l.getLargest();
    return 0;
}