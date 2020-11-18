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
		int sqt=sqrt(a);
		if(a<=b)cout<<1<<e;
		else
		{
			int ans;
			int times=a,tt=0,get=0;
			fr(1,sqt+1)
			{
				if(a%i==0)
				{
					if(i<=b)
					{
						times=min(times,a/i);
					}
					if(a/i<=b)
					{
						times=min(times,i);
					}
				}

			}
			cout<<times<<e;
		}
	}
}

