#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,len;
    cin>>n;
    char arr[1000];
    while(n--)
    {
        cin>>arr;
        len=strlen(arr);

        if(arr[len-1]=='o')
            cout<<"FILIPINO"<<endl;
        if(arr[len-1]=='u')
            cout<<"JAPANESE"<<endl;
        if(arr[len-1]=='a')
            cout<<"KOREAN"<<endl;

    }
    return 0;
}
