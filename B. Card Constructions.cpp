
#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))

vector <int> vec[1001];
vector <bool> vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		ll n,times=0;
		cin>>n;
		while(n)
		{
			ll ans=0,x=2;
			while(ans<=n)
			{
				//times++;
				//cout<<ans<<" ";
		//		if(ans+=x<=n)
				{
					ans+=x;
					x+=3;
				}

			}
			ans-=x-3;
			if(ans>1)
				times++;
			n-=ans;
			if(n==1)break;
//			cout<<n<<" "<<ans<<endl;

		}


		cout<<times<<endl;

	}
}



