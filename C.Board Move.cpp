#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define rfr(m,n)for(int i=n; i>=0; i--)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define lll long long unsigned int
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
		lll n;
		cin>>n;
		lll mid=n/2,x=8,ans=0;
		fr(1,mid+1)
		{
			ans+=x*i;
			x=8*(i+1);
		}
		cout<<ans<<e;

	}
}

