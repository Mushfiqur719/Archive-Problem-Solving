#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int arr[5],i,sum=0;
        for(i=0;i<5;i++)
        {
            cin>>arr[i];
            if(arr[i]==n)
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
