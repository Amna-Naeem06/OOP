#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    int marks[5];
    char grade;

public:
    Student(string n, int roll, int m[5])
    {
        name = n;
        rollNumber = roll;
        for (int i = 0; i < 5; i++)
        {
            marks[i] = m[i];
        }
        Grade();
    }

    void Grade()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        double avg = sum / 5.0;

        if (avg >= 90)
            grade = 'A';
        else if (avg >= 80)
            grade = 'B';
        else if (avg >= 70)
            grade = 'C';
        else if (avg >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    // Function to display student details
    void display()
    {
        cout << "Name: " << name << endl
             << "Roll Number: " << rollNumber << endl
             << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    int marks1[5] = {85, 90, 78, 88, 76};
    int marks2[5] = {55, 60, 54, 98, 87};
    int marks3[5] = {76, 85, 99, 42, 51};
    int marks4[5] = {60, 89, 79, 56, 44};
    int marks5[5] = {60, 64, 87, 95, 83};
    int marks6[5] = {85, 45, 79, 63, 25};
    int marks7[5] = {90, 88, 57, 75, 49};
    int marks8[5] = {30, 55, 47, 89, 65};
    int marks9[5] = {50, 90, 88, 74, 64};
    int marks10[5] = {15, 99, 87, 56, 23};

    Student student[10] = {
        Student("Amna", 1, marks1), Student("Sara", 2, marks2), Student("Ayesha", 3, marks3), Student("Zainab", 4, marks4),
        Student("Hamza", 5, marks5), Student("Aisha", 6, marks6), Student("Umar", 7, marks7), Student("Eman", 8, marks8),
        Student("Bilal", 9, marks9), Student("Laiba", 10, marks10)};

    cout << "Student Details: " << endl;
    for (int i = 0; i < 10; i++)
    {
        student[i].display();
    }
}
