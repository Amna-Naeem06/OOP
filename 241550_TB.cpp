#include <iostream>
using namespace std;
class vehicle
{
private:
    int regnumber;
    string ownername;

public:
    vehicle()
    {
    }
    void setvehicleinfo(int r, string n)
    {
        regnumber = r;
        ownername = n;
    }
    void displayvehicleinfo()
    {
        cout << "Registration number: " << regnumber << endl
             << "Owner name: " << ownername << endl;
    }
};
class car : public vehicle
{
private:
    string enginetype;

public:
    void setenginetype(string e)
    {
        enginetype = e;
    }
    void displayenginetype()
    {
        cout << "Engine type: " << enginetype << endl;
    }
};
class electriccar : public car
{
private:
    double batterycapacity;
    double efficency;
    string id;

public:
    void setbatterydetails()
    {
        do

        {
            cout << "Enter the batterycapacity  : ";
            cin >> batterycapacity;
            cout << "enter the efficency: ";
            cin >> efficency;
            cout << "enter id: ";
            cin >> id;

        } while (batterycapacity <= 0 || efficency < 0 || id != "Toyota");
    }

    double calculaterange()
    {
        return batterycapacity * efficency;
    }
    void displaydetails()
    {
        cout << "Battery capacity: " << batterycapacity << endl;
        cout << "Efficency: " << efficency << "(km/kWh)" << endl;
    }
};
int main()
{
    electriccar e1;
    cout << "input: " << endl;
    e1.setbatterydetails();
    e1.setvehicleinfo(123, "bob");
    e1.setenginetype("diseal engine");
    cout << "displaying information: " << endl;
    e1.displayvehicleinfo();
    e1.displayenginetype();
    cout << "Range: " << e1.calculaterange();
    cout << endl;

    e1.displaydetails();
}