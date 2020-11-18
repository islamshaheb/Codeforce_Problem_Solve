#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)

main()
{
	//freopen("input.txt","r",stdin);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int tc;
	cin>>tc;
	while(tc>0)
	{
		int n,m;
		cin>>n>>m;
		int x=n*m;
		fr(0,n)
			{
				fr1(0,m)
				{
					if(i==0 and j==0)
						cout<<"W";
					else
						cout<<"B";
				}
				cout<<endl;
			}

		tc--;
	}
}

