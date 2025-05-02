#include <iostream>
using namespace std;
class add
{
private:
    int x;
    int y;
    friend add operator+(int a1, add a2)
    {
        add temp;
        temp.x = a1 + a2.x;
        temp.y = a1 + a2.y;
        return temp;
    }

public:
    void print()
    {
        cout << x << "," << y << endl;
    }
    add()
    {
    }
    add(int a, int b)
    {
        x = a;
        y = b;
    }
};
int main()
{
    add n1(4, 5);
    add n2(2, 2);
    add result = 1 + n1;
    cout << "The result is: ";
    result.print();
    return 0;
}