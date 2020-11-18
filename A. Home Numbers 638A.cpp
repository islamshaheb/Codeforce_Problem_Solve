#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define rfr(m,n)for(int i=n; i>=0; i--)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
#define e "\n"
typedef vector <int> ve;
typedef vector <bool> vb;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(tc--)
	{
		int n,m;
		cin>>n>>m;
		int a[n/2],b[n/2];
		fr(0,n/2)
		{
			a[i]=i*2+1;
		}
		int f=0;
		for(int i=n;i>=0;)
		{
			b[f]=i;
			i-=2;
			f++;
		}

		if(m%2)
		{
			fr(0,n/2)
			{
				if(a[i]==m)
				{
					cout<<i+1<<e;
					break;
				}
			}
		}
		else
		{
			fr(0,n/2)
			{
				if(b[i]==m)
				{
					cout<<i+1<<e;
					break;
				}
			}
		}
	}
}



