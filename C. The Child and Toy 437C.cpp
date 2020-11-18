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
ve vec[2010];
vb vis;
ll mat[2010][2010];
ll ans=0;
void fun(int u)
{
	fr(0,vec[u].size())
	{
		int x=vec[u][i];
		if(mat[u][x])
		{
			ans+=mat[u][x];
			mat[u][x]=0;
			mat[x][u]=0;
		}

	}
}

main()
{
	//freopen("input.txt","r",stdin);
	ll tc,cse=0;
	ll node,edge;
	cin>>node>>edge;
	ll cost[node+100];
	ll a[edge+1],b[edge+1];
	fr(1,node+1)cin>>cost[i];
	fr(1,edge+1)
	{
		cin>>a[i]>>b[i];
		ll mn=min(cost[a[i]],cost[b[i]]);
		mat[a[i]][b[i]]=mn;
		mat[b[i]][a[i]]=mn;
		vec[a[i]].pb(b[i]);
		vec[b[i]].pb(a[i]);
	}


	fr(1,node+1)
	{
		if(vec[i].size())
			fun(i);
	}
	cout<<ans<<endl;
}


