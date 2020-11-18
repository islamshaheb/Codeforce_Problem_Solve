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
	int x,y,z;
	cin>>x>>y>>z;
	if((x==y and x>=z) or (x==z and x>=y ) or (y==z and z>=x))
		{
			if(x==y)cout<<"YES\n"<<z<<" "<<z<<" "<<x<<e;
			else if(x==z)cout<<"YES\n"<<y<<" "<<y<<" "<<z<<e;
			else if(z==y)cout<<"YES\n"<<x<<" "<<x<<" "<<z<<e;
		}
	else cout<<"NO"<<e;
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
		solve();
}
