#include<bits/stdc++.h>
using namespace std;
main()
{
	int tc;
	cin>>tc;

	while(tc>0)
	{
		int a,b;
		cin>>a>>b;
		if(a%b==0)
			cout<<0<<endl;
		else
		{
			int rem=a%b;
			int ans=b-rem;
			cout<<ans<<endl;
		}


		tc--;
	}

}
