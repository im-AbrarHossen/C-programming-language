#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, len, vowel, digit, consonant, space, specialCharacters;
    printf("Enter any string: ");
    gets(str);
    vowel = 0;
    consonant = 0;
    digit = 0;
    space = 0;
    specialCharacters = 0;
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
            {
                if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
                vowel++;
                else
                consonant++;
            }
        else if (str[i] >='0' && str[i] <= '9')
            {
                digit++;
            }
        else if (str[i] == ' ')
            {
                space++;
            }
        else
            {
                specialCharacters++;
            }
    }
    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);
    printf("Total number of digit = %d\n",digit);
    printf("Total number of space = %d\n",space);
    printf("Total number of special characters = %d\n",specialCharacters);
    getch();
}
