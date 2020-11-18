#include<bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
	int tc;
	cin>>tc;

	while(tc>0)
	{
		ll n,k;
		cin>>n>>k;
		ll a[n];
		bool zero=true;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			if(a[i]!=0)
				zero=false;
		}

		if(zero)
			cout<<"YES\n";
		else
		{
			int ans=true;
			map <int,int > mp;
			for(int i=0; i<n; i++)
			{
				int t=0;
				while(a[i]!=0)
				{
					if(a[i]%k>=1)
					{
						mp[t]+=a[i]%k;
					}
					a[i]/=k;
					t++;
				}
			}

			for(auto it=mp.begin(); it!=mp.end(); it++)
			{
				//cout<<"                        "<<it->second<<endl;
				if(it->second>1)
				{

					ans=false;
					break;
				}
			}

			if(ans)
				cout<<"YES\n";
			else
				cout<<"No\n";


		}



		tc--;
	}
}
