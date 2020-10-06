#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char numbers[5][4*n],c;
    c = getchar();
    for(int i=0;i<5;i++)
        for(int j=0;j<4*n;j++)
        {
            cin>>numbers[i][j];
        }
        for(int j=0;j<4*n;j+=4)
        {
            if(numbers[3][j]=='.'&&numbers[3][j+1]=='*')
                cout<<1;
            if(numbers[3][j]=='*'&&numbers[3][j+1]=='.')
                cout<<2;
            if(numbers[3][j]=='.'&&numbers[3][j+1]=='.')
                cout<<3;
        }
        cout<<endl;

    return 0;
}
