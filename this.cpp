#include <iostream>
using namespace std;
class rectangle
{
private:
    double length;
    double width;

public:
    rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    double area()
    {
        return length * width;
    }
};
int main()
{
    rectangle r1(5.5, 2);
    cout << "area: " << r1.area() << endl;
}