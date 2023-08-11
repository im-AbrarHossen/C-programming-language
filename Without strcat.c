#include<stdio.h>
int main()
{
    char s1[100]="My name is ";
    char s2[100]="Md. Abrar Hossen Badhon";
    int i=0, len=0, j=0;
    while(s1[i] != '\0')
    {
        i++;
        len++;
    }
    while(s2[j] != '\0')
    {
        s1[len + j] = s2[j];
        j++;
    }
    printf("Finally s1 = %s",s1);
    return 0;
}
