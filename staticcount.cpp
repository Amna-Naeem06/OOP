#include <iostream>
using namespace std;
class employee
{
private:
    static int total;
    int salary;

public:
    employee(int s)
    {
        salary = s;
        total++;
    }
    static int gettotal()
    {
        return total;
    }
    int getsalary()
    {
        return salary;
    }
};
int employee ::total = 0;
int main()
{
    employee e1(5500);
    employee e2(3000);
    employee e3(8000);
    cout << "total count: " << employee::gettotal() << endl;
}
