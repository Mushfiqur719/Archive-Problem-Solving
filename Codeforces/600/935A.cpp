#include<iostream>
using namespace std;

int main()
{
    int i,n,count=0;
    cin>>n;
    for(i=1;i<=n/2;i++)
    {
        if((n-i)%i==0)
            count++;
    }
    cout<<count;
    return 0;
}
