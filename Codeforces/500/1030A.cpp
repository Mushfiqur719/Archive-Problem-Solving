#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n],i;
    bool check=true;
    for(i=0;i<n;i++)
        cin>>A[i];
    for(i=0;i<n;i++)
    {
        if(A[i]==1)
            check=false;
    }
    if(check)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
}
