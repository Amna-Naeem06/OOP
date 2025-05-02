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
    void input()
    {
        cout << "enter the name: ";
        cin >> name;
    }
};
int student ::totalstudents = 0;
int main()
{
    student s1, s2, s3;
    s1.input();
    s2.input();
    s3.input();
    cout << student ::gettotalstudents();
}