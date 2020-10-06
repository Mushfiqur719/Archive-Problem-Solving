#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j;
    while(cin>>m>>n)
    {
        int arr[n],count=0;
        for(i=1; i<=m; i++)
        {
            int check=0;
            for(j=0; j<n; j++)
            {
                cin>>arr[j];
                if(arr[j]==0)
                    check=-10e9;
                else
                    check+=arr[j];
            }
            if(check>0)
                count++;
        }
        cout<<count<<endl;
    }
}
