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
	int n,j,cur,bal=0;
	cin>>n;
	string a,b;
	cin>>a>>b;
	ve ans;
	j=0;
	while(j<n)
	{
		if(a[j]!=b[j])
		{
			if(j>0)ans.pb(j+1);
			ans.pb(1);
			if(j>0)ans.pb(j+1);
		}
		j++;
	}
	cout<<ans.size();

	if(ans.size()>0)frr(0,ans.size())cout<<" "<<ans[i];
	cout<<e;
	//cout<<a<<" "<<b<<e;
}

int main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
		solve();
}

