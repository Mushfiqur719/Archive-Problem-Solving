#include<iostream>
using namespace std;

int main()
{
    int i=0,n,arr[]= {5,4,3,2,1},steps=0;
    cin>>n;
    for(i=0; i<5; i++)
    {
        if(n>=arr[i])
        {
            steps+=n/arr[i];
            n=n%arr[i];
        }

    }
    cout<<steps;
    return 0;
}
