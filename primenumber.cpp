#include<stdio.h>
int main() {
	int i=2,num,count=0;
	printf("Enter a number");
	scanf("%d",&num);
	while (i<=num) {
		if (num%i==0) {
			count++;
		}
		i++;
	}
	if(count==1) {
		printf("Prime number");
	} else {
		printf("Not Prime number");
	}
	return 0;
	
}
