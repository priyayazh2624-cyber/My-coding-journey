/*
Structures:

struct stucturename {
	variable declarations;
};

struct stucturename structurevariable;
*/

#include<stdio.h>
struct student {
	char sname[50];
	int totmarks;
};

struct teacher {
	char tname[50];
	char subj[50];
};

int main() {
	struct student s;
	struct teacher t;
	printf("Enter Student name:");
	scanf("%s",&s.sname);
	printf("Enter Student total mark:");
	scanf("%d",&s.totmarks);
	printf("%s",s.sname);
	printf("%d",s.totmarks);
	printf("Enter Teacher name:");
	scanf("%s",&t.tname);
	printf("enter a subject:");
	scanf("%s",&t.subj);
	printf("%s",t.tname);
	printf("%s",t.subj);
	return 0;
}
