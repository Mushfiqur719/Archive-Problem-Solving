#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int arr[13],sum=0,j;
        for(j=0;j<13;j++)
        {
            cin>>arr[j];
            if(arr[j]>0)
                sum++;
        }
        if(sum<13)
            cout<<"Set #"<<i<<": No"<<endl;
        else
            cout<<"Set #"<<i<<": Yes"<<endl;


    }
    return 0;
}
