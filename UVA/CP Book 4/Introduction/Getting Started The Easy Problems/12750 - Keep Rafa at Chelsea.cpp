#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j,pcount=0,tcount=0;
        cin>>n;
        char matches[n],c;
        c=getchar();
        for(j=0;j<n;j++)
            cin>>matches[j];
        for(j=0;j<n;j++)
        {
            if(matches[j]=='L'||matches[j]=='D')
            {
                pcount++;
                tcount++;
            }
            if(matches[j]=='W')
            {
                pcount=0;
                tcount++;
            }
            if(pcount==3)
                break;
        }
        if(pcount!=3)
            cout<<"Case "<<i<<": Yay! Mighty Rafa persists!"<<endl;
        else
        cout<<"Case "<<i<<": "<<tcount<<endl;
    }
    return 0;
}
