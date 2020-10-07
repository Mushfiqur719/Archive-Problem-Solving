#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int dnum,i,count=0,temp=0;
        for(i=0;i<5;i++)
        {
            if(temp==0)
            {
                cin>>dnum;
                temp=dnum;
            }
            else
            {
                cin>>dnum;
                if(temp+1==dnum)
                    count++;
                temp=dnum;
            }
        }
        cout<<((count<4)?"N":"Y")<<endl;
    }
    return 0;
}
