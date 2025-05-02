#include<iostream>
using namespace std;
class teacher
{
    private:
    float salary;
    public:
    string name;
    int age;
    string department;
    void setsalary(float s) //setter
    {
        salary=s;
    }
    float getsalary( )
    {
        return salary;
    }
    void inputdata( )
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"enter your age : ";
        cin>>age;
        cout<<"Enter your department : ";
        cin>>department;
        cout<<"Enter your salary: ";
        cin>>salary;
    }
    void displaydata( )
    {
        cout<<"The name is: "<<name<<endl;
        cout<<"The age is: "<<age<<endl;
        cout<<"The department is: "<<department<<endl;
        cout<<"The salary is: "<<salary<<endl;
    }
    
};

int main( )
{
    teacher t1;
    
    t1.inputdata();
    t1.displaydata();
    return 0;
}
