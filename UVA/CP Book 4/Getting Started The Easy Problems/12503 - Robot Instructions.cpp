#include<iostream>
#include<sstream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,temp=0,count=0;
        cin>>n;
        char ch=getchar();
        string str[n],x;
        for(i=0;i<n;i++)
        {
            getline(cin,x);
            if(x=="LEFT"||x=="RIGHT")
                str[i]=x;
            else
            {
                x.erase(0,8);
                stringstream num(x);
                num>>temp;
                str[i]=str[temp-1];
            }
        }
        for(i=0;i<n;i++)
        {
            if(str[i]=="LEFT")
                count--;
            else
                count++;
        }
            cout<<count<<endl;
    }
    return 0;
}
