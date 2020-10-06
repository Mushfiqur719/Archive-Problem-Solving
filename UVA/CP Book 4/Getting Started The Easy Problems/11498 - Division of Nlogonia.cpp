#include<iostream>
using namespace std;
int main()
{
    int t;
    while(cin>>t)
    {
        if(t==0)
            break;
        int n,m;
        cin>>n>>m;
        while(t--)
        {
            int x,y;
            cin>>x>>y;
            x-=n;
            y-=m;
            if(x==0||y==0)
                cout<<"divisa"<<endl;
            else if(x>0)
            {
                if(y>0)
                    cout<<"NE"<<endl;
                else
                    cout<<"SE"<<endl;
            }
            else
            {
                if(y>0)
                    cout<<"NO"<<endl;
                else
                    cout<<"SO"<<endl;
            }
        }
    }
    return 0;
}
