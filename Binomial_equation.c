#include <stdio.h>
int main()
{
  int s=0;
  printf("Enter the binomial order : ");
  scanf("%ld", &s);
  while (s < 0)
  {
   printf("Please enter positive binomial order : ");
   scanf("%d", &s);
  }
  printf("(a+b)^%ld =",s);
  printf("\n");
  for(int k = 0; s >= k; k++)
  {
    calculate(k);
    printf("\n");
  }
  return 0;
}
void print(int n,int r, int deger)
{
    if(r== 0)
    {
        if (n-r != 0)
        {
            if(deger == 1)
            {
                printf("(a^%ld) +",n-r);
            }
            else
            {
                printf(" %ld*(a^%ld) +",deger,n-r);
            }
        }
        else
        {
            printf("1");
        }
   }
   else if(r>0 && r<n)
   {
      printf(" %ld*(a^%ld*b^%ld) +",deger,n-r,r);
   }
   else
   {
       if(deger==1)
       {
           printf(" (b^%ld)",r);
       }
       else
       {
           printf(" %ld*(b^%ld)",deger,r);
       }
   }
}
void calculate(int n)
{
    int r;
    int deger;
    for (r=0;r<=n;r++)
    {
        deger = combination(n,r);
        print(n,r,deger);
    }
}
int combination( int n, int k)
{
    if(k == 0)
    {
    return 1;
    }
    if(k>n-k)
    {
     return combination(n,n-k);
    }
     return n*combination(n-1,k-1)/k;
}
