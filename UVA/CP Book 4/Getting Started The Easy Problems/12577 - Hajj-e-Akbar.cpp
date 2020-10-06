#include<iostream>
using namespace std;
int main()
{
    string str;
    int i=1;
    while(cin>>str)
    {
        if(str=="*")
            break;
        else if(str=="Hajj")
            cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
        else
            cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
        i++;
    }
    return 0;
}
