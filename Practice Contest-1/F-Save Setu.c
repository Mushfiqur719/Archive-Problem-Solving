#include<stdio.h>
#include<string.h>

int main()
{
    int i=0,j,n,k;
    char A[100];
    scanf("%d",&n);

    for(j=0;j<n;j++)
    {
        scanf("%s",A);

        if(strcmp (A, "donate")==0)
        {
            scanf("%d",&k);
            i+=k;
        }
        else
            printf("%d\n",i);
    }

    return 0;
}
