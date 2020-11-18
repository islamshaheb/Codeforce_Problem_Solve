#include<bits/stdc++.h>
using namespace std;
#define pb push_back

main()
{
	int n,a,b;
	cin>>n>>a>>b;

	vector <int> x;
	vector <int> y;

	for(int i=1; i<n; i++)
	{
		if(i<=a and (n-i)<=b)
		{//cout<<i<<endl;
			x.pb(a/i);
			y.pb(b/(n-i));
		}
	}

	int len=x.size();
    vector <int> ans;
	for(int i=0; i<len; i++)
	{
		if(x[i]>y[i])
			ans.pb(y[i]);
		else
			ans.pb(x[i]);
	}


	int mx=-342534;
	for(int i=0; i<len; i++)
	{
		if(ans[i]>mx)
			mx=ans[i];
	}

	cout<<mx<<endl;



}
