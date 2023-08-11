#include<stdio.h>
int check_Prime_number(int n);
int main()
{
    int n1, n2, i, j;
    printf("Input lower limit: ");
    scanf("%d",&n1);
    printf("Input upper limit: ");
    scanf("%d",&n2);
    if(n1>n2)
    {
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    printf("Output prime numbers between %d-%d are: ",n1,n2);
    for(i=n1; i<=n2; i++)
    {
        j=check_Prime_number(i);
        if(j==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
int check_Prime_number(int n)
{
    int k, j=1;
    for(k=2; k<=n/2; k++)
    {
        if(n%k==0)
        {
            j=0;
            break;
        }
    }
    return j;
}
