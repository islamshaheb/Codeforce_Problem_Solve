#include<bits/stdc++.h>
using namespace std;
#define fr(frm,forn)for(int i=frm; i<forn; i++)
#define rfr(frm,forn)for(int ii=frm; ii>=forn; ii--)
#define fr1(fork,forl)for(int j=fork; j<forl; j++)
#define fr2(frm,forn)for(int k=frm; k<forn; k++)
#define ll long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(setaa) memset(seta,0,sizeof(seta))
#define e "\n"
typedef vector <int> ve;
typedef vector <bool> vb;

ve vec[500001];
vb vis;
ve vec1;
int total=0;

void dfs(int u)
{
	vis[u]=1;
	vec1.pb(u);
	total++;
	fr(0,vec[u].size())
	{
		int te=vec[u][i];
		if(!vis[te])dfs(te);
	}
}
main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		int node,m;
		cin>>node>>m;

		fr(0,m)
		{
			int temp,y;
			cin>>temp;
			fr1(0,temp)
			{
				int x;
				cin>>x;
				if(j>0)
				{
					vec[x].pb(y);
					vec[y].pb(x);
				}

				y=x;
			}
		}

		int a[node+1];
		vis.assign(node+1,false);
		fr(1,node+1)
		{

			total=0;
			if(!vis[i])
			dfs(i);
			fr1(0,vec1.size())
			{
				a[vec1[j]]=total;

			}
			vec1.clear();

		}
		fr(1,node+1)
		{
			cout<<a[i]<<" ";
		}
		cout<<e;
	}
}
