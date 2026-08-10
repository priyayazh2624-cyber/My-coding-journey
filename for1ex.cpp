#include<stdio.h>
int main()
{
	int i,num,add=0,limit;
	printf("enter the limit:");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		printf("enter a number:\n");
		scanf("%d",&num);
		add+=num;
	}
	printf("%d",add);
	return 0;
}
