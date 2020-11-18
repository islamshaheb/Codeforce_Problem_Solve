#include<bits/stdc++.h>
using namespace std;
#define fr(m,n) for( int i=m; i<n; i++)

main()
{
	//freopen("input.txt","r",stdin);
	int n,t=1;
	cin>>n;
	int b[n];
	fr(0,n)
		cin>>b[i];
	int mx=-3993;
	fr(0,n)
	{
		int cnt=1,j;
		for(j=i; j<n;)
		{
		if(j+1<n and b[j+1]<=b[j]*2)
			{
				cnt++;
				j++;
			}
			else
				break;
		}
		i=j;
		if(mx<cnt)
			mx=cnt;
	}
	cout<<mx<<endl;
}
