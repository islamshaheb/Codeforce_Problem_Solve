#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
typedef vector <int> ve;
typedef vector <bool> vb;
ve vec[1001];
vb vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		int a,b;
		cin>>a>>b;
		int ans=0;
		while(a!=0)
		{
			int mx=max(a,b);
			int mn=min(a,b);
			ans+=mx/mn;
			int rem=mx%mn;
			a=rem;
			b=mn;
		}
		cout<<ans<<endl;
	}
}




