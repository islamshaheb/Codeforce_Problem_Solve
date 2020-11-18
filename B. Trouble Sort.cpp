#include<bits/stdc++.h>
using namespace std;
#define fr(iii,frm,forn)for(int iii=frm; iii<forn; iii++)
#define rfr(iii,frm,forn)for(int iii=frm; iii>=forn; iii--)
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
	int a[n],b[n];
	fr(i,0,n)cin>>a[i];
	fr(i,0,n)cin>>b[i];
	int srt=1;
	fr(i,0,n-1)
	{
		if(a[i]>a[i+1])srt=0;
	}
	if(srt){cout<<"yes\n";return;}

	int zero=0,one=0;
	for(int i=0;i<n;i++)
	{
		if(!b[i])zero=1;
		if(b[i])one=1;
	}
	if(one and zero)cout<<"YES\n";
	else cout<<"no\n";

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
