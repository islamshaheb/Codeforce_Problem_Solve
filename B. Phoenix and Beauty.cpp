#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))


vector <bool> vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],temp[n+10];
		vector <int> vec;
		clr(temp);
		fr(0,n)
		{
			cin>>a[i];
			temp[a[i]]++;
			if(temp[a[i]]==1)
				vec.pb(a[i]);
		}
		int len=vec.size();
		if(len>k)cout<<-1<<endl;
		else
		{
			int ans_size=n*k;
			cout<<ans_size<<endl;
			fr(0,n)
			{
				fr1(0,len)
				{
					cout<<vec[j]<<"_";
				}
				fr1(0,k-len)
					cout<<n<<"_";
			}
			cout<<endl;

		}


	}
}


