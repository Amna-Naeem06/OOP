#include <iostream>
using namespace std;
class car
{
    string brand;
    int year;
    float *price;

public:
    car(string b, int y, float *p);
    car(const car &c);
    void display();
    float *getprice();
};
car ::car(string b, int y, float *p)
{
    brand = b;
    year = y;
    price = p;
}
car ::car(const car &c)
{
    brand = c.brand;
    year = c.year;
    price = c.price;
}
void car::display()
{
    cout << "brand: " << brand << endl
         << "year: " << year << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "price: " << price[i] << endl;
    }
}
float *car ::getprice()
{
    return price;
}
int main()
{
    float arr[2] = {5555.5, 78965.1};
    car c1("toyota", 2022, arr);
    car c2 = c1;
    c1.display();
    cout << endl;
    c2.display();
    c2.getprice()[0] = 99999.9;
    c1.display();
    cout << endl;
    c2.display();
}