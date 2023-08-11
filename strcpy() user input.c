#include<stdio.h>
int main()
{
   int i=0;
   char s1[50];
   char s2[50];
   gets(s1);
   while(s1[i] != '\0')
   {
      s2[i] = s1[i];
      i++;
   }
   s2[i] = '\0';
   printf("\nCopied String is %s", s2);
   return 0;
}
