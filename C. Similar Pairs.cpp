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
		int n;
		cin>>n;
		int a[n];
		int ev=0,od=0;
		ve even,odd;
		fr(0,n)
		{
			int x;
			cin>>x;
			a[i]=x;
			if(x%2)od++,odd.pb(x);
			else ev++,even.pb(x);
		}

		if(od%2==1 or ev%2==1)
		{
			int os=odd.size();
			int es=even.size();

			int y=0;
			fr(0,os)
			{
				fr1(0,es)
				{
					int t=abs(odd[i]-even[j]);
					if(t==1)
					{
						y=1;
						break;
					}
				}
			}
			if(!y)cout<<"NO\n";
			else cout<<"YES\n";
		}
		else cout<<"YES\n";
	}
}

