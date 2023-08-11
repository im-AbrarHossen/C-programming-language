#include <stdio.h>
void EvenAndOdd(int i, int n);
int main()
{
    int n;
    printf("Input range: ");
    scanf("%d", &n);
    printf("\nOutput even numbers: ");
    EvenAndOdd(2, n);
    printf("\n\nOutput odd numbers: ");
    EvenAndOdd(1, n);
    return 0;
}
void EvenAndOdd(int i, int n)
{
    if(i > n)
    return;
    printf("%d  ", i);
    EvenAndOdd(i+2, n);
}
