#include<stdio.h>
int main()
{
	int age,price;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>60)
	{
		printf("your ticket price:100");
	}
	else if(age>=13&age<60)
	{
		printf("your ticket price:250");
	}
	else if(age>=6)
	{
		printf("your ticket price:100");
	}
	else
	{
		printf("no valid");
	}
	return 0;
}

