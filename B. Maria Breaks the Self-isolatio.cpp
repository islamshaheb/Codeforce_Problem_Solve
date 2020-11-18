#include<bits/stdc++.h>
using namespace std;
#define fr(frm,forn)for(int i=frm; i<forn; i++)
#define rfr(frm,forn)for(int ii=frm; ii>=forn; ii--)
#define fr1(fork,forl)for(int j=fork; j<forl; j++)
#define fr2(frm,forn)for(int k=frm; k<forn; k++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
#define e "\n"
typedef vector <int> ve;
typedef vector <bool> vb;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
	    int a[n],b[n];
	    fr1(0,n)cin>>a[j];
	    sort(a,a+n);
	    int mx=-23;
	    fr(0,n)
	    {
			if(a[i]<=i+1)mx=i+1;
		}

		if(mx>=0)
			cout<<mx+1<<e;
		else
			cout<<1<<e;
	 }
}

