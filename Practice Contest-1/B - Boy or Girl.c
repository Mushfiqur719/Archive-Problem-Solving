#include <stdio.h>
#include <string.h>

int main()
{
    char temp, A[100];
    int len, i, j, count=0;

    gets(A);

    len = strlen(A);

    for (i = 1; i < len; i++)
    {
        for(j=0; j<len-i; j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }

        }
    }

    for(i=0; i<len; i++)
    {
        if(A[i] != A[i+1])
            count++;
    }

    if(count%2==0)
        printf("CHAT WITH HER!\n");

    else
        printf("IGNORE HIM!\n");

    return 0;
}
