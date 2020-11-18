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
	int n,x;
	cin>>n>>x;
	int a[n];
	frr(0,n)cin>>a[i];
	sort(a,a+n,greater <int>());
	int number_of_team=0,member=1,temp=1;
	frr(0,n)
	{
		temp=a[i]*member;
		if(temp>=x)
		{
			number_of_team++;
			temp=1;
			member=1;
		}
		else member++;
	}
	cout<<number_of_team<<e;
}
main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)solve();

}

