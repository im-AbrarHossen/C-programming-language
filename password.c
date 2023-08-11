#include <stdio.h>
int pass(int x, int y);

int main()
{
    int PASS = 1234;
    int password;
    int i, n;
    printf("\nENTER YOUR PASSWORD : ");
    scanf("%d", &password);
    for(i=0; i<100; i++)
    {
        if(password == PASS)
        {
            printf("\n LOGIN APPROVED\n");
            break;
        }
        else
            printf("TRY AGAIN......");
    }
    return 0;
}
