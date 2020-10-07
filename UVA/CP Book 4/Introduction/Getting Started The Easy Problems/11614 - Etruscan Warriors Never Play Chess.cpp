#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        int ans = (sqrt(8*n+1)-1)/2;
        cout<<ans<<endl;
    }
    return 0;
}
