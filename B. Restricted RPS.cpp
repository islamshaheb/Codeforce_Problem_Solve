#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)

main()
{
//	freopen("input.txt","r",stdin);
	int tc;
	cin>>tc;
	while(tc>0)
	{
		int n,r,p,s,total=0;
		cin>>n;
		cin>>r>>p>>s;
		string a;
		cin>>a;
		int l=n;
		fr(0,l)
		{
			if(r>0 and a[i]=='S') a[i]='R',total++,r--;
			else if(p>0 and a[i]=='R') a[i]='P',total++,p--;
			else if(s>0 and a[i]=='P') a[i]='S',total++,s--;
			else a[i]='m';

		}
		int mx=(n+1)/2;
		if(total>=mx)
		{
			cout<<"YES\n";
			fr(0,l)
			{
				  if(a[i]=='m')
				   {
						if(r>0)a[i]='R',r--;
						else if(p>0 )a[i]='P',p--;
						else a[i]='S';
				   }
			}
			cout<<a<<"\n";
		}
		else
		{
			cout<<"NO\n";
		}
	tc--;
	}
}
