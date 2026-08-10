#include<stdio.h>
int main()
{
	int i=1,num,add=0,limit;
	printf("enter the limit:");
	scanf("%d",&limit);
	do
	{
		printf("enter the num:");
		scanf("%d",&num);
		add+=num;
		i++;
	}
	
	while(i<=limit);
	printf("%d",add);
	return 0;
}
