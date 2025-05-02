#include <iostream>
using namespace std;
class comparenumbers
{
private:
    int a, b;

public:
    comparenumbers()
    {
    }
    friend int findmax(int c, int d);
};
int findmax(int c, int d)
{
    int larger;
    if (c > d)
    {
        larger = c;
    }
    else
    {
        larger = d;
    }
    return larger;
}
}
;
int main()
{
    comparenumbers c;
    cout << "larger is: " << findmax(6, 8) << endl;
    return 0;
}
