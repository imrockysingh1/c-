/*
Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
 
#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,minute,second;
    public:
        void set()
        {
            int hr,min,sec;
            cout<<"Enter hours :- ";
            cin>>hr;
            cout<<"Enter Minutes :- ";
            cin>>min;
            cout<<"Enter Seconds :- ";
            cin>>sec;
            hour=hr;
            minute=min;
            second=sec;
        }
        int get()
        {
            cout<<hour <<"Hours "<<minute<<" Minutes "<<second<<" Seconds "<<endl;;
        }
};
int main()
{
    Time time;
    time.set();
    time.get();
    return 0;
}