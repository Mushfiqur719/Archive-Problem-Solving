#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,r,Case=1;
    while(cin>>r>>n){
        int i;
        if(r==0)
            break;
        if((26*n+n)<r)
            cout<<"Case "<<Case<<": impossible"<<endl;
        else
        {
            i=r/n;
            if(r%n==0)
                cout<<"Case "<<Case<<": "<<i-1<<endl;
            else
                cout<<"Case "<<Case<<": "<<i<<endl;
        }
         Case++;
    }
}
