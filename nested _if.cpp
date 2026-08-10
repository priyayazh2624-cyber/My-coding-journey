#include<stdio.h>
#include<string.h>
int main() {
	int a[100],i,s=0,n;
	printf("Enter the limit: ");
	scanf("%d",&n);
	printf("Enter array values: ");
	for (i=0;i<=n;i++) {
		scanf("%d",&a[i]);	
	}
	for (i=0;i<=4;i++) {
		s+=a[i];
	}
	printf("Sum of array values :%d",s);
	return 0;	
}
