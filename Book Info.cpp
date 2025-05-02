#include<iostream>
using namespace std;
class book
{
    private:
    string bookname;
    double price;
    public:
    void setname(string n);
    string getname();
    void setprice(double p);
    double getprice();
    void display();

};
void book :: setname( string n)
{
bookname=n;
}
string book:: getname( )
{
    return bookname;
}
void  book :: setprice(double p)
{
price=p;
}
double book :: getprice( )
{
    return price;
}
int main( )
{
    book b1;
    b1.setname("c++");
    b1.setprice(495.45);
    cout<<"Book name: "<<b1.getname()<<endl;
    cout<<"Book price: "<<b1.getprice()<<endl;
}