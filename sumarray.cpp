#include<stdio.h>
int main()
{
	int a[50],i,sum=0,limit;
	printf("enter the limit:");
	scanf("%d",&limit);
	printf("enter a array value:");
	for(i=0;i<=limit;i++)
     	{
		   scanf("%d",&a[i]);
	    }
	for(i=0;i<=limit;i++)
     	{
		   sum+=a[i];
	    }
	printf("sum of array values:%d",sum);
	return 0;    
}
