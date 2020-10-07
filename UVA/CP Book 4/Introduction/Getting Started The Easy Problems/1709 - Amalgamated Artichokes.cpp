#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int p,a,b,c,d,n;
    while(cin>>p>>a>>b>>c>>d>>n)
    {
        double price,Max=0,maxdiff=0;
        for(int i=1; i<=n; i++)
        {
            price= p*(sin(a*i+b)+cos(c*i+d)+2);
            maxdiff=max(Max-price,maxdiff);
            Max=max(price,Max);
        }
        cout<<fixed<<setprecision(6)<<maxdiff<<endl;
    }
    return 0;
}
