#include<stdio.h>
int main()
{
	int num,i=1,mult_tbl,limit;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the limit:");
	scanf("%d",&limit);
	while(i<=limit) 
	{
    	mult_tbl=num*i;
		printf("%d*%d=%d\n",i,num,mult_tbl);
		i++;
	
	}
	return 0;
}
