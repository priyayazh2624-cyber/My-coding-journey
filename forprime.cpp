
#include<stdio.h>
int main()
{
	int i,num,count;
	printf("enter a number:");
	scanf("%d",&num);
	for(i=2;i<=7;i++)
	{
		if(num%i==0)
		
		{
			count++;
		}
		   i++;
	}
	if(count==1)
	{
		printf("prime number");
	}
	else
	{
		printf("not prime number");
	}
	return 0;
}
