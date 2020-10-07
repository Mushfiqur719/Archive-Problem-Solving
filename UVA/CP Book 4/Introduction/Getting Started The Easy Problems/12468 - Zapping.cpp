#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	while(cin>>m>>n)
	{
		if(m==-1&&n==-1)
			break;
		int diff= abs(n-m);
		if(diff>50)
			cout<<100-diff<<endl;
		else
			cout<<diff<<endl;
	}
	return 0;
}
