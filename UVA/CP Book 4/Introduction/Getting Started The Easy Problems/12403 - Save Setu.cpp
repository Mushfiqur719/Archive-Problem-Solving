#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,sum=0,money;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        if(str=="donate")
        {
            cin>>money;
            sum+=money;
        }
        else
            cout<<sum<<endl;
    }
    return 0;
}
