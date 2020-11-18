#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)


main()
{
	//freopen("input.txt","r",stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int tc;
	cin>>tc;
	while(tc>0)
	{
		int n;
		double x;
		cin>>n>>x;
		double a[n];
		double total=0,ans=0;
		fr(0,n)
		{
			cin>>a[i];
		}

		sort(a,a+n,greater <double> ());
		fr(0,n)
		{

			if(a[i]>=x)
			{
				total+=a[i];
				ans++;
			}
			else
			{
				double temp_total=total+a[i];
				double temp_ans=ans+1;
				if(temp_total/temp_ans>=x)
				{
					total+=a[i];
					ans++;
				}
			}
			//	cout<<a[i]<<" "<<total<<" "<<ans<<endl;

		}
		//if(ans)cout<<total/ans<<endl;
		cout<<ans<<endl;


		tc--;
	}
}
