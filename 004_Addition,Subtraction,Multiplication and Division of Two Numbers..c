#include<stdio.h>

void main()
{
	int a,b;
	printf("\n  The value of a is:- ");
	scanf("%d",&a);
	
	printf("\n  The value of b is :- ");
	scanf("%d",&b);
	
	printf("\n  The Additionof %d and %d is:- %d",a,b,a+b);
	printf("\n  The Subtractionof %d  and %d is:- %d",a,b,a-b);
	printf("\n  The Multiplication of %d and %d is:- %d",a,b,a*b);
	printf("\n  The Division of %d and %d is:- %.2f",a,b,(float)a/b); //type cast
	
	return 0;
}
