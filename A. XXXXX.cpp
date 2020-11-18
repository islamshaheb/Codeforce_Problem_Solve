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
typedef vector <ll> ve;
typedef vector <bool> vb;

void solve()
{
	ve vis,nvis,a;
	ll n,x,sum=0,ans=0;
	cin>>n>>x;
	frr(0,n)
	{
		ll t;
		cin>>t;
		if(t%x==0)vis.pb(t);
		else ans++;
		nvis.pb(t);
		sum+=t;

	}
//cout<<sum<<e;
	ll sz=nvis.size();
	ll sz1=vis.size();
	if(ans==0){cout<<"-1\n";return;}
	if(sum%x!=0){cout<<n<<e;return;}
	int ok=0,ok1=0;
	frr(0,n)
	{ok++;

		if(nvis[i]%x!=0)
		{
			break;
		}
	}
	rfrr(n-1,0)
	{
ok1++;
		if(nvis[i]%x!=0)break;
	}
	ok=min(ok,ok1);
	cout<<n-ok<<e;
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		solve();
	}
}

