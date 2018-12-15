#include<stdio.h>
#include<string.h>
int main()
{
    char A[1000];
    int i;

    while(scanf("%s",A)==1)
    {
        for(i=0;i<strlen(A);i++)
        {
            printf("%c",A[i]-7);
        }
        printf("\n");
    }

    return 0;
}
