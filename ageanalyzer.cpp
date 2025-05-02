#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person()

    {
    }

    void setName(string n)

    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};

void inputName(Person p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        string Name;
        cout << "Enter name for person " << i + 1 << ": ";
        cin >> Name;
        p[i].setName(Name);
    }
}

void inputAge(Person p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int Age;
        cout << "Enter age for " << p[i].getName() << ": ";
        cin >> Age;
        p[i].setAge(Age);
    }
}

void Average(Person p[], int size)
{
    int childCount = 0, teenCount = 0, adultCount = 0, seniorCount = 0;
    int childSum = 0, teenSum = 0, adultSum = 0, seniorSum = 0;

    for (int i = 0; i < size; i++)
    {
        int age = p[i].getAge();

        if (age >= 0 && age <= 12)
        {
            childSum += age;
            childCount++;
        }
        else if (age >= 13 && age <= 19)
        {
            teenSum += age;
            teenCount++;
        }
        else if (age >= 20 && age <= 59)
        {
            adultSum += age;
            adultCount++;
        }
        else if (age >= 60)
        {
            seniorSum += age;
            seniorCount++;
        }
    }

    cout << "Average Age: " << endl;
    cout << "Child (0-12): " << (childCount > 0 ? (childSum / (double)childCount) : 0) << endl;
    cout << "Teenager (13-19): " << (teenCount > 0 ? (teenSum / (double)teenCount) : 0) << endl;
    cout << "Adult (20-59): " << (adultCount > 0 ? (adultSum / (double)adultCount) : 0) << endl;
    cout << "Senior (60+): " << (seniorCount > 0 ? (seniorSum / (double)seniorCount) : 0) << endl;
}

int main()
{
    const int size = 20;
    Person p[size];

    inputName(p, size);
    inputAge(p, size);

    Average(p, size);
}
