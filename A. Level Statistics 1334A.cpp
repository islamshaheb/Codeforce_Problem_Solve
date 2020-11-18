#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)

main()
{
	//freopen("input.txt","r",stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int tc;
	cin>>tc;
	while(tc>0)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		fr(0,n)cin>>a[i]>>b[i];

		bool get=false;

		if(a[0]<b[0])
			{
				cout<<"NO\n";
				get=true;
			}
		if(!get)
		fr(0,n-1)
		{
			if( a[i]>a[i+1] or b[i]>b[i+1] or (a[i]==a[i+1] and b[i]!=b[i+1]) or (b[i+1]-b[i]>a[i+1]-a[i]))
			{
				cout<<"NO\n";
				get=true;
				break;
			}

		}

		if(!get)
			cout<<"YES\n";

		tc--;
	}
}
