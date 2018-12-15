#include<stdio.h>
int main()
{
    int i,n,len;
    scanf("%d",&n);
    char A[100];

    for(i=0;i<n;i++)
    {
        scanf("%s",A);
        len=strlen(A);

        if(len>3)
            printf("3\n");
        else
            if(A[0]=='o')
            {
                if(A[1]=='n'||A[2]=='e')
                    printf("1\n");
            }

            else if(A[0]=='t')
            {
                if(A[1]=='w'||A[2]=='o')
                    printf("2\n");
            }

            else if(A[0]!='o' && A[0]!='t')
            {
                if(A[1]=='n')
                    printf("1\n");
                else
                    printf("2\n");
            }

    }

    return 0;
}
