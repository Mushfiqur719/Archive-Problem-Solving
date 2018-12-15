#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count=0;
    char A[100];

    scanf("%d",&n);
    scanf("%s",A);

    for(i=0;i<n-1;i++)
    {
        if(A[i] == A[i+1])
            count++;
    }

    printf("%d\n",count);

    return 0;
}
