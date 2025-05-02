#include<iostream>
using namespace std;
class employee
{
	private:
	string Name;
	int ID;
	string Gender;
	public:
		void getname(string name)
		{
			Name=name;
		}
		void getID(int id)
		{
			ID=id;
		}
		void getgender(string gender)
		{
			Gender=gender;
		}
		string setname( )
		{
			return Name;
		}
		int setID( )
		{
			return ID;
		}
		string setgender( )
		{
			return Gender;
		}
		void inputdata( )
		{
cout<<"Enter the employee name: ";
			cin>>Name;
			cout<<"Enter the employee id: ";
			cin>>ID;
			cout<<"Enter the employee gender: ";
			cin>>Gender;
			
		}
		void displaydata( )
		{
			cout<<"Name: "<<Name<<endl;
			cout<<"ID: "<<ID<<endl;
			cout<<"Gender: "<<Gender<<endl;
		}
};
int main( )
{
	employee emp1, emp2;
	cout<<"Enter data for employee 1: "<<endl;
	emp1.inputdata();
	emp1.displaydata();
	cout<<"Enter data for employee 2: "<<endl;
	emp2.inputdata();
	emp2.displaydata();
	
	
	}
