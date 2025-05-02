#include <iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    int marks[10];

public:
    student()
    {
        name = "";
        rollno = 0;
    }
    void input()
    {

        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollno;
        for (int j = 0; j < 3; j++)
        {
            cout << "enter the marks for subject: " << j + 1 << endl;
            cin >> marks[j];
        }
    }
    double average()
    {
        double avg;
        double sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += marks[i];
            avg = sum / 300;
        }
        if (avg >= 90 && avg <= 100)
        {
            cout << "A" << endl;
        }
        if (avg >= 80 && avg < 90)
        {
            cout << "B" << endl;
        }

        return avg;
    }
};
int main()
{
    const int size = 2;
    student s[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter details for student " << i + 1 << ": " << endl;
        s[i].input();
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Average marks for student " << i + 1 << ": " << endl;
        cout << s[i].average();
    }
}