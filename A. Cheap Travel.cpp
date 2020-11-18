#include<bits/stdc++.h>
using namespace std;

main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int temp=n/m;

	int rem=n%m;
	int ans3;
	int x=temp*b;
	int y=rem*a;
	ans3=x+y;

	if(rem!=0)
		temp++;
	int ans=temp*b;
	int ans2=n*a;
   // cout<<ans<<" "<<ans2<<" "<<ans3<<endl;
	if(ans<ans2)
	{
		if(ans<ans3)
			cout<<ans<<endl;
		else
			cout<<ans3<<endl;

	}

	else
	{
		if(ans2<ans3)
			cout<<ans2<<endl;
		else
			cout<<ans3<<endl;
	}


}
