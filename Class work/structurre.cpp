#include<string.h>
#include<iostream >
using namespace std;
struct book
{
    private:
    int bookid;
    char title[20];
    float price;
    public:
    void displaybook()
{
    cout<<"\n"<<bookid<<" "<<title<<" "<<price;
}
struct book inputbook()
{
    struct book b;
    cout<<"Enter bookid , Title , Price of the book";
    cin>>bookid;
    if (bookid<0)
       bookid=-bookid;
    cin.ignore();
    cin.getline(title,20);
    cin>>price;
    return b;
}
};
book inputbook();
void displaybook(book);
int main()
{
    book b1,b2,b3;
    b1.inputbook(); 
    b2.inputbook();
    b3.inputbook();
    b1.displaybook();
    b2.displaybook();
    b3.displaybook();
    cout<<endl;
    return 0;
}
