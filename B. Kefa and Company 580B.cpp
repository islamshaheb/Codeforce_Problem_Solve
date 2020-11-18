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
#define F first
#define S second
typedef vector <int> ve;
typedef vector <bool> vb;

void solve()
{
	int n,k;
	cin>>n>>k;
	pair<int,int>a[n];
	frr(0,n)
	{
		cin>>a[i].F>>a[i].S;
	}
	sort(a,a+n);
	ll mx=-323234234,j=0,cur_factor=0;
	fr(i,0,n)
	{
		while(abs(a[i].F-a[j].F)<k and j<n)cur_factor+=a[j].S,++j;//cout<<i<<" "<<j<<" "<<cur_factor<<e;
		if(cur_factor>mx)mx=cur_factor;
		cur_factor-=a[i].S;
	}
	cout<<mx<<e;
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
//	while(tc--)
	{
		solve();
	}
}
