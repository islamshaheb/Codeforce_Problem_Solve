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
	frr(1,n+1){ll x;cin>>x;main.pb(x);}
	main.pb(0);

	sub.pb(0);
	frr(1,m+1){ll x;cin>>x;sub.pb(x);}
	sub.pb(0);
//	frr(0,n+2)cout<<main[i]<<" ";
//	cout<<e;
//	frr(0,m+2)cout<<sub[i]<<" ";
//   cout<<e;
   ll cur_pointer=0;
	for(ll j=0; j<m+2; )
	{
		ll update1=0,update2=0;
		ve ans;
		fr(i,cur_pointer,n+2)
		{//cout<<sub[j+1]<<" "<<main[i]<<"_\n";
//			/cout<<i<<e;
			if(main[i]==sub[j+1])cur_pointer=i,update2=1;
			if(update2)break;
			if(update1)ans.pb(main[i]);
			//if(update1)cout<<main[i]<<"  "<<i<<e;ans.pb(main[i]);
			if(main[i]==sub[j])update1=1;
		}
		//cout<<"ok"<<e;
		ll times=ans.size();
		if(times==0){j++;continue;}
		if(!update1 or !update2){cout<<-1<<e;return;}
		sort(ans.begin(),ans.end());
		ll mx=max(sub[j],sub[j+1]);
		if(ans[times-1]>mx and times<range){cout<<-1<<e;return;}
		if(ans[times-1]>mx)
		{
			ll bersak=times%range;
			ll cost_for_firebal=cost_a*(times/range)+cost_b*bersak;
			total_cost+=cost_for_firebal;
			//cout<<"_____________"<<cost_for_firebal<<e;
		}
		else
		{
			ll kotobar=times/range;
			ll rem=times%range;
			ll cost_for_b=times*cost_b;
			ll cost_for_a=cost_b*rem+kotobar*cost_a;
			//cout<<cost_for_a<<"++++++++"<<cost_for_b<<e;
			ll mn=min(cost_for_a,cost_for_b);
			//cout<<mn<<"____________\n";
			total_cost+=mn;
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
