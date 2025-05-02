#include <iostream>
using namespace std;
class author
{
private:
    string name;

public:
    author(string n = 0)
    {
        name = n;
    }
    string getname()
    {
        return name;
    }
};
class publication
{
private:
    int year;

public:
    publication(int y = 0)
    {
        year = y;
    }
    int getyear()
    {
        return year;
    }
};
class book
{
private:
    author *AUTHOR;
    publication *PUBLICATION;

public:
    book(author *a, publication *p)
    {
        AUTHOR = a;
        PUBLICATION = p;
    }

    void display()
    {
        cout << AUTHOR->getname();
        cout << endl;
        cout << PUBLICATION->getyear();
    }
};
int main()
{
    author a("john");
    publication p(2022);
    book b(&a, &p);
    b.display();
}