#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int i,j,mat[5][5],ans;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
                ans=abs(2-i)+abs(2-j);
        }
    }
    cout<<ans;
    return 0;
}
