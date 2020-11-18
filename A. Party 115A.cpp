#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))

vector <int> vec[2010];
vector <bool> vis;
int ans,index[2010],in=1;
queue <int> q;
void bfs()
{
	while(!q.empty())
	{
		int top=q.front();
		bool ok=true;
		for(auto i=vec[top].begin(); i!=vec[top].end(); i++)
		{
			if(!vis[*i])q.push(*i),index[*i]=index[top]+1,vis[*i]=1;;
			if(ok and !vis[*i]){in++;ok=false;}
		}
		q.pop();
	}
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=-1,n,m,f=-3;
	cin>>tc;
	n=tc;
	vis.assign(n,false);

	while(tc--)
	{
		cse++;
		int x;
		cin>>x;
		if(x!=-1)
			x--,vec[x].pb(cse);
		else
		{
			q.push(cse);
			vis[cse]=1;
			index[cse]=0;
		}
	}
	bfs();

	int mx=-23;
	fr(0,n)
	{
	 //  cout<<index[i]<<endl;
		if(index[i]>mx)mx=index[i];
	}
	cout<<mx+1<<endl;

}



