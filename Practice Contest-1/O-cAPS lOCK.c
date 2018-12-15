#include<stdio.h>
#include<string.h>

int main()
{
    int i,len=0;
    char A[100];
    scanf("%s",A);
    for(i=1; i<strlen(A); i++)
    {
        if(A[i]>='A'&& A[i]<='Z')
        {
            len++;
        }
    }

    if(len==strlen(A)-1)
    {
        for(i=0; i<strlen(A); i++)
        {
            if(A[i]>='A' && A[i]<='Z')
                A[i]+=32;
            else
                A[i]-=32;
        }
    }

    printf("%s\n",A);
    return 0;
}
