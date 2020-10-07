#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string str;
    while(n--)
    {
        cin>>str;
        if(str.size()==5)
            cout<<3<<endl;
        else if(str.at(0)=='o')
        {
            if(str.at(1)=='n'||str.at(2)=='e')
            cout<<1<<endl;
            else if(str.at(1)=='w'||str.at(2)=='o')
            cout<<2<<endl;
        }
        else if(str.at(0)=='t')
        {
            if(str.at(1)=='w'||str.at(2)=='o')
            cout<<2<<endl;
            else if(str.at(1)=='n'||str.at(2)=='e')
            cout<<1<<endl;
        }
        else
        {
            if(str.at(1)=='n')
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
    }
    return 0;
}
