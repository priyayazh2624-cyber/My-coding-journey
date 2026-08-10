#include<stdio.h>
int main()
{
	char name[20];
	int i=1,limit;
	printf("enter the limit:");
	scanf("%d",&limit);
	printf("enter the name:");
	scanf("%s",&name);
	while(i<=limit)
	{
		printf("%s\n",name);
		
	
		i++;
	}
	return 0;
}
