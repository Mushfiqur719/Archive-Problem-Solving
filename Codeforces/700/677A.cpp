#include<iostream>
using namespace std;

int main()
{
    int n,h,i,count=0;
    cin>>n>>h;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>h)
            count+=2;
        else
            count++;
    }
    cout<<count;
    return 0;
}
