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
		ll n,g,b;
		cin>>n>>g>>b;
		ll mid=(n+1)/2;
		int needed_good_day=mid/g;
		if(mid%g)needed_good_day++;

		ll bad_day=(needed_good_day-1);
		ll spent_bad_day=bad_day*b;
		ll total_day=mid+spent_bad_day;

		//if(n<=g)cout<<n<<e;
		 if(n<=total_day)cout<<total_day<<e;
		else cout<<total_day+(n-total_day)<<e;
	}
}

