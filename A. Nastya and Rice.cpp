
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
	while(tc>0)
	{
		ll n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;

		ll ff=(c+d);
		ll ff1=(c-d);
		bool t=false;

		ll x=(a-b)*n;
		ll y=(a+b)*n;

		if( (ff1<=y and x<=ff)  )
	    cout<<"Yes\n";
	    else
		cout<<"No\n";

	tc--;
	}
}

