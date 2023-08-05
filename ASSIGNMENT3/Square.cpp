//Define a class Square to find the square of a number and write a C++ program to
//Count number of times a function is called.

#include<iostream>
using namespace std;
class Square
{
    private:
        int n;
        int square;
        static int count;
    public:
        void set(int x) {n=x;}
        int get(){return n;}
        int getsquare(){return square;}
        static int getcount(){return count;}
        void findsquare()
        {
            count++;
            square=n*n;
        }
};
int Square::count=0;
int main()
{
    Square s;
    s.set(5);
    s.findsquare();
    cout<<"Square of "<<s.get()<<" is "<<s.getsquare()<<endl;
    cout<<Square::getcount()<<" Times function is called";
    return 0;
}