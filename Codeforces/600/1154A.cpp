#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,x1,x2,x3,x4,n,max;
    cin>>x1>>x2>>x3>>x4;
    int arr[] = {x1,x2,x3,x4};
    n = sizeof(arr) / sizeof(arr[0]);
    max = *max_element(arr,arr+n);

    for(i=0;i<n;i++)
    {
        if(max!=arr[i])
        cout<<max-arr[i]<<" ";
    }

}
