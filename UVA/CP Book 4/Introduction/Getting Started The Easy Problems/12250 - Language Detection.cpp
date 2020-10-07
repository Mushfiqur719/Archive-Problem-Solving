#include<iostream>
using namespace std;
int main()
{
    string str;
    int i=1;
    while(cin>>str)
    {
        if(str=="#")
            break;
        else if(str=="HELLO")
            cout<<"Case "<<i<<": ENGLISH"<<endl;
        else if(str=="HOLA")
            cout<<"Case "<<i<<": SPANISH"<<endl;
        else if(str=="HALLO")
            cout<<"Case "<<i<<": GERMAN"<<endl;
        else if(str=="BONJOUR")
            cout<<"Case "<<i<<": FRENCH"<<endl;
        else if(str=="CIAO")
            cout<<"Case "<<i<<": ITALIAN"<<endl;
        else if(str=="ZDRAVSTVUJTE")
            cout<<"Case "<<i<<": RUSSIAN"<<endl;
        else
            cout<<"Case "<<i<<": UNKNOWN"<<endl;
        i++;
    }
    return 0;
}

