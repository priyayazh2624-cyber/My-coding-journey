#include<stdio.h>
int main()
{
	int num1,num2,add,sub,mult,div,choice;
	printf("Enter a first number:");
	scanf("%d",&num1);
	printf("Enter a second number:");
	scanf("%d",&num2);	
	printf("1-ADDITION\n");
	printf("2-SUBTRACTION\n");
	printf("3-MULTPLICATION\n");
	printf("4-DIVISION\n");
	printf("Enter a choice:");
	scanf("%d",&choice);
	if(choice==1)
	{
		add=num1+num2;
		printf("add=%d\n",add);
	}
	  else if(choice==2)
     	{
		  sub=num1-num2;
		  printf("sub=%d\n",sub);
    	}
	  else if(choice==3)
	   {
		  mult=num1*num2;
		  printf("mult=%d\n",mult);
	   }
      else if(choice==4)
	   {
		  div=num1/num2;
		  printf("div=%d\n",div);
	   }
	else
	{
		printf("invalid choice");
	}
	return 0;
}