#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter the number of rows and column: \n");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("\nIf matrix =\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    int b[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("transpose of the matrix =\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    getch();
}
