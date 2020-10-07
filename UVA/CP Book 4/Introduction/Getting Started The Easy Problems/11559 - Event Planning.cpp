#include<iostream>
using namespace std;
int main()
{
    int students,budget,hotels,weeks;
    while(cin>>students>>budget>>hotels>>weeks)
    {
        int seat,price,minCost=budget+1;
        while(hotels--)
        {
            cin>>price;
            for(int i=0;i<weeks;i++)
            {
                cin>>seat;
                if(seat>=students && students*price <= minCost)
                    minCost = students*price;
            }
        }
        if(minCost<budget)
            cout<<minExp<<endl;
        else
            cout<<"stay home"<<endl;
    }
    return 0;
}
