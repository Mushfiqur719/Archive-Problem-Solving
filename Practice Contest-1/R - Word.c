#include<stdio.h>
#include<string.h>
int main()
{
    int i,up=0,low=0;

    char A[100];
    scanf("%s",A);

    for(i=0;i<strlen(A);i++)
    {
        if(A[i]>='A' && A[i]<='Z')
            up++;
        else if(A[i] >='a'  && A[i]<='z')
            low++;
    }

    for(i=0;i<strlen(A);i++)
    {
        if(low>=up && A[i]>='A' && A[i]<='Z')
                A[i]+=32;

        else if(low<up && A[i] >='a' && A[i]<='z')
                A[i]-=32;
    }

    printf("%s\n",A);

    return 0;
}
