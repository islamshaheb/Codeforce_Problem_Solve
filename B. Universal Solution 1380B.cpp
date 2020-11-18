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
	string s;
	cin>>s;
	int n=s.length();
	int a[10];
	//p r s
	a[0]=0,a[1]=0,a[2]=0;
	frr(0,n)
	{
		if(s[i]=='P')a[0]++;
		if(s[i]=='R')a[1]++;
		if(s[i]=='S')a[2]++;
	}
	int index,mx=-43453;
	frr(0,3)
	{
		if(a[i]>mx){mx=a[i],index=i;}
	}
	char ans;
	if(index==0)ans='S';
	if(index==1)ans='P';
	if(index==2)ans='R';
	frr(0,n)cout<<ans;
	cout<<e;
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)solve();
}
