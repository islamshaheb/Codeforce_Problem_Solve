#include<bits/stdc++.h>
using namespace std;
#define frr(frm,fornn)for(int i=frm; i<fornn; i++)
#define rfrr(frm,fornn)for(int i=frm; i>=fornn; i--)
#define fr(iii,frm,fornn)for(int iii=frm; iii<fornn; iii++)
#define rfr(iii,frm,fornn)for(int iii=frm; iii>=fornn; iii--)
#define itfor(iii,frm)for(int iii=frm.begin(); iii!=frm.end(); iii++)
#define ll long long int
#define lll unsigned long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(seta) memset(seta,0,sizeof(seta))
#define e "\n"
#define infi 10000000000000
#define F first
#define S second
typedef vector <int> ve;
typedef vector <bool> vb;

void solve()
{
	int n,m;
	cin>>n>>m;
	int a[20000];
	clr(a);
	frr(0,n)
	{
		int x;
		cin>>x;
		a[x]++;
	}
	int ans=0,get=0;
	frr(0,m)
	{
		int x;
		cin>>x;
		if(a[x]>0 and !get)
		{
			get=1;
			ans=x;
		}
	}

	if(get)
		cout<<"YES\n"<<1<<" "<<ans<<e;
	else
	cout<<"NO"<<e;
}

int main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
		solve();
}
