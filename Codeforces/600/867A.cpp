#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i,n,count=0;
    cin>>n;
    char arr[n];
    scanf("%s",arr);

    for(i=0;i<n;i++)
    {
        if(arr[i]=='S' && arr[i+1]=='F')
            count++;
        if(arr[i]=='F' && arr[i+1]=='S')
            count--;
    }

    if(count>0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
