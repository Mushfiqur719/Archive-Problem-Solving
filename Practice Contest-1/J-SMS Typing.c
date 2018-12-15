#include <stdio.h>
#include <string.h>

int main()
{
    char A[100];
    int i,j,n,count=0;
    scanf("%d",&n);
    getchar();

    for(j=1; j<=n; j++)
    {
        int count=0;
        gets(A);

        for(i=0; i<strlen(A); i++)
        {
            if(A[i]=='a'||A[i]=='d'||A[i]=='g'||A[i]=='j'||A[i]=='m'||A[i]=='p'||A[i]=='t'||A[i]=='w'||A[i]==' ')
                count+=1;
            else if(A[i]=='b'||A[i]=='e'||A[i]=='h'||A[i]=='k'||A[i]=='n'||A[i]=='q'||A[i]=='u'||A[i]=='x')
                count+=2;
            else if(A[i]=='c'||A[i]=='i'||A[i]=='f'||A[i]=='l'||A[i]=='o'||A[i]=='r'||A[i]=='v'||A[i]=='y')
                count+=3;
            else if(A[i]=='s'||A[i]=='z')
                count+=4;
        }
            printf("Case #%d: %d\n",j,count);
    }

    return 0;
}
