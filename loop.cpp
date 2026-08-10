/*
Assignment operators:
	++   - increment
	--   - decrement
	
	+=, -=, *=, /=
	
	a=50;
	print(a);     //50
	a+=5;
	print(a);     //55
	a--;
	print(a);     //54

Looping statements;
	while, do-while, for
	
	initialization
	while(condition) {
		statements;
		increment or decrement
	}
	
	print the following;
		1. 2,4,6,8...50
		2. 5, 10, 15, ... 100
		3. 10,9,8,...1
		4. Print your name 10 times
*/

#include<stdio.h>
int main() {
	int i=2;
	while(i<=50) {
		printf("%d\n",i);
		i+=2;
	}
	return 0;
}
