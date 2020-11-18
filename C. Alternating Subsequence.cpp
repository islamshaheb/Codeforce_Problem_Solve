
#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int

main()
{
	//freopen("input.txt","r",stdin);
	int tc;
	cin>>tc;
	while(tc>0)
	{
		ll n,sum=0;
		cin>>n;
		ll a[n];
		bool pos=false;
		bool neg=false;
		fr(0,n)
		{
			cin>>a[i];
			if(a[i]>0)
			{
				pos=true;
			}
			else neg=true;
		}
		if(!neg)
		{
			sort(a,a+n);
			cout<<a[n-1]<<endl;
		}
		else
		{
			ll ans=0;
			fr(0,n)
			{
				ll mx=a[i];
				if(a[i]>0)
				{
					while(a[i]>0)
					{
						if(a[i]>mx)
							mx=a[i];
						i++;
						if(i>n-1)break;
					}
					i--;

					sum+=mx;
				}
				else
				{

					while(a[i]<0)
					{
						if(a[i]>mx)
							mx=a[i];
						i++;
						if(i>n-1)break;
					}
					i--;

					sum+=mx;
				}

			}
			cout<<sum<<endl;
		}


	tc--;
	}
}


