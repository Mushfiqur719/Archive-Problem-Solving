#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i,sum=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(i=0;i<n-1;i++)
        {
            sum+=arr[i+1]-arr[i];
        }
        cout<<sum*2<<endl;

    }
    return 0;
}
