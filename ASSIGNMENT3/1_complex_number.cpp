/* Define a class Complex to represent a complex number. Declare instance member
variableates to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
numbe*/ 

#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    public:
        void set()
        {
            int r,i;
            cout<<"Enter real part :- ";
            cin>>r;
            cout<<"Enter imaginary part :- ";
            cin>>i;
            real=r;
            img=i;
        }
        int get(Complex c)
        {
            cout<<real<<" + "<<img<<"i"<<endl;
            cout<<c.real<<" + "<<c.img<<"i"<<endl;
        }
        void add(Complex c)
        {
            cout<<real + c.real<<" + "<<img + c.img<<"i"<<endl;
        }
};
int main()
{
    Complex c1,c2;
    c1.set();
    c2.set();
    c1.get(c2);
    c1.add(c2);
    return 0;
}