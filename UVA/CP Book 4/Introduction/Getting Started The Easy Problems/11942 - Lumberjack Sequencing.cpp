#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<"Lumberjacks:"<<endl;
    while(n--)
    {
        int arr[10],i;
        for(i=0;i<10;i++)
            cin>>arr[i];
        bool flag=true;
        if(arr[0]>arr[1])
        {
            for(i=0;i<9;i++)
            {
                if(arr[i]<arr[i+1])
                    {
                        flag=false;
                        break;
                    }
            }
        }
        else if(arr[0]<arr[1])
        {
            for(i=0;i<9;i++)
            {
                if(arr[i]>arr[i+1])
                    {
                        flag=false;
                        break;
                    }
            }
        }
        if(flag==true)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
    }
    return 0;
}
