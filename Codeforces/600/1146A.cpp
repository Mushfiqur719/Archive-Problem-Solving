#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i,a=0,notA=0;
    for(i=0;i<str.size();i++)
    {
        if(str[i]=='a')
            a++;
        else
            notA++;
    }
    if(a>notA)
        cout<<str.size();
    else
        cout<<a+a-1;
}
