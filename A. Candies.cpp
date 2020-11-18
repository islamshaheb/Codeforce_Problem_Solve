
#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int

main()
{
	//freopen("input.txt","r",stdin);
	int tc;
	cin>>tc;
	ll a[100],x=1;
	fr(1,32)x=x*2,a[i]=x*2-1;
	//fr(1,32)cout<<a[i]<<endl;
	while(tc>0)
	{
	int n;
	cin>>n;
	fr(1,32)
	{
		if(n%a[i]==0)
		{
			cout<<n/a[i]<<endl;
			break;
		}
	}

	tc--;
	}
}


