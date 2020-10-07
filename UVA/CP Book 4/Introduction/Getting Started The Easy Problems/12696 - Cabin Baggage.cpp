#include<iostream>
using namespace std;
int main()
{
    double length,width,depth,weight,t,sum=0;
    cin>>t;
    while(t--)
    {
        int is=0;
        cin>>length>>width>>depth>>weight;
        if(length<=56 && width<=45 && depth<=25 && weight<=7)
            is=1;
        else if(length+width+depth<=125 && weight<=7)
            is=1;
        sum+=is;
        cout<<is<<endl;
    }
    cout<<sum<<endl;
    return 0;
}
