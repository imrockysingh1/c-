//Define a class Counter and Write a program to Show Counter using Constructor

#include<iostream>
using namespace std;
class Counter
{
    private:
        static int counter;
    public: 
        Counter()
        {
            counter++;
        }
        int static getocounter()
        {
            return counter;
        }
};
int Counter ::counter=0;
int main()
{
    Counter c,e,t;
    cout<<"Counter is called "<<Counter::getocounter()<<" times ";
    return 0;
}
