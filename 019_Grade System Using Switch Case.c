#include<stdio.h>
int main()
{
   int score;

   printf("\n  Enter score( 0-100 ): ");
   scanf("%d", &score);

   switch( score / 10 )
   {

   
   case 9:
     printf("\n  Grade: A");
     break;

   case 8:
     printf("\n  Grade: B");
     break;

   case 7:
     printf("\n  Grade: C");
     break;

   case 6:
     printf("\n  Grade: D");
     break;

   case 5:
     printf("\n  Grade: E");
     break;

   default:
     printf("\n  Grade: F");
     break;

   }

   return 0;
}
