#include<iostream>
using namespace std;
class employee
{
    private:
    string name;
    int id;
    double salary;
    public:
    employee( )
    {
        name=" ";
        id=0;
        salary=0.0;
    }
    void input( )
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter the salary: ";
        cin>>salary;
    }
    void display( )
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Enter ID: "<<id<<endl;
        cout<<"Enter salary: "<<salary<<endl;
    }
};
int main( )
{
    const int size=2;
    employee *emp=new employee[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter details for "<<i+1<<endl;
        emp[i].input();
    }
}