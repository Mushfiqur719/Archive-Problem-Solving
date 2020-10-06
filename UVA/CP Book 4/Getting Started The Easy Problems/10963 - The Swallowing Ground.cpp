#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,diff,y1,y2,i;
        cin>>n;
        bool flag=true;
        cin>>y1>>y2;
        diff=abs(y1-y2);
        for(i=1;i<n;i++)
        {
            cin>>y1>>y2;
            if(diff!=abs(y1-y2))
            {
                flag=false;
            }
        }
        if(flag==true)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        if(t)
            cout<<endl;
    }
}
