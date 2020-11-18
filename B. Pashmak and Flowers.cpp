#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define fr2(p,m)for(int i=p; i>0; i--)
#define ll long long int

main()
{
//	while(1)
	{
	//freopen("input.txt","r",stdin);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	ll n;
	cin>>n;
	ll a[n];
	bool same=true;
	fr(0,n)
	{
		cin>>a[i];
		if(a[0]!=a[i])
			same=false;
	}
	sort(a,a+n);
	ll mx=a[n-1]-a[0],afirst=1,alast=1;
	fr(1,n)
	{
		if(a[0]==a[i]) afirst++;
		else break;
	}
	for(int i=n-2; i>0; i--)
	{
		if(a[n-1]==a[i]) alast++;
		else break;
	}
	//afirst=2000000,alast=1000000;
	long long times=(long long)afirst*alast;
	if(!same)
		cout<<mx<<" "<<times<<endl;
	else
	{
	//
	n--;
		long long int ans=0;
//		fr2(n-1,1)
//		{
//			ans+=i;
//		}
		ans=(long long int)(n*(n+1))/2;
		cout<<0<<" "<<ans<<endl;
	}
		//cout<<0<<" "<<1<<endl;
	}
}


