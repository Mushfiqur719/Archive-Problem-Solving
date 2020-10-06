#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string str;
    int cases=1;
    while(cin>>str)
    {
        int n,i,j;
        cin>>n;
        cout<<"Case "<<cases++<<":"<<endl;
        for(int k=1;k<=n;k++)
        {
            cin>>i>>j;
            if(i>j)
                swap(i,j);
            bool check=true;
            for(int m=i;m<=j-1;m++)
            {
                if(str[m]!=str[m+1])
                {
                    check=false;
                    break;
                }
            }
            if(check)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
