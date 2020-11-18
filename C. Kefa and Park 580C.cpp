#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))

vector <int> vec[100001+50];
vector <bool> vis;
int cat[100001+50],ans=0,times=0,m;

void dfs(int u)
{
	vis[u]=1;
	if(cat[u] )times++;
	else times=0;
	bool in=1;int temp=times;
	if(vec[u].size()==1 and times<=m and u!=1)ans++;
	for(int i=0; i<vec[u].size(); i++)
	{
		in=0;
		times=temp;
		int x=vec[u][i];
		if(!vis[x] and times<=m)
			dfs(x);
	}
}

main()
{

	//while(1)
	{
	int tc,cse=0;
	int n;
	cin>>n>>m;
	fr(1,n+1)
	{
		cin>>cat[i];
	}
	fr(1,n)
	{
		int a,b;
		cin>>a>>b;
		vec[a].pb(b);
		vec[b].pb(a);
	}

	vis.assign(n+1,false);
	dfs(1);
	cout<<ans<<endl;
	}
}
