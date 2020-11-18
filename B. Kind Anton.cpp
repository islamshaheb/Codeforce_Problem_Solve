

#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
//int mn[100000];
//int pls[100000];
main()
{
	//freopen("input.txt","r",stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int tc;
	cin>>tc;
	while(tc>0)
	{
	int n;
	cin>>n;
	int a[n],b[n];
	bool m=false;
	bool p=false;
	int mn[n];
    int pls[n];
    fr(0,n)
    {
	 mn[i]=0,pls[i]=0;
    }
	fr(0,n)
	{
		cin>>a[i];

		if(m)
			mn[i]=2;
		if(p)
			pls[i]=2;

		if(a[i]<0)
			m=true;
		if(a[i]>0)
			p=true;


	}
//
//	fr(0,n)
//	  cout<<mn[i]<<" "<<pls[i]<<endl;

	fr(0,n)
	{
		cin>>b[i];
	}

	bool get=false;
	fr(0,n)
	{
		if(a[i]!=b[i])
		{
			if(a[i]>b[i])
			{
				if(mn[i]!=2)
				{
					get=true;
					cout<<"NO\n";
					break;
				}
			}
			else
			{
				if(pls[i]!=2)
				{
					get=true;
					cout<<"NO\n";
					break;
				}

			}
		}
	}
	if(!get)
		cout<<"YES\n";
	tc--;
	}
}

