#include <iostream>
using namespace std;
class student
{
private:
    static int totalstudents;
    string name;

public:
    student()
    {
        totalstudents++;
    }
    static int gettotalstudents()
    {
        return totalstudents;
    }
    void input(student s[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            string n;
            cout << "Enter the name: ";
            cin >> n;
            s[i].setname(n);
        }
    }
    void setname(string n)
    {
        name = n;
    }
};
int student ::totalstudents = 0;
int main()
{
    int size = 3;
    student s[size];
    s[0].input(s, size);
    cout << student::gettotalstudents();
}