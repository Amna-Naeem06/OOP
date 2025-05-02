#include<iostream>
using namespace std;
class person
{
    private:
    string name;
    int age;
    float *height;
    public:
    person(string n,int a,float h[]);
    person(const person &p);
    string getname();
    int getage();
    float *getheight();
    void display();

};
person :: person(string n,int a,float h[])
{
    name=n;
    age=a;
    height=h;
}
person :: person(const person &p)
{
    name=p.name;
    age=p.age;
    height=p.height;
}
string person :: getname( )
{
    return name;
}
int person :: getage( )
{
    return age;
}
float *person :: getheight( )
{
    return height;
}
void person :: display( )
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Height "<<height[i]<<endl;
    }
}
int main( )
{
    float arr[]={5.5,5.9,4.4};
    person p1("John",18,arr);
    person p2=p1;
    cout<<"Before modifying: "<<endl;
    p1.display();
    p2.display();

    p2.getheight()[1]={6.1};
    cout<<"After modifying: "<<endl;
    p1.display();
    p2.display();
}