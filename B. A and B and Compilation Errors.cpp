#include<bits/stdc++.h>
using namespace std;

main()
{
	int n;
	cin>>n;
	int a[n],b[n-1],c[n-1];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++)
	    cin>>b[i];
	for(int i=0;i<n-2;i++)
		cin>>c[i];


	sort(a,a+n);
	sort(b,b+n-1);
	sort(c,c+n-2);

	bool got=false;
	for(int i=0; i<n-1; i++)
	{
		if(a[i]!=b[i])
		{
			got=true;
			cout<<a[i]<<endl;
			break;
		}
	}

	if(!got)
		cout<<a[n-1]<<endl;

	bool g=false;
	for(int i=0; i<n-2; i++)
	{
		if(b[i]!=c[i])
		{
			g=true;
			cout<<b[i]<<endl;
			break;
		}
	}
	if(!g)
		cout<<b[n-2]<<endl;



}
