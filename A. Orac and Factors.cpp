#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
#define e "\n"
typedef vector <int> ve;
typedef vector <bool> vb;
ve vec[1001];
vb vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	cin>>tc;
	while(tc--)
	{
		int a,b,ans=0;
		cin>>a>>b;
		ans=a;
		//while(b--)
		{
			fr(2,a+1)
			{
				if(a%i==0)
				{
					ans+=i,a=ans;
					break;
				}
			}
			b--;
		}
		if(b)
		cout<<ans+(b*2)<<e;
		else cout<<ans<<e;
	}
}



