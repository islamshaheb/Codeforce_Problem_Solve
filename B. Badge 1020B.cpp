#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))

vector <int> vec[1001];
vector <bool> vis;
int ans;
 void dfs(int u)
{
	int x;
	vis[u]=1;
	for(int i=0; i<vec[u].size();i++)
	{
		x=vec[u][i];
		if(!vis[x])
			dfs(x);
		else if(ans==-1)ans=x;
	}
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	{
		int n;
		cin>>n;
		fr(1,n+1)
		{
			vec[i].clear();
			int x;
			cin>>x;
			vec[i].pb(x);
		}

		fr(1,n)
		{
			vis.assign(n+1,false);
			ans=-1;
			dfs(i);
			cout<<ans<<" ";
		}
		vis.assign(n+1,false);
			ans=-1;
			dfs(n);
			cout<<ans<<"\n";
	}
}



