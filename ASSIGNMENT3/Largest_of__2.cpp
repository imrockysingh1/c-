//Define a class Greatest and define instance member function to find Largest among
//3 numbers using classes.

#include<iostream>
using namespace std;
class Largenumber
{
    private:
        int a,b;
        int Largest;
    public:
        void set(int x,int y)
        {
            a=x;
            b=y;
        }
    int getA() {return a;}
    int getB() {return b;}
    int getLargest() {return Largest;}
    void findlargest()
    {
        int largest;
        if(a>b)
            Largest=a;
        else 
            Largest=b;
    } 
};
int main()
{
    Largenumber l;
    l.set(15,16);
    l.findlargest();
    cout<<"Largest number is "<<l.getLargest();
    return 0;
}