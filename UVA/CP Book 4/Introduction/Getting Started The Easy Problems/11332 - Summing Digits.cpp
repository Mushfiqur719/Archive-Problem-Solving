#include<iostream>
using namespace std;
int sumDigits(long long num)
{
    int sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int checkDigit(long long n)
{
    while(n>9)
        n=sumDigits(n);
    return n;
}
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int sum;
        sum = checkDigit(n);
        cout<<sum<<endl;
    }
}
