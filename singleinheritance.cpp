#include <iostream>
using namespace std;
class animal
{
protected:
    string name;

public:
    animal()
    {
    }
};
class mammal : public animal
{
public:
    mammal(string n)
    {
        name = n;
    }
    void display()
    {
        cout << name;
    }
};
int main()
{
    mammal m1("zainab");
    m1.display();
}