/*Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)
*/

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