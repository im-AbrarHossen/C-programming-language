#include <stdio.h>
int EvenOdd(int n)
{
    int i=n%2;
    if(i != 0)
    {
        printf("\nOutput: Odd\n");
    }
    else
    {
        printf("\nOutput: Even\n");
    }
    return 0;
}
int main()
{
    int n;
    printf("Input any number: ");
    scanf("%d", &n);
    EvenOdd(n);
    return 0;
}
