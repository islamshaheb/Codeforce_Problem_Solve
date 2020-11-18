#include<bits/stdc++.h>
using namespace std;
#define frr(frm,fornn)for(int i=frm; i<fornn; i++)
#define rfrr(frm,fornn)for(int i=frm; i>=fornn; i--)
#define fr(iii,frm,fornn)for(int iii=frm; iii<fornn; iii++)
#define rfr(iii,frm,fornn)for(int iii=frm; iii>=fornn; iii--)
#define itfr(iii,frm)for(auto iii=frm.begin(); iii!=frm.end(); iii++)
#define ll long long int
#define lll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(seta) memset(seta,0,sizeof(seta))
#define clr2(seta,xxxx,yyyy) memset(seta,0,sizeof(int)*xxxx*yyyy)
#define seet2(seta,xxxx,yyyy) memset(seta,-1,sizeof(int)*xxxx*yyyy)
#define E "\n"
#define infi 10000000000000
#define F first
#define S second
typedef vector <int> ve;
typedef vector <bool> vb;

void solve()
{
	int n,m,ans=0;
	cin>>n>>m;
	//char a[n][m];
	fr(i,0,n)
	{
		fr(j,0,m)
		{
			char x;
			cin>>x;
			int y=(int)x;
			if(j==m-1 and y==82)ans++;
			if(i==n-1 and y==68)ans++;
		}
	}
	cout<<ans<<E;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
		solve();
}

