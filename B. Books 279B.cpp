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
	int n,money;
	cin>>n>>money;
	int a[n];
	frr(0,n)cin>>a[i];
	ll sum=0,mx=-3343434,j=0,last;
	fr(i,0,n)
	{
		last=i;
		int baki=n-(i+1);
		sum+=a[i];
		if(sum>money)
		{
			if(mx<i-j)mx=i-j;
			while(sum>money){sum-=a[j];j++;}
		}
	}
     last++;
	if(mx<last-j)mx=last-j;
	cout<<mx<<e;
}

main()
{
	//freopen("input.txt","r",stdin);
	//int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		solve();
	}
}
