#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }

    void updateAge(int newAge)
    {
        if (newAge < 0)
        {
            cout << "Invalid age. Age cannot be negative." << endl;
        }
        age = newAge;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{

    Person *person = new Person("Amna", 16);

    cout << "Before updating age:" << endl;
    (*person).display();

    (*person).updateAge(18);

    cout << "After updating age:" << endl;
    (*person).display();

    delete person;

    return 0;
}
