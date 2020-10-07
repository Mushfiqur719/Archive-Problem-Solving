#include<iostream>
using namespace std;

int main()
{
    int T,l,w,h,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>l>>w>>h;
        if(l>20||w>20||h>20)
            cout<<"Case "<<i<<": bad"<<endl;
        else
            cout<<"Case "<<i<<": good"<<endl;
    }
    return 0;
}
