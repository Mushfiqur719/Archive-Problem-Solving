#include<iostream>
using namespace std;
int main()
{
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        int O=1,i,sum=0;
        for(i=0; i<str.size(); i++)
        {
            if(str[i]=='O')
            {
                sum+=O;
                O++;
            }
            else
                O=1;
        }
        cout<<sum<<endl;
    }
    return 0;

}
