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
	int age_osoman=0,soman1=0,osoman1=0,soman2=0,osoman2=0,all_ok=1,test=0;
	int n;
	cin>>n;
	frr(0,n)
	{
		int x;
		cin>>x;
		if(i+1==x)soman1=1,test++;
		if(i+1!=x)all_ok=0;
		if(i+1!=x)age_osoman=1,test++;
		if(soman1 and i+1!=x)osoman1=1,test++;
		if(soman1 and osoman1 and i+1==x)soman2=1,test++;
		if(soman1 and osoman1 and soman2 and i+1==x)soman2=1,test++;

	}
	if(all_ok){cout<<0<<e;return;}
	if(test>3){cout<<2<<e;return;}
	if(soman1 and osoman1 and soman2 and osoman2)cout<<2<<e;
	else cout<<1<<e;

}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)solve();

}

