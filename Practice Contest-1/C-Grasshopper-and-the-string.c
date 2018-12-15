#include<stdio.h>
int main()
{
    int i,len,count=0,Vcount=0;
    char A[100];
    gets(A);
    len=strlen(A);
    for(i=0;i<len+1;i++)
    {
        if((A[i]>='A' && A[i]<='Z')|| A[i]=='\0')
        {
            count++;
            if(A[i]=='A'|| A[i]=='E'|| A[i]=='I'|| A[i]=='O'|| A[i]=='U'|| A[i]=='Y'|| A[i]=='\0')
            {
                if(count>Vcount)
                {
                    Vcount=count;
                }
               count=0;
            }
        }
    }

    printf("%d\n",Vcount);

    return 0;
}
