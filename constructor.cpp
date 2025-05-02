#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string Name;
    string Company;
    int Age;
    // constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void display()
    {
        cout << endl;
        cout << "The name is: " << Name << endl;
        cout << "The company is: " << Company << endl;
        cout << "The age is: " << Age << endl;
    }
};
int main()
{

    string Name, Company;
    int Age;

    cout << "Enter your name: ";
    cin >> Name;
    cout << "Enter your company: ";
    cin >> Company;
    cout << "Enter your age: ";
    cin >> Age;
    Employee emp1(Name, Company, Age);

    emp1.display();
}