#include<iostream>
using namespace std;

int main()
{
    int i,n,count=1;
    cin>>n;
    string arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<n-1;i++)
    {
        if(arr[i] != arr[i+1])
            count++;
    }
    cout<<count;
    return 0;
}
