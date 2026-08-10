#include<stdio.h>
int main()
{
	int tam,eng,mat,sci,soc,average,grade,stdname;
	int i=1;
	while (i<=3) {
	printf("enter the student name:");
	scanf("%s",&stdname);
	printf("enter the tam:");
	scanf("%d",&tam);
	printf("enter the eng:");
	scanf("%d",&eng);
	printf("enter the mat:");
	scanf("%d",&mat);
	printf("enter the sci:");
	scanf("%d",&sci);
	printf("enter the soc:");
	scanf("%d",&soc);
	average=(tam+eng+mat+sci+soc)/5;
	if(average>=90)
	{
		printf("grade A");
	}
	else if(average>=75)
	{
		printf("grade B");
	}
	else if(average>=60)
	{
		printf("grade C");
	}
	else if(average>=45)
	{
		printf("grade E");
	}
	else
	{
		printf("grade F");
	}
	i++;
}
	return 0;
			
	}
