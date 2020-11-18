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
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	int test=0;
	int a[n+100][m+100];
	clr2(a,n+100,m+100);
	cout<<x<<" "<<y<<E;
	fr(i,0,n)
	{
		fr(j,0,m)
		{
			a[i][j]==0;
		}
	}
	a[x][y]=1;
	frr(2,m+1)
	{
		if(a[x][i]==0)
		{
			cout<<x<<" "<<i<<E;
			a[x][i]==1;
		}
	}
	cout<<x<<" "<<1<<E;
	a[x][0]=1;
	
	fr(i,1,n+1)
	{
		if(i==x)continue;
		if(!test)
		{
			fr(j,1,m+1)
			{
				if(a[i][j]==0)cout<<i<<" "<<j<<E;
			}
			test=1;
		}
		else
		{
			rfr(j,m,1)
			{
				if(a[i][j]==0)cout<<i<<" "<<j<<E;
			}
			test=0;
		}
	}
	
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
		solve();
}

