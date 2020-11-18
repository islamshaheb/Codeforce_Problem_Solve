#include<bits/stdc++.h>
using namespace std;
#define frr(frm,forn)for(int i=frm; i<forn; i++)
#define fr(iii,frm,forn)for(int iii=frm; iii<forn; iii++)
#define rfr(iii,frm,forn)for(int iii=frm; iii>=forn; iii--)
#define ll long long int
#define lll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(seta) memset(seta,0,sizeof(seta))
#define e "\n"
#define infi 10000000000000
typedef vector <int> ve;
typedef vector <bool> vb;
int x[1000001];
void solve()
{
	lll n;
	cin>>n;
	if(n==1)cout<<"NO\n";
	else
	{
		lll sqt=sqrt(n);
		if(sqt*sqt!=n){cout<<"NO\n";return;}
		if(!x[sqt])
			cout<<"YES\n";
		else cout<<"NO\n";
	}
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	x[1]=1;
	fr(i,1,1000001)
	{
		if(!x[i])
			for(int j=2;j*i<=1000001; j++)
			{
				x[i*j]++;
			}
	}
	while(tc--)
	{
		solve();
	}
}
