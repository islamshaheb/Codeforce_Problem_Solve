#include<bits/stdc++.h>
using namespace std;
#define fr(i,frm,forn)for(int i=frm; i<forn; i++)
#define rfr(i,frm,forn)for(int i=frm; i>=forn; i--)
#define ll long long int
#define ll unsigned long long int
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
	cin>>tc;
	while(tc--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],ev=0,od=0;

		fr(i,0,n)
		{
			cin>>a[i];
			int x=a[i];
			if(x%2)od++;
			else ev++;

//			if(i+1>=)
		}

		int get=0;
		fr(i,1,k+1)
		{
			if(i%2 and od>=i)
			{
				int baki=k-i;
				if(baki>=0)
				{
					if(ev>=baki)
					{
						//cout<<i<<" "<<baki<<" "<<ev<<e;
						get=1;
						break;
					}
				}
			}
		}
		if(get)cout<<"YES\n";
		else cout<<"NO\n";


	}
}

