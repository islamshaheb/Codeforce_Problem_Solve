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
	int ans=0,a[n],b,c,d;
	frr(0,n)
	{
		cin>>a[i];

	}
	frr(0,n)
	{

		if(i>0 and i<n-1)
		{
			if(a[i]>a[i-1] and a[i]>a[i+1])ans=1,b=i-1+1,c=i+1,d=i+1+1;
		}
	}
	if(ans)cout<<"YES\n"<<b<<" "<<c<<" "<<d<<e;
	else cout<<"NO"<<e;

}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)solve();

}
