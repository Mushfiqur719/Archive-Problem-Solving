#include<iostream>
using namespace std;

int main()
{
    int i,n,anton=0,danik=0;
    cin>>n;
    char arr[n];
    cin>>arr;

    for(i=0;i<n;i++)
    {
        if(arr[i]=='A')
            anton++;
        if(arr[i]=='D')
            danik++;
    }
    if(anton>danik)
        cout<<"Anton";
    else if(danik>anton)
        cout<<"Danik";
    else
        cout<<"Friendship";

    return 0;
}
