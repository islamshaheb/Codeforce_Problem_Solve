#include<bits/stdc++.h>
using namespace std;
#define frr(frm,fornn)for(ll i=frm; i<fornn; i++)
#define rfrr(frm,fornn)for(ll i=frm; i>=fornn; i--)
#define fr(iii,frm,fornn)for(ll iii=frm; iii<fornn; iii++)
#define rfr(iii,frm,fornn)for(ll iii=frm; iii>=fornn; iii--)
#define itfor(iii,frm)for(ll iii=frm.begin(); iii!=frm.end(); iii++)
#define ll long long int
#define lll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(seta) memset(seta,0,sizeof(seta))
#define e "\n"
#define infi 10000000000000
#define F first
#define S second
typedef vector <ll> ve;
typedef vector <bool> vb;

void solve()
{
	ll n,m,x;
	ll total_cost=0;
	cin>>n>>m;
	ve main,sub;
	ll cost_a,range,cost_b;
	cin>>cost_a>>range>>cost_b;
	main.pb(0);
	frr(0,n){ll x;cin>>x;main.pb(x);}
	main.pb(0);
	sub.pb(0);
	frr(0,m){ll x;cin>>x;sub.pb(x);}
	sub.pb(0);
   ll cur_pointer=0;
	for(ll j=0; j<m+2; )
	{
		ll update1=0,update2=0;
		ve ans;
		if(cur_pointer>=n+2){j++;continue;}

		fr(i,cur_pointer,n+2)
		{
			if(main[i]==sub[j+1])cur_pointer=i,update2=1;
			if(update2)break;
			if(update1)ans.pb(main[i]);
			if(main[i]==sub[j])update1=1;
		}
		ll times=ans.size();
		if(times==0){j++;continue;}
		if(!update1 or !update2){cout<<-1<<e;return;}
		sort(ans.begin(),ans.end());
		ll mx=max(sub[j],sub[j+1]);
		if(ans[times-1]>mx and times<range){cout<<-1<<e;return;}
		if(cost_a<=range*cost_b)
		{
			total_cost+=(ll)(times%range)*cost_b+(times/range)*cost_a;
		}
		else
		{
			if(ans[times-1]>=mx)total_cost+=(ll)cost_a+(times-range)*cost_b;
			else total_cost+=(ll)cost_b*times;
		}
		j++;
	}
	cout<<total_cost<<e;
}

main()
{
	//freopen("input.txt","r",stdin);
	ll tc,cse=0;
	//cin>>tc;
	//while(tc--)
		solve();
}
