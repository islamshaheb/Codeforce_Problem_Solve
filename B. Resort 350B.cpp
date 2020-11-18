#include<bits/stdc++.h>
using namespace std;
#define frr(frm,fornn)for(int i=frm; i<fornn; i++)
#define rfrr(frm,fornn)for(int i=frm; i>=fornn; i--)
#define fr(iii,frm,fornn)for(int iii=frm; iii<fornn; iii++)
#define rfr(iii,frm,fornn)for(int iii=frm; iii>=fornn; iii--)
#define ll long long int
#define lll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(seta) memset(seta,0,sizeof(seta))
#define e "\n"
#define infi 10000000000000
typedef vector <int> ve;
typedef vector <bool> vb;
ve vec[100009],ans[100009];
vb vis;
int type[100009];
int t[100009];
void dfs(int u,int x)
{
	ans[x].pb(u);
	if(vec[u].size()==0)return;
	int temp=vec[u][0];
	if(vec[u].size()==1 and t[temp]==0 and type[temp]!=-2)dfs(temp,x);
}
void solve()
{
	int n;
	cin>>n;
	int v[n+10];
	frr(1,n+1)
	{
		int x;
		cin>>x;
		v[i]=x;
		if(x)t[i]=1;
		else t[i]=0;
	}
	vis.assign(n+10,false);
	frr(1,n+1)
	{
		int x;
		cin>>x;
		if(x)
		{
			vec[i].pb(x);
			if(vis[x])type[x]=-2;
			vis[x]=1;
		}
	}
	vis.assign(n+10,false);
	frr(1,n+1)
	{
		if(v[i] and type[i]!=-2)
			dfs(i,i);
	}
	int index,mx=-333;
	frr(1,n+1)
	{
		if(v[i]==1)
		{
			int y=ans[i].size();
			if(y>mx)
			{
				mx=ans[i].size();
				index=i;
			}
		}
	}
	cout<<ans[index].size()<<e;
	rfrr(ans[index].size()-1,0)cout<<ans[index][i]<<" ";
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	tc=1;
	while(tc--)
	{
		solve();
	}
}
