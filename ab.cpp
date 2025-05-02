#include<iostream>
using namespace std;
union student
{
    int age;
    char grade;
    float GPA;
};
int main( )
{
    union student s1;
    cout<<"Enter the age: ";
    cin>>s1.age;
    cout<<"Enter the grade: ";
    cin>>s1.grade;
    cout<<"Enter the GPA: ";
    cin>>s1.GPA;
}
