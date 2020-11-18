#include<bits/stdc++.h>
using namespace std;
#define fr(m,n) for(int i=m; i<n; i++)

main()
{
	int n,b;
	cin>>n>>b;
	int a[n];
	fr(0,n)
		cin>>a[i];

	int odd=0,even=0,ans=0;
	vector <int> vec;
	fr(0,n-1)
		{//cout<<i<<endl;
			if(a[i]%2==0)
				even++;
			else
				odd++;

			if(even==odd)
			{
				vec.push_back(abs(a[i+1]-a[i]));
				//cout<<i<<endl;
				//ans++;
				//b-=abs(a[i+1]-a[i]);
			}
		}
		sort(vec.begin(),vec.end());

		int sz=vec.size();
		fr(0,sz)
		{//cout<<vec[i]<<endl;
			if(b>=vec[i])
			{
				ans++;
				b-=vec[i];
			}
		}
		cout<<ans<<endl;
}
