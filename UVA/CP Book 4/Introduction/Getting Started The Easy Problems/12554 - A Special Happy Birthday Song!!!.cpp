#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    char c=getchar();
    string people[n];
    string song[]={"Happy","birthday","to","you","Rujia"};
    for(i=0;i<n;i++)
        cin>>people[i];
    int count=0,times,fourth=0;
    times=n/16+1;
    for(i=0;count<times*16&&i<=n;i++)
    {
        if(i==n)
            i=0;
        if(count%4==0)
        {
            cout<<people[i]<<": "<<song[0]<<endl;
        }
        if(count%4==1)
        {
            cout<<people[i]<<": "<<song[1]<<endl;
        }
        if(count%4==2)
        {
            cout<<people[i]<<": "<<song[2]<<endl;
        }
        if(count%4==3)
        {
            fourth++;
            if(fourth%4==3)
            {
                cout<<people[i]<<": "<<song[4]<<endl;
            }
            else
                cout<<people[i]<<": "<<song[3]<<endl;

        }
        count++;

    }
    return 0;
}
