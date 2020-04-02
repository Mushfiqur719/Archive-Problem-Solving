#include<iostream>
using namespace std;

int main()
{
    int i,t,n,out=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=4)
            out=4-n;
        else
        {
            if(n%2==0)
                out=0;
            else
                out=1;
        }
        cout<<out<<endl;
    }

    return 0;
}
