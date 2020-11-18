#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(ll i=m; i<n; i++)
#define fr1(k,l)for(ll j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
typedef vector <int> ve;
int main()
{
	//freopen("input.txt","r",stdin);
	//ll tc,cse=0;
//	cin>>tc;
	//while(tc--)
	{
		vector <int> vec[100001],cost[100001];
		vector <bool> vis;

		ll  node,edge,k;

		cin>>node>>edge>>k;
		fr(0,edge)
		{
			ll u,v,cst;
			cin>>u>>v>>cst;
			vec[u].pb(v);
			vec[v].pb(u);
			cost[u].pb(cst);
			cost[v].pb(cst);
		}

		ll sg[node+1],a[k+1];
		clr(sg);
		if(k==0){cout<<-1<<endl;return 0;}
		else
		{
			fr(0,k){cin>>a[i];sg[a[i]]++;}
		}

		ll pth=0;
		//cout<<vec[100].size()<<endl;
		fr(0,k)
		{
			if(vec[a[i]].size()>0)
			{
				pth=1;
				break;
			}
		}
		if(!pth)cout<<-1<<endl;
		else
		{
			ve ans;
			fr(0,k)
			{
				ll x=a[i];
				ll mn=10000000001;
				fr1(0,vec[x].size())if(cost[x][j]<mn and sg[vec[x][j]]==0)mn=cost[x][j];
				if(cost[x].size()>0 and mn!=10000000001)ans.pb(mn);
			}
			ll mn=10000000001;
			fr(0,ans.size())if(ans[i]<mn)mn=ans[i];
			if(ans.size()==0)cout<<-1<<endl;
			else cout<<mn<<endl;
		}

	}
}



