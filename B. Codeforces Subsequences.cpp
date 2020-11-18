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
	string s="codeforces";
	ll n;
	cin>>n;
	if(n==1){cout<<s<<e;return;}
	ll temp;
	frr(2,45)
	{
		ll x=pow(i,10);
		if(x>=n){temp=i;break;}
	}

	ll ager=temp-1,past,last;
	int t=1;
	rfrr(10,1)
	{
		ll o=pow(ager,10-t);
		ll ok=pow(temp,t);
		ll mul=o*ok;
		if(mul>=n)
		{
			past=10-t;
			last=t;
			break;
		}
		t++;
	}
	fr(i,0,10)
	{
		if(i<past)
		{
			fr(j,0,ager)
			{
				cout<<s[i];
			}
		}
		else
		{
			fr(j,0,temp)
			{
				cout<<s[i];
			}
		}

	}
	cout<<e;

}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	tc=1;
	//cin>>tc;
	while(tc--)
	{
		solve();
	}
}
