/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int max(int no1,int no2);
int min(int no1,int no2);

int main() {
   int no1, no2,minimum,maximum;
   printf("Enter the two numbers : ");
   scanf("%d%d", &no1,&no2);
   maximum=max(no1,no2);
   minimum=min(no1,no2);

   printf("\nMaximum=%d\n",maximum);
   printf("Minimum=%d",minimum);
   
   return 0;
}
int max(int no1,int no2)
{
  return(no1>no2)?no1:no2;
}
int min(int no1,int no2)
{
  return(no1<no2)?no1:no2;
}
