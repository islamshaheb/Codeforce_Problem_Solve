#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)

main()
{
	int n;
	cin>>n;
	int a[n+10];
	fr(0,n)
	{
		cin>>a[i];
	}

	int first=-2,second=-2,sfirst=-2;
	bool fst=false,sec=false,sfst=false;

	fr(0,n-1)
	{
		if(a[i]>a[i+1] and !fst)first=i,fst=true;
		if(a[i]<a[i+1] and fst and !sec)second=i,sec=true;

		if(a[i]>a[i+1] and sec and !sfst)sfst=i,sec=true,sfirst=i;
	}

	if(first!=-2 and second==-2) second=n-1;

	if(first==-2 and second==-2) cout<<"yes\n"<<1<<" "<<1<<endl;
	else
	{
		if(sfirst!=-2 and first!=-2)cout<<"no\n";
		else
		{
			if(a[first]>a[second+1] and second<n-1)cout<<"no\n"<<endl;
			else if(a[first-1]>a[second] and first>0 and second>0)cout<<"no"<<endl;
			else cout<<"yes\n"<<first+1<<" "<<second+1<<endl;
		}
	}

}
