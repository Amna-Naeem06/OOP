#include <iostream>
using namespace std;
class circle
{
private:
    const double radius;

public:
    circle(double r) : radius(r)
    {
    }

    double getarea() const
    {
        return (2 * radius * radius);
    }
};
int main()
{
    const circle c1(2);
    cout << c1.getarea();
}