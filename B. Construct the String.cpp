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
		int n,a,b;
		cin>>n>>a>>b;
		int k=0;
		for(int i=0; i<n; i++)
		{
			if(k==b)
				k=0;
			printf("%c",k+97);
			k++;
		}
		cout<<endl;
		tc--;
	}
}
