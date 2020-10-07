#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,c,max=0;
        cin>>n;
        while(n--)
        {
            cin>>c;
            if(c>max)
                max=c;
        }
        cout<<"Case "<<i<<": "<<max<<endl;
    }
    return 0;
}
