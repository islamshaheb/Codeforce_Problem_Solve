#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define rfr(m,n)for(int ii=m; ii>=n; ii--)
#define fr1(k,l)for(int j=k; j<l; j++)
#define fr2(m,n)for(int k=m; k<n; k++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
#define e "\n"
typedef vector <int> ve;
typedef vector <bool> vb;

ve vec[200001];
vb vis,vis2;
bool three,circle;

void dfs(int u,int a[],int t)
{
	//cout<<u<<" ";
    vis[u]=1;
    if(!t)
		a[u]=u;
	t++;
	if(vec[u].size()>2)
			three=1;
	fr(0,vec[u].size())
	{
		if(vec[u].size()>2)
			three=1;
		int temp=vec[u][i];
		a[temp]=a[u];
		if(a[temp]==temp and t>2)circle=1;
		//if(!vis[vec[u][i]] and t==0){t++;dfs(vec[u][i],t);}
		//else
			if(!vis[temp]){dfs(temp,a,t);}
	}
}
main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		int node,edge;
		cin>>node>>edge;
		fr(0,edge)
		{
			int x,y;
			cin>>x>>y;
			vec[x].pb(y);
			vec[y].pb(x);
		}
		vis.assign(node+1,false);
		vis2.assign(node+1,false);
		int times=0,parent[node+2];
		fr(1,node+1)
		{
			three=0,circle=0;
			if(!vis[i])dfs(i,parent,0);
			//cout<<e;
			if(circle and !three)times++;
		}
		cout<<times<<e;
	}
}

