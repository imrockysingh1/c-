//Define a class ReverseNumber and define an instance member function to find
//Reverse of a Number using class.

#include <iostream>
using namespace std;
class Reverse_num
{
    private:
        int actual_num;
        int reverse_num;
    public:
        void set(int x) {actual_num=x;}
        int get() {return actual_num;}
        int getreverse(){return reverse_num;}
        void findreverse()
        {
            int r,rev=0,n=actual_num;
            while(n)
            {
                r=n%10;
                n=n/10;
                rev=rev*10+r;
            }
            reverse_num=rev;
        }
};
int main()
{
    Reverse_num n;
    n.set(897);
    n.findreverse();
    cout<<"Reverse of "<<n.get()<<" is "<<n.getreverse();
    return 0;
}
