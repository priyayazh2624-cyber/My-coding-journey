#include<stdio.h>
int main()
{
	int num1,num2,addition,sub,mult,div,choice;
	printf("enter the first num:");
	scanf("%d",&num1);
	printf("enter the second num:");
	scanf("%d",&num2);
	printf("1-ADDITION\n");
	printf("2=SUB\n");
	printf("3=MULT\n");
	printf("4=DIV\n");
	printf("enter your choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
	addition=num1+num2;
	printf("addition=%d",addition);	
	}
	else if(choice==2)
	{
		sub=num1-num2;
	    printf("sub=%d",sub);
	}
	else if(choice==3)
	{
			mult=num1*num2;
	      printf("mult=%d",mult);
	}
	else if(choice==4)
	{
			div=num1/num2;
	     printf("div=%d",div);
	}
	else
	{
		printf("invalid choice:");
	 } 
	
	return 0;
}
