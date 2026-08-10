#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int userguess,compguess,i=0;
	char choice;
    while(true)
	{
	    while(choice=='y'||choice=='n')
		compguess=rand()%100+1;
		printf("enter the userguess:");
		scanf("%d",&userguess);
		i++;	
		if(userguess<=100)
		{
			if(userguess>compguess)
			{
				printf("enter lower\n");
			}
			else if(userguess<compguess)
			{
				printf("enter higher\n");
			}
			else
			{
				printf("you win\n");
				break;
			}
		}
	
		else
		{	
			printf("enter 0 to 100 only\n");
		}
		if(i==5)
		{
			printf("you loss\n");
			break;
		}
	} 
		

		
			printf("Do you Play again?");
		    scanf("%c",&choice);	
		
		  
     return 0;
}
