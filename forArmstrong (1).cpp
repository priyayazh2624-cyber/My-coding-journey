#include<stdio.h>
int main()
{
	int num,n,s=0,number;
	printf("enter a num:");
	scanf("%d",&num);
	number=num;
	for(;num>0;)
	{
		n=num%10;
		s+=n*n*n;
		num=num/10;		
	} 
	 if(number==s)
	 {
	 	printf("Armstrong number");
	 }
	 else
	 {
	 	printf("not armstrong number");
	 }
	 	
	 return 0;
}
