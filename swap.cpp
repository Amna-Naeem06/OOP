#include <iostream>
using namespace std;
class add
{
    int *a, *b;

public:
    add(int x = 0, int y = 0)
    {
        a = new int;
        *a = x;
        b = new int;
        *b = y;
    }
    ~add()
    {
        delete a;
        delete b;
    }
    void display()
    {
        cout << *a << "," << *b << endl;
    }

    add operator+(const add &m)
    {

        return add(*a + *m.a, *b + *m.b);
    }
    add operator-(const add &n)
    {

        return add(*a - *n.a, *b - *n.b);
    }
    // Assignment operator
    add &operator=(const add &m)
    {

        *a = *m.a;
        *b = *m.b;

        return *this;
    }
    add(const add &m)
    {
        a = new int;
        b = new int;
        *a = *m.a;
        *b = *m.b;
    }
};
int main()
{
    add a1(1, 1);
    add a2(7, 9);
    cout << "before swapping: " << endl;
    a1.display();
    a2.display();
    add temp = a1;
    a1 = a2;
    a2 = temp;
    cout << "after swapping: " << endl;
    a1.display();
    a2.display();
}