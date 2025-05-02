#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;
    float *height;

public:
    person(string n, int a, float h[]);
    person(const person &p);
    ~person();
    string getname();
    int getage();
    float *getheight();
    void display();
};
person ::person(string n, int a, float h[])
{
    name = n;
    age = a;
    height = new float[3];
    // Copy the values from h[] to height[]
    for (int i = 0; i < 3; i++)
    {
        height[i] = h[i];
    }
}
person ::person(const person &p)
{
    name = p.name;
    age = p.age;
    height = new float[3];

    for (int i = 0; i < 3; i++)
    {
        height[i] = p.height[i]; // Copy each element
    }
}
string person ::getname()
{
    return name;
}
int person ::getage()
{
    return age;
}
float *person ::getheight()
{
    return height;
}
void person ::display()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Height " << height[i] << endl;
    }
}
person ::~person()
{
    delete[] height;
}

int main()
{
    float arr[] = {5.5, 5.9, 7.8};
    person p1("John", 18, arr);
    person p3 = p1;
    cout << "Before modifying: " << endl;
    p1.display();
    p3.display();

    p3.getheight()[1] = {6.1};
    cout << "After modifying: " << endl;
    p1.display();
    p3.display();
}