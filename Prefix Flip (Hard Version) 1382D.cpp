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
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	ve ans;
	frr(1,n)
	{
		if(a[i]!=a[i-1])
		{
			ans.pb(i);
			//cout<<a[i]<<e;
			if(a[i]=='1')a[0]='1';
			else a[0]='0';
		}
	}
	//cout<<a[0]<<e;
	rfrr(n-1,0)
	{
		if(b[i]!=a[0])
		{
			ans.pb(i+1);
			if(a[0]=='0')a[0]='1';
			else a[0]='0';
		}
	}

	cout<<ans.size();
	frr(0,ans.size())cout<<" "<<ans[i];
	cout<<endl;


}

int main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
		solve();
}

