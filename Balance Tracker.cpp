#include<iostream>
using namespace std;
class bank
{
    private:
    double accountbalance;
    int accountnumber;
    
    public:
    void setbalance(double b);
    double getbalance( );
    void setaccountnumber(int a);
    int getaccountnumber();
    void display();
    void input();


};
void bank :: setbalance(double b)
{
    accountbalance=b;
} 
void bank :: setaccountnumber(int a)
{
    accountnumber=a;
} 
double bank:: getbalance()
{
    return accountbalance;
}
int bank:: getaccountnumber()
{
    return accountnumber;
}
void bank :: input( )
{
    cout<<"Enter your accountnumber: ";
    cin>>accountnumber;
    cout<<"Enter the amount to deposit: ";
    cin>>accountbalance;
}
void bank :: display( )
{
    cout<<"Account number: "<<accountnumber<<endl;
    cout<<"Account balance: "<<accountbalance<<endl;
}
int main( )
{
    bank b1;
    b1.input();
    b1.display();
}