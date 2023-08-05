//Define a class Factorial and define an instance member function to find the Factorial
//of a number using class.

#include<iostream>
using namespace std;
class Factorial 
{
    private:
        int n;
        int fact;
    public: 
        void setN(int a) {n=a;}
        int getN() {return n;}
        int getfact() {return fact;}
        void calculate_fact()
        {
            int f=1;
            if(n<=0)
                fact=1;
            for(int i=1;i<=n;i++)
                f=f*i;
            fact=f;
        }     
};
int main()
{
    Factorial f;
    f.setN(6);
    f.calculate_fact();
    cout<<"Factorial of "<<f.getN()<<" is "<<f.getfact();
    return 0;
}