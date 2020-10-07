#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t,n,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=(((((n*567)/9)+7492)*235)/47)-498;
        sum/=10;
        cout<<abs(sum%10)<<endl;
    }
    return 0;
}

