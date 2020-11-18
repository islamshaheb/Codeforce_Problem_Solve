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
	int n,m;
	cin>>n>>m;
	int mx=-333,mn=500;
	frr(0,n)
	{
		int x;
		cin>>x;
		if(x>mx)mx=x;
		if(x<mn)mn=x;
	}
	int b[m];
	frr(0,m)
	{
		cin>>b[i];
	}
	int l=mn*2,yes=1;
	frr(0,m)
	{
		if(b[i]<=mx or b[i]<=l){yes=0;break;}
	}
	if(yes)
	{
		if(mx>l){cout<<mx<<e;return;}
		frr(0,m)
		{
			if(b[i]<=l){cout<<mx<<e;return;}

		}
		cout<<l<<e;
	}
	else cout<<-1<<e;
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	tc=1;
	while(tc--)
	{
		solve();
	}
}
