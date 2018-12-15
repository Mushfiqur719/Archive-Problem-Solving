#include<stdio.h>
#include<string.h>
int main()
{
    char A[10];
    int i=1;
    while(scanf("%s",A))
    {
        if(strcmp(A,"*")==0)
        break;

        else if(strcmp(A,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",i++);

        else if(strcmp(A,"Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n",i++);
    }

    return 0;
}
