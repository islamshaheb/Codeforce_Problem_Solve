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

void solve()
{
	int a,b;
	cin>>a>>b;
	int mn=min(a,b);
	int ans=(a+b)/3;
	if(mn>=ans)
		cout<<ans<<e;
	else
	   cout<<mn<<e;
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

