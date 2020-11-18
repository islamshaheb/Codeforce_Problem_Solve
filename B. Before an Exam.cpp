#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int
#define pb push_back
#define set(a) memset(a,-1,sizeof(a))
#define clr(a) memset(a,0,sizeof(a))

vector <int> vec[1001];
vector <bool> vis;

main()
{
	//freopen("input.txt","r",stdin);
	int tc,cse=0;
	//cin>>tc;
	//while(1)
	{
		int d,hours;
		cin>>d>>hours;
		int mn[d],mx[d];
		fr(0,d)cin>>mn[i]>>mx[i];
		int per_day=hours/d;

		int ans[d],times=hours;
		fr(0,d)
		{
			ans[i]=mn[i];
			times-=ans[i];
		}

		int get=0;
		if(times>0)
		{
			int i=0,updated=0;
			while(times>0)
			{
				if(ans[i]<mx[i])
				{
					ans[i]++;
					times--;
					updated=1;
				}
				//cout<<times<<" "<<ans[i]<<" "<<i<<endl;
				if(i==d-1 and !updated)break;
				if(i==d-1)i=0,updated=0;
				else i++;

			}
		}
		else if(times<0)
		{
			get=1;
			cout<<"NO\n";
		}

		if(!get)
		{
			if(times==0)
			{
				cout<<"YES\n";
				fr(0,d)cout<<ans[i]<<" ";
				cout<<endl;
			}
			else
				cout<<"NO\n";
		}


	}
}


