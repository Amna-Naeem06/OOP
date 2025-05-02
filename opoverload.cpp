#include <iostream>
using namespace std;
class multiply
{
private:
    int x, y;

public:
    multiply()
    {
    }
    multiply(int a, int b)
    {
        x = a;
        y = b;
    }
    void print()
    {
        cout << x << "," << y << endl;
    }
    multiply operator*(multiply m)
    {
        multiply temp;
        temp.x = x * m.x;
        temp.y = y * m.y;
        return temp;
    }
};
int main()
{
    multiply m1(1, 2);
    multiply m2(1, 4);
    multiply result = m1 * m2;
    cout << "the result is: ";
    result.print();
    return 0;
}