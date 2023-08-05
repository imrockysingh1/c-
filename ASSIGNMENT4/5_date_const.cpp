//Define a class Date and write a program to Display Dateand initialise date object
//using Constructors.

#include<iostream>
using namespace std;
class Date
{
    private:
        int DD,MM,YYYY;
    public :
        Date(int x,int y,int z)
        {
            DD=x;  MM=y;   YYYY=z;
            cout<<"Constructor is created \n ";
        }
        void displaydate()
        {
            cout<<"Entered date is :- "<<DD<<"-"<<MM<<"-"<<YYYY;
        }
};
int main ()
{
    Date d(21,3,2003);
    d.displaydate();
    return 0;
}