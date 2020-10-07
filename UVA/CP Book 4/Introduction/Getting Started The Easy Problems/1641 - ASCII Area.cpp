#include<iostream>
using namespace std;
int main()
{
    int w,h,i,j;
    while(cin>>h>>w)
    {
        char area[h][w];
        int slash=0,dot=0;
        for(i=0; i<h; i++)
        {
            for(j=0; j<w; j++)
            {
                cin>>area[i][j];
                if(area[i][j]=='/' || area[i][j]=='\\')
                    slash++;
                if(slash%2!=0 && area[i][j]=='.')
                    dot++;
            }
        }
        cout<<(slash/2)+dot<<endl;
    }
    return 0;
}
