#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
typedef vector <int> ve;
typedef vector <bool> vb;
ve vec[1001];
vb vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//swhile(tc--)
	{
		ll a,b;
		cin>>a>>b;
		ll ans=(a/2)/(b+1);
		cout<<ans<<" "<<ans*b<<" "<<a-((ans*b)+ans)<<endl;

	}
}



