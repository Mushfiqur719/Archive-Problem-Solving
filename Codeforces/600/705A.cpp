#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==1)
            cout<<"I hate ";
        else if(i%2==1 && i>1)
            cout<<"that I hate ";
        else
            cout<<"that I love ";
    }
    cout<<"it";
    return 0;
}
