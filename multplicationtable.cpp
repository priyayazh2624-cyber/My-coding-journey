#include<stdio.h>
int main()
{
	    int i,num,m;
		printf("enter a number");
		scanf("%d",&num);
		for(i=1;i<=10;i++)
		  {
	    	m=i*num;
	        printf("%d*%d=%d\n",i,num,m);
	      }
	return 0;
}
