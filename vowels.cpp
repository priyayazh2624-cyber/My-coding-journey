#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int count=0,i;
	printf("Enter a string: ");
	scanf("%s",&str);
	for (i=0;i<strlen(str);i++) {
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
			count++;
		}	
	}
	printf("Count of Vowels : %d",count);
	return 0;
}
