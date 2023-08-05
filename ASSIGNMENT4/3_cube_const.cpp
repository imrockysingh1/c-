// Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;
class Cube
{
    private:
        int a;
        int volume;
    public:
        Cube ()
        {}
        Cube(int x)
        {
            a=x;
        }
        int get() {return a;}
        void findVolume()
        {
            volume=a*a*a;
        }
        int getvolume()  {return volume;}
};
int main()
{
    Cube c(2);
    c.findVolume();
    cout<<"Volume of cube of side "<<c.get()<<" is "<<c.getvolume();
    return 0;
}