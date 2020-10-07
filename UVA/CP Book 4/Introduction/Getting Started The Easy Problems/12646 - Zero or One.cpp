#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==b)
        {
            if(b==c)
                cout<<"*"<<endl;
            else
                cout<<"C"<<endl;
        }
        else
        {
            if(b==c)
                cout<<"A"<<endl;
            else
                cout<<"B"<<endl;
        }
    }
    return 0;
}
