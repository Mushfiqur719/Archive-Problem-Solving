#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,count=0;
    cin>>n;
    string str;
    while(n--)
    {
        cin>>str;
        if(str=="Tetrahedron")
            count+=4;
        if(str=="Cube")
            count+=6;
        if(str=="Octahedron")
            count+=8;
        if(str=="Dodecahedron")
            count+=12;
        if(str=="Icosahedron")
            count+=20;
    }
    cout<<count;
    return 0;
}

