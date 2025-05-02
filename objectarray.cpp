#include <iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    float marks;

public:
    void setname()
    {
        cout << "Enter the name: ";
        cin >> name;
    }
    void displayname()
    {
        cout << "the name is: " << name << endl;
    }
    void setrollno()
    {
        cout << "Enter the rollno: ";
        cin >> rollno;
    }
    void displayrollno()
    {
        cout << "the rollno is: " << rollno << endl;
    }
    void setmarks()
    {
        cout << "Enter the marks: ";
        cin >> marks;
    }
    float getmarks()
    {
        return marks;
    }
};
float average(student s[3])
{
    float total = 0;
    for (int i = 0; i < 3; i++)
    {
        total = total + s[i].getmarks();
    }
    return total / 3;
}
int main()
{
    student s[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter details for the student: " << i + 1 << endl;
        s[i].setname();

        s[i].setrollno();
        s[i].setmarks();
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Displaying details for the student: ";
        s[i].displayname();
        s[i].displayrollno();
    }
    float avg = average(s);
    cout << "average of all the students: " << avg << endl;
}
