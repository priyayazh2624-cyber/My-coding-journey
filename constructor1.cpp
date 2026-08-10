#include<conio.h>
#include<iostream>
using namespace std;
class employee
{
	public:
		int id;
		string name;
		float salery;
			
		employee(int i ,string n ,float s)
		{
		  id=i;
		  name=n;
		  salery=s;
		}
	int employee1()
	{
		cout<<id<<" "<<name<<" "<<salery<<" " ;
		
	}
	 int employee2()
	{
		cout<<id<<" "<<name<<" "<<salery<<" ";
	}
};
int main()
{
	employee e1=employee(2345,"priya",10000);
    employee e2=employee(8765,"anbu",20000);
	
	e1.employee1();
    e2.employee2();

	return 0;
}
