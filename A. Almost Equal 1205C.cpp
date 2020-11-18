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
		int n;
		cin>>n;
		if(!(n%2))cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			ve left,right;

			fr(1,n+1)
			{
				if(i%2) left.pb(i*2-1);
				else left.pb(i*2);
			}
			fr(1,n+1)
			{
				if(i%2) right.pb(i*2);
				else right.pb(i*2-1);
			}
			fr(0,n)cout<<left[i]<<" ";
			fr(0,n)cout<<right[i]<<" ";
			cout<<endl;
		}
	}
}




