#include <iostream>
using namespace std;
class shape
{
    int n;
    int *ptr = &n;

private:
    string type;
    double length;
    double width;

public:
    shape()
    {

        length = 0.0;
        width = 0.0;
    }
    void setvalues()
    {
        string *t = &type;
        double *l = &length;
        double *w = &width;
        cout << "enter the type: ";
        cin >> *t;
        cout << "enter the length: ";
        cin >> *l;
        cout << "enter the width: ";
        cin >> *w;
    }
    void calculatearea()
    {
        if (type == "square")
        {
            cout << "Area: " << length * length << endl;
        }
    }
};

int main()
{
    int size;
    cout << "enter the number of shapes: ";
    cin >> size;
    shape *s = new shape[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter details for shape " << i + 1 << " " << endl;
        s[i].setvalues();
        s[i].calculatearea();
    }
}