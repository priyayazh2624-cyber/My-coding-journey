/*

input  - product name, quantity, rate

process - amount, discount 10%, net amount

output - Product name, amount, discount 10%, net amount


input  - Student name, eng, tam, sci, mat, soc

process - total, average

output - Student name, total, average

loop variable - int, char, boolean
*/

#include<stdio.h>
int main()
{
	char prodname[10];
	int quantity,rate,amount,discount,netamt;
	char i='y';
	while(i=='y')
	{
	printf("enter the product name:");
	scanf("%s",&prodname);
	printf("enter the quantity:\n");
	scanf("%d",&quantity);
	printf("enter the rate:\n");
	scanf("%d",&rate);
	amount=quantity*rate;
	printf("amount=%d:\n",amount);
	if(amount>=1500) {
		discount=amount*30/100;
	} 
	else if(amount>=1000) {
		discount=amount*20/100;
	}
	else if(amount>=500) {
		discount=amount*10/100;
	}
	else {
		discount=amount*0/100;
	}
	printf("discount=%d:\n",discount);
	netamt=amount-discount;
	printf("netamt=%d",netamt);
    printf("Do you want to continue? y/n");
	scanf("%s",&i);
}
	return 0;
	}
