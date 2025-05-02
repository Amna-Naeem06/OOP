#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int rollno;

public:
    void setname(string n)
    {
        name = n;
        cout << name << endl;
    }
    student(int r) : rollno(r)
    {
    }
};
int main()
{
    student s1(10);
    s1.setname("amna");
}