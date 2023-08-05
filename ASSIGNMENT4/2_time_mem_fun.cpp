/*Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/

#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,minute,second;
    public:
        void setTime(int hr ,int min ,int sec)
        {
            hour=hr;
            minute=min;
            second=sec;
        }
        int showtime()
        {
            cout<<hour <<"Hours "<<minute<<" Minutes "<<second<<" Seconds "<<endl;;
        }
        void normalize()
        {
            minute=minute+second/60;
            second=second%60;
            hour=hour+minute/60;
            minute=minute%60;
        }
        Time add(Time t )
        {
            Time temp;
            temp.hour=hour+t.hour;
            temp.minute=minute+t.minute;
            temp.second=second+t.second;
            temp.normalize();
            return temp;
        }
};
int main()
{
    Time t1,t2;
    t1.setTime(6,52,23);
    t2.setTime(5,96,65);
    t1.showtime();
    t2.showtime();
    Time t3=t1.add(t2);
    t3.showtime();
    return 0;
}