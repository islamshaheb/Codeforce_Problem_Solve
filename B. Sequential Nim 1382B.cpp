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
	int pile,x,one=0;
	cin>>pile;
	int a[pile];
	frr(0,pile){cin>>a[i];if(a[i]==1)one++;}
	int n=pile;
	if(!one or one==pile)
	{
		if(one==pile)
		{
			if(!(one%2))cout<<"Second"<<e;
			else cout<<"First"<<e;
		}
		else cout<<"First"<<e;
	}
	else
	{
		int first=1,sec=0;
		frr(0,pile)
		{
			if(a[i]!=1)break;
			first=1-first;
			sec=1-sec;
		}
		if(first)cout<<"First"<<e;
		else cout<<"Second"<<e;
	}
}

int main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
		solve();
}
