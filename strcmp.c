#include<stdio.h>
int main()
{
    char s1[100];
    scanf("%s",&s1);
    char s2[100];
    scanf("%s",&s2);
    int cmp = strcmp(s1,s2);
    if(cmp==0)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Strings are not equal");
    }
    return 0;
}
