#include<stdio.h>
int main() {
	int a[][],b[][],c[][],i,j;
	printf("Enter values of Array A: ");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter values of Array B: ");
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<2;i++) {
		for(j=0;j<2;j++) {
			printf("%d",c[i][j]);
		}
	}
	
	return 0;
}
