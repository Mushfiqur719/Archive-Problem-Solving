#include<stdio.h>
int main()
{
    int A[100],n,m;
    scanf("%d %d",&n,&m);

    int i,count=0;

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0;i<n;i++)
    {
        if(A[i]>=A[m-1] && A[i]>0)
            count++;
    }

    printf("%d\n",count);

    return 0;
}
