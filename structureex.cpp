#include<stdio.h>
struct student
{
	char sname[40];
	int totmarks,standerd;
};
struct teacher
{
	char tname[40],subj[40];
	
};
 int main()
 {
    struct student s;
    struct teacher t;
 	printf("enter a student name:");
 	scanf("%s",&s.sname);
 	printf("enter a total marks and standerd:");
 	scanf("%d%d",&s.totmarks,&s.standerd);
 	printf("%s",s.sname);
 	printf("%d%d",s.totmarks,s.standerd);
 	printf("enter a teacher name:");
 	scanf("%s",&t.tname);
 	printf("enter a subject:");
 	scanf("%s",&t.subj);
 	printf("%s%s",t.tname,t.subj);
 	return 0;
 }
