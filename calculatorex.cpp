#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,add,sub,mult,div,choice,i;
	cout<<"enter a number1:\n";
	cin>>num1;
	cout<<"enter a number2:\n";
	cin>>num2;
	cout<<"1-Addition\n";
	cout<<"2-Subtraction\n";
	cout<<"3-Multplication\n";
	cout<<"4-Division\n";
	cout<<"5-Exit\n";
	while(i<5)
	{
	
	cout<<"enter your choice:\n";
	cin>>choice;
	
	if(choice==1)
	{
		add=num1+num2;
		cout<<"Addition="<<add<<"\n";
	}
	else if(choice==2)
	{
		sub=num1-num2;
		cout<<"subtraction="<<sub<<"\n";
	}
	else if(choice==3)
	{
		mult=num1*num2;
		cout<<"multplication="<<mult<<"\n";
	}
	else if(choice==4)
	{
		div=num1/num2;
		cout<<"division="<<div<<endl;
	}
	else if(choice==5)
	{
		exit(0);
	}
	else
	{
		cout<<"Invalid Choice";
	}
	i++;
}
    
  return 0;	
}
