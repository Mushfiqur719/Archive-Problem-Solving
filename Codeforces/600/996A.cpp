#include<iostream>
using namespace std;

int main()
{
    int i,count=0,n,bills[]= {100,20,10,5,1};
    cin>>n;

    for(i=0; i<5; i++)
    {
        if(bills[i]<=n)
        {
            count+= n/bills[i];
            n = n%bills[i];
        }

    }
    cout<<count;
    return 0;
}
