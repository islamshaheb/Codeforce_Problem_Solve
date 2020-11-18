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
	int n,zero=0,one=0,yes=0;
	int one_pos,zero_pos;
	cin>>n;
	char a[n];
	frr(0,n)
	{
		char x;
		cin>>x;a[i]=x;
		if(x=='0' and i>0 and a[i-1]=='1')yes=1;

	}
	if(!yes){frr(0,n)cout<<a[i];cout<<e;return;}
	frr(0,n)
	{
		if(a[i]=='1' and !one)
		{
			one=1;
			one_pos=i;
		}
		if(a[i]=='0')
		{
			zero=1;
			zero_pos=i;
		}
	}
	frr(0,n)
	{
		if(i>=one_pos and i<=zero_pos-1)
		{

		}
		else cout<<a[i];
	}
	cout<<e;
}

main()
{
//	freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		solve();
	}
}

