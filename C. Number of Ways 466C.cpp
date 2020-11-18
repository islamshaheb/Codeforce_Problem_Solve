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

void solve()
{
	int n;
	ll sum=0;
	cin>>n;
	int a[n];
	frr(0,n)cin>>a[i],sum+=a[i];
	if(sum%3)cout<<0<<e;
	else
	{
		int answer=0;
		ll middle=sum/3;
		ll cur_sum=0;
		int times[n];
		frr(0,n)
		{
		   cur_sum+=a[i];
			if(cur_sum==middle)times[i]=1;
			else times[i]=0;
		}
		frr(1,n)times[i]+=times[i-1];
		ll ans=0;
		cur_sum=0;
		rfrr(n-1,2)
		{
			cur_sum+=a[i];
			if(cur_sum==middle)ans+=times[i-2];
		}
		cout<<ans<<e;
	}
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
//	while(tc--)
	{
		solve();
	}
}
