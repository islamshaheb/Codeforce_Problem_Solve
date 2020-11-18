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
	//cin>>tc;
	//while(tc--)
	{
		int n,ans=0,x=0;
		cin>>n;
		fr(2,n)
		{
			int temp=i,temp1=n;
			while(temp1>=temp)
			{
				ans+=temp1%temp;
				temp1=temp1/temp;
			}
			ans+=temp1;
			x++;
		}
	   int b=n-2;
	   cout << ans/__gcd(b, ans) << "/" << b/__gcd(b,ans) << endl;
	}
}





