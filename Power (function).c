#include<stdio.h>
void Power(int,int);
void main()
{
    int x,n;
    printf("Input any number: ");
    scanf("%d",&x);
    printf("\nInput power: ");
    scanf("%d",&n);
    Power(x,n);
}
void Power(int x,int n)
{
    int power=1;
    while(n>0)
    {
        power=power*x;
        n--;
    }
    printf("\nOutput: %d",power);
}
