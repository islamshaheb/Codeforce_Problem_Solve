
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
	int n;
	cin>>n;
	int a[n+10];
	frr(0,n)cin>>a[i];
	int b[n+10],x=0;
	frr(0,n)
	{
		if(!x)
		{
			if(a[i]<0)a[i]*=-1;
			b[i]=-1*a[i];
			x=1;
		}
		else
		{
			x=0;
			if(a[i]<0)a[i]*=-1;
			b[i]=a[i];
		}
	}
	frr(0,n)cout<<b[i]<<" ";
	cout<<e;

}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		solve();
	}
}
