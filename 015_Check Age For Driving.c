#include<stdio.h>
int main()
{
	int age;
	
	printf("\n  ENTER YOUR AGE-->");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("\n  YOU CAN DRIVE");
	}
	else
	{
		printf("\n  YOU CAN'T DRIVE");
	}
	return 0;
}
