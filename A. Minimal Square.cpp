#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define rfr(m,n)for(int ii=m; ii>=n; ii--)
#define fr1(k,l)for(int j=k; j<l; j++)
#define fr2(m,n)for(int k=m; k<n; k++)
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
		int a,b;
		cin>>a>>b;
		int mx=max(a,b);
		int mn=min(a,b);

		int d=(mn*2);
		if(d<=mx)cout<<(mx)*(mx)<<e;
		else cout<<(d)*(d)<<e;
//		if(mx%2)cout<<(mx+1)*(mx+1)<<e;
//		else cout<<(mx)*(mx)<<e;
	}
}
