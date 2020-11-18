#include<bits/stdc++.h>
using namespace std;
#define fr(frm,forn)for(int i=frm; i<forn; i++)
#define rfr(frm,forn)for(int ii=frm; ii>=forn; ii--)
#define fr1(fork,forl)for(int j=fork; j<forl; j++)
#define fr2(frm,forn)for(int k=frm; k<forn; k++)
#define ll long long int
#define pb push_back
#define seet(seta) memset(seta,-1,sizeof(seta))
#define clr(setaa) memset(seta,0,sizeof(seta))
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
		int n,k;
		cin>>n>>k;
		int a[n];
		fr(0,n)cin>>a[i];
		int ans=0;
		fr(0,n-1)
		{
			if(ans*2>=n)break;
		    if(a[i]>=0)
			fr1(i+1,n)
			{//cout<<j<<" ";
				if(a[i]>=0 and a[j]>=0 and ((a[j]+a[i])%k==0))
				{
					ans++;
					a[j]=-33;
					break;
				}
			}
			//cout<<e;
		}
		cout<<ans*2<<e;
	}
}
