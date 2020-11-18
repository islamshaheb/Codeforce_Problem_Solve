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
	int a[n+10];
	frr(1,n+1)cin>>a[i];
	string s[n+12];
	fr(j,0,200){
		s[0]+='a';
	}
//	vector <string> vc(n+1);
	int test=0;
	frr(1,n+1)
	{
		int u=a[i];
		s[i]+=s[i-1];
		s[i][u] = s[i][u] == 'a' ? 'b' : 'a';
	}
	frr(0,n+1)
	{
		cout<<s[i];
		cout<<e;
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

