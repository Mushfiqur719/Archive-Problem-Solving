#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,Max,i,x,maxdiff=INT_MIN;
        cin>>n;
        int arr[n];
        cin>>arr[0];
        Max=arr[0];
        for(i=1;i<n;i++)
        {
            cin>>arr[i];
            if(Max-arr[i]>maxdiff)
                maxdiff=Max-arr[i];
            if(arr[i]>Max)
                Max=arr[i];
        }
        cout<<maxdiff<<endl;
    }
    return 0;
}
