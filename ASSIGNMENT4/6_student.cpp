//Define a class student and write a program to enter student details using constructor
//and define member function to display all the details.

#include <iostream >
using namespace std;

class Student 
{
    private :
        int roll_num, Class ;
        long long int mob_num;
        string name , address;
    public :
        Student (string n , int r ,int std , long long int num , string add)
        {
            roll_num=r;
            Class=std;
            mob_num=num;
            name=n;
            address=add;
        }
    void display()
    {
        cout<<name<<endl<<"Class - "<<Class<<endl<<"Roll num - "<<roll_num<<endl;
        cout<<"Phone - "<<mob_num<<endl<<"Address - "<<address<<endl<<endl<<"--------x--------x---------";
    }
};
int main ()
{
    Student s1("rocky",1,9,9006442492,"jharia dhanbad");
    Student s2("Aashika",2,9,8263254963,"Gewal bigha");
    s1.display();
    s2.display();
    return 0;
}