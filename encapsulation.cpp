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
    void setname(string name);
    string getname();
    void setcompany(string company);
    string getcompany();
    void setage(int age);
    int getage();
    void input();
    void display();
};
string Employee :: getname()
{
    return Name;
}
void Employee :: setname(string name)
{
    Name = name;
}

void Employee :: setcompany(string company)
{
    Company = company;
}
string Employee ::getcompany()
{
    return Company;
}
void Employee ::setage(int age)
{
    Age = age;
}
int Employee ::getage()
{
    return Age;
}
void Employee ::input()
{
    cout << "Enter your name: ";
    cin >> Name;
    cout << "Enter your company: ";
    cin >> Company;
    cout << "Enter your age: ";
    cin >> Age;
}
void Employee ::display()
{
    cout << "Name: " << Name << endl;

    cout << "Company: " << Company << endl;

    cout << "Age: " << Age << endl;
}

int main()
{
    Employee emp1;
    emp1.input();
    emp1.display();
}
