#include<stdio.h>
int main()
{
	int num1,num2,add,sub,mult,div,choice;
	printf("enter the num1:");
	scanf("%d",&num1);
	printf("enter the num2:");
	scanf("%d",&num2);
	printf("1-addition:\n");
	printf("2-subraction:\n");
	printf("3-multiplication:\n");
	printf("4-division");
	printf("enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	    case 1:
	    	add=num1+num2;
		    printf("addition=%d\n",add);
		    break;
		case 2:
		    sub=num1-num2;
			printf("subraction=%d\n",sub);
			break;
		case 3:
			mult=num1*num2;
			printf("multiplication=%d\n",mult);
			break;
		case 4:
			div=num1/num2;
			printf("division=%d\n",div);
			break;
		default:
			printf("invalid:");
		}
		return 0;
}
