#include <iostream>
using namespace std;
class student
{
private:
    string name;
    double marks1;
    double marks2;
    double marks3;

public:
    double total;
    void setname(string n);
    void setmarks1(double m1);
    void setmarks2(double m2);
    void setmarks3(double m3);
    double getmarks1();
    double getmarks2();
    double getmarks3();
    string getname();
    double calculatetotal();
    double calculatepercentage();
    void display();
};
void student ::setname(string n)
{
    name = n;
}
void student ::setmarks1(double m1)
{
    marks1 = m1;
}
void student ::setmarks2(double m2)
{
    marks2 = m2;
}
void student ::setmarks3(double m3)
{
    marks3 = m3;
}
double student::getmarks1()
{
    return marks1;
}
double student::getmarks2()
{
    return marks2;
}
double student::getmarks3()
{
    return marks3;
}

string student::getname()
{
    return name;
}
double student ::calculatetotal()
{
    total = marks1 + marks2 + marks3;
    return total;
}
double student ::calculatepercentage()
{

    return (total / 300 * 100);
}
void student::display()
{
    cout << "Name: " << name << endl;
    cout << "The total marks are: " << calculatetotal() << endl;
    cout << "The percentage is: " << calculatepercentage() << endl;
}
int main()
{
    student s1;
    s1.setname("Amna");
    s1.setmarks1(80);
    s1.setmarks2(70);
    s1.setmarks3(85);
    s1.display();
}