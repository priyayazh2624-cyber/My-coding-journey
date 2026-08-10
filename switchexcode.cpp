/*
Switch Statement:

	switch(variable) {
		case 1:
			statements;
			break;
		case 2:
			statements;
			break;
		....
		default:
			statements;
	}
*/

#include<stdio.h>
int main() {
	int daynum;
	printf("Enter a number ");
	scanf("%d",&daynum);
	switch(daynum) {
		case 1: 
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("wednesday");
			break;
		case 4:
		    printf("thursday");
			break;
		case 5:
		    printf("friday");
			break;
		case 6:
		    printf("saturday");
			break;			
		default:
			printf("Invalid number");
	}
		return 0;
}
