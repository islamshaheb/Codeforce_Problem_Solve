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
	int n,m,c=0,r=0,mxr=-343,mxc=-32323;
	cin>>n>>m;
	int tem[m+11];
	clr(tem);
	fr(i,0,n)
	{
		int f=1,f1=1;
		fr(j,0,m)
		{
			int x=0;
			cin>>x;
			if(x and f)r++,f=0;
			if(x)tem[j]++;
		}
	}
	fr(i,0,m)
	{
		if(tem[i])c++;
	}


	c=m-c;
	r=n-r;
//cout<<c<<" "<<r<<e;
	int x=min(c,r);
	//cout<<x<<e;
	if(x%2)cout<<"Ashish"<<e;
	else cout<<"Vivek"<<e;
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
