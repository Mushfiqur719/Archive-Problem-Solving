#include<iostream>
using namespace std;

int main()
{
    string tabc,hanc;
    int i=1,count=0;
    cin>>tabc;
    while(i<=5)
    {
        cin>>hanc;
        if(tabc[0]==hanc[0] || tabc[1]==hanc[1])
            count++;
        i++;
    }
    if(count>0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
