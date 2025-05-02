#include <iostream>
#include <string>
using namespace std;

class CPU
{
public:
    string brand;
    double speed;

    CPU(string b, double s)
    {
        brand = b;
        speed = s;
    }

    void display()
    {
        cout << "CPU: " << brand << ", Speed: " << speed << " GHz" << endl;
    }
};

class Memory
{
public:
    int size;

    Memory(int s)
    {
        size = s;
    }

    void display()
    {
        cout << "Memory: " << size << " GB" << endl;
    }
};

class Storage
{
public:
    int size;
    string type;

    Storage(int s, string t)
    {
        size = s;
        type = t;
    }

    void display()
    {
        cout << "Storage: " << size << " GB, Type: " << type << endl;
    }
};

class Computer
{
public:
    CPU cpu;
    Memory memory;
    Storage storage;

    Computer(string cpuBrand, double cpuSpeed, int memSize, int storageSize, string storageType)
        : cpu(cpuBrand, cpuSpeed), memory(memSize), storage(storageSize, storageType)
    {
    }

    void display()
    {
        cout << "Computer Specifications: " << endl;
        cpu.display();
        memory.display();
        storage.display();
    }
};

int main()
{

    Computer myComputer("Intel", 3.5, 8, 128, "HDD");

    myComputer.display();

    return 0;
}
