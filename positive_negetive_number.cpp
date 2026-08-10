#include<stdio.h>
int main()
{
	int number;
	printf("enter the number:");
	scanf("%d",&number);
	if(number>0)
	{
		printf("enter the positive number:");
	}
	else if(number<0)
	{
		printf("enter the negetive number:");
	}
	else {
		printf("Zero");
	}
	return 0;
}
