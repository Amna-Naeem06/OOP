#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string Name;
    string Company;
    int Age;
    public:
    //constructor
    Employee(string name, string company, int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }
    void display()
    {
        cout<<endl;
        cout<<"The name is: "<<Name<<endl;
        cout<<"The company is: "<<Company<<endl;
        cout<<"The age is: "<<Age<<endl;
    }
   
};
 Employee getvalues( )
    {
           string Name, Company;
    int Age;

          cout << "Enter your name: ";
        cin >> Name;
        cout << "Enter your company: ";
        cin >> Company;
        cout << "Enter your age: ";
        cin >> Age;
            // Creating and returning an object of Student
   return Employee(Name,Company,Age);
    }
int main( )
{
  // Calling function to take input and pass values to constructor
    Employee emp1=getvalues( );

     
    
    
    emp1.display();
     
}