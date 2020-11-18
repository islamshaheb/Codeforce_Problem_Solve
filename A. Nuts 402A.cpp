#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
#define e "\n"
typedef vector <int> ve;
typedef vector <bool> vb;
ve vec[1001];
vb vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		int k,a,v,b;
		cin>>k>>a>>b>>v;
		int mainb=b;
		if(1+b>=k)
			b=k-1;

		int remdiv=mainb;
		int ans=0,capacity=0;
		while(remdiv>0)
		{
			if(capacity>=a)break;
			if(remdiv>=b)
				capacity+=v*(b+1);
			else
				capacity+=v*(remdiv+1);
			remdiv-=b;
			ans++;
		}

		int rem=a-capacity;
		if(rem<=0)cout<<ans<<e,exit(0);
		ans+=rem/v;
		if(rem%v)ans++;

		cout<<ans<<e;
	}
}



