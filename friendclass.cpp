#include <iostream>
using namespace std;
class car
{
private:
    string brand;
    string model;
    double price;

public:
    car()
    {
    }
    void display()
    {
        cout << "Car brand: " << brand << endl;
        cout << "Car model: " << model << endl;
        cout << "Car price: " << price << endl;
    }
    void input()
    {
        cout << "Enter the brand: ";
        cin >> brand;
        cout << "Enter the model: ";
        cin >> model;
        cout << "Enter the price: ";
        cin >> price;
    }
    friend class bikes;
};
class bikes
{
private:
    string m;
    double p;

public:
    void setdata(car b)
    {
        m = b.model;
        p = b.price;
        cout << m << endl
        << p << endl;
    }
};
int main()
{
    car c;
    car *ptr = &c;
    ptr->input();
    ptr->display();
    bikes b1;
    b1.setdata(c);
}