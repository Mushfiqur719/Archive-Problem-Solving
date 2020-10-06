#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

int getStringValue(string str)
{
    int sum=0,i;
    for(i=0;i<str.size();i++)
        {
            if(str[i]>='a'&&str[i]<='z')
                sum+=str[i]-96;
            if(str[i]>='A'&&str[i]<='Z')
                sum+=str[i]-64;
        }
    return sum;
}
int getSumOfDigit(int n)
{
    int  sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    string str1,str2;
    while(getline(cin,str1))
    {
        getline(cin,str2);
        int sum1,sum2,i,sumDigit1,sumDigit2;
        sum1=getStringValue(str1);
        sum2=getStringValue(str2);

        sumDigit1=getSumOfDigit(sum1);
        if(sumDigit1>9)
        {
            sumDigit1=getSumOfDigit(sumDigit1);
            if(sumDigit1>9)
                sumDigit1=getSumOfDigit(sumDigit1);
        }

        sumDigit2=getSumOfDigit(sum2);
        if(sumDigit2>9)
        {
            sumDigit2=getSumOfDigit(sumDigit2);
            if(sumDigit2>9)
                sumDigit2=getSumOfDigit(sumDigit2);
        }
        double ans;
        if(sumDigit1>sumDigit2)
            ans=((double)sumDigit2/(double)sumDigit1)*100;
        else if(sumDigit2>sumDigit1)
            ans=((double)sumDigit1/(double)sumDigit2)*100;
        else
            ans=((double)sumDigit2/(double)sumDigit1)*100;
        cout<<setprecision(2)<<fixed<<ans<<" %"<<endl;
    }
    return 0;
}
