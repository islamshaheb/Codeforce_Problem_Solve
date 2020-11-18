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
ve vec[10001];
vb vis;
main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		int n,m;
		cin>>n>>m;
		vis.assign(n,false);
		fr(0,m)
		{
			int a,b;
			cin>>a>>b;
			vis[a]=1;
			vis[b]=1;
			vec[a].pb(b);
			vec[b].pb(a);
		}
		int unvis=-3334;
		fr(1,n+1)
		{
			if(!vis[i])
			{
				unvis=i;
				break;
			}
		}
		if(unvis>0)
		{
			cout<<n-1<<e;
			fr(1,n+1)
			{
				if(unvis!=i)
					cout<<unvis<<" "<<i<<e;
			}
		}
		else
		{
			int mn=1000000;
			fr(1,n+1)
			{
				int l=vec[i].size();
				if(l<mn)mn=i;
			}

			ve x,y;
			cout<<n-1<<e;
			fr(0,vec[mn].size())
			{
				int t=vec[mn][i];
				vis.assign(n,false);
				fr1(0,vec[t].size())
				{
					vis[vec[t][j]]=1;
				}
				int index;
				fr1(1,n+1)
				{
					if(!vis[j] and j!=t)
					{
						index=j;
						break;
					}
				}
				cout<<t<<" "<<index<<e;
				//x.pb(t),y.pb(index);
			}

			vis.assign(n,false);
			fr(0,vec[mn].size())
			{
				vis[vec[mn][i]]=1;
			}
			fr(1,n+1)
			{
				if(i!=mn and !vis[i])
					cout<<mn<<" "<<i<<e;
			}


		}
	}
}

