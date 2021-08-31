#include<stdio.h>

int main()

{
	int a;
	
	printf("\n  ENTER THE VALUE OF a :-");
	scanf("%d",&a);
	
	
	if(a%2==0)
	{
		printf("\n  %d is even",a);
	}
	else
	{
		printf("\n  %d is odd",a);
	}
	return 0;
}
