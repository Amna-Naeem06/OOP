#include <iostream>
using namespace std;
class book
{
    string title;
    string author;
    float price;

public:
    void setbookdetails()
    {
        cout << "Enter the title of the book: ";
        cin >> title;
        cout << "Enter the author of the book: ";
        cin >> author;
        cout << "Enter the price of the book: ";
        cin >> price;
    }
    void displaybookdetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
    float getprice()
    {
        return price;
    }
    float calculateaverageprice(book books[], int size)
    {
        float total = 0;
        for (int i = 0; i < size; i++)
        {
            total += books[i].getprice();
        }
        return total / size;
    }
};
int main()
{
    int size = 5;
    book books[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter book details for book " << i + 1 << endl;
        books[i].setbookdetails();
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Displaying book details for book " << i + 1 << endl;
        books[i].displaybookdetails();
    }
    float avg = books[0].calculateaverageprice(books, size);
    cout << "Average price: " << avg << endl;
}