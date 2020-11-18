

#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int

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
		int a[n];
		fr(0,n)cin>>a[i];

		sort(a,a+n);

		int same=1,temp=0,total=0;
		fr(0,n-1)
		{
			if(a[i]==a[i+1])
				same++;
			else
			{

				total++;
				if(same>temp)
					temp=same;
				same=1;
			}
		}

		if(same>temp)
				temp=same;

		int rem=n-same;

		rem=total;
		//cout<<temp<<" "<<total<<endl;

		if(temp-total>1)
			rem++;
		if(temp<rem)
			cout<<temp<<endl;
	    else
			cout<<rem<<endl;
		tc--;
	}
}

