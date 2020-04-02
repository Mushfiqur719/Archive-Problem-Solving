#include<iostream>
using namespace std;

int main()
{
    int i,n,zero=0,one=0;
    cin>>n;
    char arr[n];
    cin>>arr;
    for(i=0;i<n;i++)
    {
        if(arr[i]=='z')
            zero++;
        if(arr[i]=='n')
            one++;
    }
    for(i=1;i<=one;i++)
        cout<<1<<" ";
    for(i=1;i<=zero;i++)
        cout<<0<<" ";
    return 0;
}
