#include<stdio.h>
#include<conio.h>
Reverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n = n/10;
   }
   return sum;
}
void main()
{
   int rev, num;
   printf("Input number: ");
   scanf("%d", &num);
   rev = Reverse(num);
   printf("Output reverse: %d",rev);
   getch();
}
