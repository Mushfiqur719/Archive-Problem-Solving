#include<stdio.h>

int main()
{
    int i,j,n,N;
    scanf("%d",&n);

    N=n/2;

    for (i=1; i<=N; i++)
    {
        for (j=i; j<=N; j++)
        {
            printf("*");
        }
        for (j=1; j<=(2*i-1); j++)
        {
            printf("D");
        }
        for (j=i; j<=N; j++)
        {
            printf("*");
        }
        printf("\n");

    }


    for (i=1; i<=n; i++)
    {
            printf("D");

    }

    printf("\n");

    for (i=N; i>=1; i--)
    {
        for (j=N; j>=i; j--)
        {
            printf("*");
        }
        for (j=1; j<=(2*i-1); j++)
        {
            printf("D");
        }
        for (j=N; j>=i; j--)
        {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
