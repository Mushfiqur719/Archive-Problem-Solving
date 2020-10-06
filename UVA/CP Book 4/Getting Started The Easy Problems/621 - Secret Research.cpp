#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    while(n--)
    {
        cin>>str;
        char ch_f=str.front();
        char ch_b=str.back();
        if(str=="1"||str=="4"||str=="78")
            cout<<"+"<<endl;
        else if(ch_b=='5')
            cout<<"-"<<endl;
        else if(ch_f=='9'&&ch_b=='4')
            cout<<"*"<<endl;
        else
            cout<<"?"<<endl;

        // if(ch_f=='1'&&str.at(1)=='9'&&str.at(2)=='0')

    }
    return 0;
}
