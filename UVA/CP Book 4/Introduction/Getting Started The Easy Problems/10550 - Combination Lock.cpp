#include<iostream>
using namespace std;
int main()
{
    int in,fir,sec,thr;
    while(cin>>in>>fir>>sec>>thr)
    {
        if(in==0&&fir==0&&sec==0&&thr==0)
            break;
        int sum=0;
        sum+=(in-fir)>0?(in-fir):(in-fir+40);
        sum+=(sec-fir)>0?(sec-fir):(sec-fir+40);
        sum+=(sec-thr)>0?(sec-thr):(sec-thr+40);
        cout<<(sum*9)+(360*3)<<endl;
    }
    return 0;
}
