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
#define infi 2e20+10
typedef vector <int> ve;
typedef vector <bool> vb;

void solve()
{
	int n;
	//cout<<infi<<e;
	int index[200005];
	cin>>n;
	int a[n+1],b[n+1];
	fr(i,1,n+1)
	{
		cin>>a[i];
		index[a[i]]=i;
	}
	fr(i,1,n+1)cin>>b[i];
	int ans[n+10];
	clr(ans);
	fr(i,1,n+1)
	{
		int current=index[b[i]]-i;
		if(current<0)current+=n;
		ans[current]++;
	}
	int answer=0;
	fr(i,0,n+1)
	{
		if(ans[i]>answer)answer=ans[i];
	}
	cout<<answer<<e;
}

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
//	cin>>tc;
	//while(tc--)
	{
		solve();
	}
}
