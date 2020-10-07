#include<iostream>
using namespace std;
int main()
{
    string str;
    while(!getline(cin,str).eof()){
        cout<<str<<endl;
    }
    return 0;
}
