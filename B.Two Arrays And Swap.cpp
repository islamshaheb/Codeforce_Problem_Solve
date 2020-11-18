#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define rfr(m,n)for(int i=n; i>=0; i--)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
#define e "\n"
typedef vector <int> ve;
typedef vector <bool> vb;

main()
{
//	freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],b[n];
		fr(0,n)cin>>a[i];
		fr(0,n)cin>>b[i];

		sort(a,a+n);
		sort(b,b+n,greater<int>());

		int ans=0;
		fr(0,n)
		{
			//cout<<a[i]<<" "<<b[i]<<e;
			if(k>0)
			{
				int mx=max(a[i],b[i]);
			    ans+=mx;
			    k--;
			}
			else
			{
				 ans+=a[i];
			}

		}
		cout<<ans<<e;
	}
}




