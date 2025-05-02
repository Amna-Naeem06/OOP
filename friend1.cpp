#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int width;

public:
    rectangle()
    {
    }
    friend int calculatearea(int length, int width);
};
int calculatearea(int length, int width)
{
    length = length;
    width = width;
    return length * width;
}
int main()
{
    rectangle r1;
    cout << calculatearea(5, 5);
}
