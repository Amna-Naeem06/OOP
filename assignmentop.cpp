#include<iostream>
using namespace std;
class overload
{
private:
int *x,*y;
public:
void print( )
{
    cout<<*x<<","<<*y<<endl;
}
overload( )
{

}
overload(int a,int b)
{
    x=new int;
    *x=a;
    y=new int;
    *y=b;
}
friend overload& operator+(overload &a1,overload &a2)
{
    *(a1.x)=*(a2.x);
    *(a1.y)=*(a2.y);
    return a1;
}
};
int main( )
{
    overload n1(10,10);
    overload n2(5,5);
    n1=n1;
n1.print();
}