#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))
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
		int a,b;
		cin>>a>>b;

		if(a<=7)
		{
			int ans=1;
			if(a==2)
			{
				int f=7-b;
				f++;
				int rem=28-f;
				int remender=rem%7;
				ans+=rem/7;
				if(remender)
					ans++;
			}
			else if(a%2==1)
			{
				int f=7-b;
				f++;
				int rem=31-f;
				int remender=rem%7;
				ans+=rem/7;
				if(remender)
					ans++;

			}
			else
			{
				int f=7-b;
				f++;
				int rem=30-f;
				int remender=rem%7;
				ans+=rem/7;
				if(remender)
					ans++;
			}
			cout<<ans<<endl;
		}
		else
		{
			int ans=1;
			if(a%2==1)
			{
				int f=7-b;
				f++;
				int rem=30-f;
				int remender=rem%7;
				ans+=rem/7;
				if(remender)
					ans++;
			}
			else if(a%2==0)
			{
				int f=7-b;
				f++;
				int rem=31-f;
				int remender=rem%7;
				ans+=rem/7;
				if(remender)
					ans++;

			}
			cout<<ans<<endl;

		}

	}
}



