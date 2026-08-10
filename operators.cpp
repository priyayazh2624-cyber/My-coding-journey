/*
 Arithmetic operators:
 
 addition      =   +
 subtraction   =   -
 multiplication =  *
 division       =  /
 remainder      =  % - modulus
 
 

*/


#include<stdio.h>
int main()
{
	int num1,num2,add,sub,mult,div,rem;
	printf("enter the first no:");
	scanf("%d",&num1);
	printf("enter the second no:");
	scanf("%d",&num2);
	add=num1+num2;
	printf("addition=%d\n",add);
	sub=num1-num2;
	printf("subraction=%d\n",sub);
	mult=num1*num2;
	printf("multiplication=%d\n",mult);
	div=num1/num2;
	printf("division=%d\n",div);
	rem=num1%num2;
	printf("remainder=%d",rem);
	return 0;
}
