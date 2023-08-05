#include<iostream>
using namespace std;
class Dummy
{
    private:
        int a,b;
        int *p;
    public:
        Dummy()
        {
            p= new int;
        }
        void setdata(int x,int y,int z)
        {
            a=x;  b=y;  *p=z;
        }
        void getdata()
        {
            cout<<"a= "<<a<<"  b= "<<b<<"p= "<<*p;
        }
        Dummy(Dummy &d)
        {
            a=d.a;
            b=d.b;
            p=new int;
            *p=*(d.p);
        }
};
int main()
{
    Dummy d1;
    d1.setdata(3,6,8);
    Dummy d2=d1;
    d1.getdata();
    cout<<endl;
    d2.getdata();
    return 0;
}