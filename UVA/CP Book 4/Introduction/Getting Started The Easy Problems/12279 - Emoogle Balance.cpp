#include<iostream>
using namespace std;
int main()
{
    int n,Case=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        int cause,zero=0,i;
        for(i=1;i<=n;i++)
        {
            cin>>cause;
            if(cause==0)
                zero++;
        }
        n-=2*zero;
        cout<<"Case "<<Case<<": "<<n<<endl;
        Case++;

    }
    return 0;
}
