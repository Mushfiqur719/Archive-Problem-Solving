#include<bits/stdc++.h>
using namespace std;
struct URL
{
    string str;
    int rev;
};
int main()
{
    int t,i,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        URL u[10];
        int max=0;
        for(i=0;i<10;i++)
        {
            cin>>u[i].str>>u[i].rev;
            max = (u[i].rev>max)? u[i].rev:max;
        }
        cout<<"Case #"<<j<<":"<<endl;
        for(i=0;i<10;i++)
        {
            if(u[i].rev==max)
                cout<<u[i].str<<endl;
        }

    }
    return 0;
}
