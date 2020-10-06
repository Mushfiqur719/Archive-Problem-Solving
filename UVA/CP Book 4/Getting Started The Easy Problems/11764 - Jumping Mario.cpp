#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,low=0,high=0,h=0,temp;
        cin>>n;
        while(n--)
        {
            if(h==0)
            {
                cin>>h;
                temp=h;
            }
            else
            {
                cin>>h;
                if(temp<h)
                    high++;
                else if(temp>h)
                    low++;
                temp=h;
            }
        }
        cout<<"Case "<<i<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
