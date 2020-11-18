

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
		int n;
		cin>>n;
		n=n/2;
		if(n%2==1)cout<<"NO"<<endl;
		else
		{
			cout<<"YES"<<endl;
			ll ev=0,s=0;
			fr(0,n)ev+=2,s+=ev,cout<<ev<<" ";

			ll e=-1,sum=0;
			fr(0,n-1)e+=2,sum+=e,cout<<e<<" ";
			cout<<s-sum<<endl;
		}
	tc--;
	}
}

