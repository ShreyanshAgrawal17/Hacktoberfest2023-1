#include <stdio.h>
void creatematrix(int r, int c, int A[][c])
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
}
void display(int r, int c, int A[][c])
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        printf("\n");
        for (j = 1; j <= c; j++)
        {
            printf("%d ", A[i][j]);
        }
    }
}

void lowertri(int r,int c,int A[][c])
{
    int i,j;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if (j <= i)
                printf("%d ", A[i][j]);
            else
                printf(" ");
        }
        printf("\n");
        }
}

int main()
{
    int r, c;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);
    int A[r][c];
    creatematrix(r, c, A);
    display(r, c, A);
    printf("\n");
    lowertri(r,c,A);

    return 0;
}
