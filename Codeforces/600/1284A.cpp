#include<iostream>
using namespace std;

int main()
{
    int i,n,m,q,x;
    cin>>n>>m;
    string s[n],t[m];

    for(i=0;i<n;i++)
        cin>>s[i];

    for(i=0;i<m;i++)
        cin>>t[i];

    cin>>q;

    string ans[q];
    for(i=0;i<q;i++)
    {
        cin>>x;
        x--;
        ans[i]=s[x%n]+t[x%m];
    }
    for(i=0;i<q;i++)
        cout<<ans[i]<<endl;

    return 0;
}
