#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n,k,p,i,temp;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k>>p;
        temp=n-(p%n);
        if(k>temp)
            cout<<"Case "<<i<<": "<<k-temp<<endl;
        else
            cout<<"Case "<<i<<": "<<k+n-temp<<endl;
    }
    return 0;
}

