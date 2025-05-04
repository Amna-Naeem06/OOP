#include <iostream>
using namespace std;
class smartdevice
{
public:
    virtual void operate() = 0;
    virtual ~smartdevice()
    {
        cout << "Smart device destroyed!" << endl;
    }
};
class smartlight : public smartdevice
{
public:
    smartlight()
    {
        cout << "Smart light initialized" << endl;
    }
    ~smartlight()
    {
        cout << "SmartLight turned OFF and destroyed" << endl;
    }
    void operate() override
    {
        cout << "smart light is turned off" << endl;
    }
};
class smartthermostat : public smartdevice
{
public:
    smartthermostat()
    {
        cout << "SmartThermostat initialized" << endl;
    }
    ~smartthermostat()
    {
        cout << "SmartThermostat shut down and destroyed" << endl;
    }
    void operate() override
    {
        cout << "SmartThermostat is adjusting temperature" << endl;
    }
};
class smartlock : public smartdevice
{
public:
    smartlock()
    {
        cout << "SmartLock initialized" << endl;
    }
    ~smartlock()
    {
        cout << "SmartLock deactivated and destroyed" << endl;
    }
    void operate() override
    {
        cout << "SmartLock is now locked" << endl;
    }
};
int main()
{
    smartdevice *device[3];
    device[0] = new smartlight();
    device[1] = new smartthermostat();
    device[2] = new smartlock();
    for (int i = 0; i < 3; i++)
    {
        device[i]->operate();
    }
    for (int i = 0; i < 3; i++)
    {
        delete device[i];
    }
}
