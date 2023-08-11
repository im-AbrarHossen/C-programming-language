#include <stdio.h>
int isPerfect(int n);
void printPerfect(int start, int end);
int main()
{
    int start, end;
    printf("Input lower limit: ");
    scanf("%d", &start);
    printf("Input upper limit: ");
    scanf("%d", &end);
    printf("Output perfect numbers: ");
    printPerfect(start, end);
    return 0;
}
int isPerfect(int n)
{
    int i, sum;
    sum = 0;
    for(i=1; i<n; i++)
    {
        if(n%i == 0)
        {
            sum=sum+i;
        }
    }
    if(sum == n)
        return 1;
    else
        return 0;
}
void printPerfect(int start, int end)
{
    while(start <= end)
    {
        if(isPerfect(start))
        {
            printf("%d ", start);
        }
        start++;
    }
}
