#include<stdio.h>
int main()
{
    int A[100],n,i;
    scanf("%d",&n);
    int B=0,C=0,x,y;

    for(i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=1;i<=n;i++)
    {
        if(A[i]%2==0)
        {
           B++;
           x=i;
        }

        else
        {
            C++;
            y=i;
        }

    }

        if(B==1)
            printf("%d\n",x);
        else if(C==1)
            printf("%d\n",y);



    return 0;
}
