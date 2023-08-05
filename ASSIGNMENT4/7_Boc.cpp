/*Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box.*/

#include <iostream>
using namespace std;
class Box
{
    private:
        int LENGTH , BREADTH , HEIGHT;
        int volume ;
    public :
        Box(int l ,int b , int h)
        {
            LENGTH = l;
            BREADTH = b;
            HEIGHT = h;
        }
        void claculatevolume()
        {
            volume=LENGTH * BREADTH *HEIGHT;
        }
        void displayvolume()
        {
            cout<<"Length = "<<LENGTH<<"  Breadth = "<<BREADTH<<"  Height = "<<HEIGHT;
            cout<<"\nVolume = "<<volume<<endl<<"-----------x-------------x------------------";        
        }
};
int main()
{
    Box b(5,6,3) , b2(6,9,2);
    b.claculatevolume();
    b2.claculatevolume();
    b.displayvolume();
    b2.displayvolume();
    return 0;
}