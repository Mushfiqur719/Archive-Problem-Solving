#include<iostream>
using namespace std;

int main()
{
    int p,h,o;
    while(cin>>p>>h>>o)
    {
        if(h>o-p)
            cout<<"Hunters win!"<<endl;
        else
            cout<<"Props win!"<<endl;
    }
    return 0;
}
