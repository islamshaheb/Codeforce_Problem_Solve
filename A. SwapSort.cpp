#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)

main()
{
	//freopen("input.txt","r",stdin);
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int a[n];
	int b[n];

	fr(0,n)
	{
		cin>>a[i];b[i]=a[i];
	}
	sort(b,b+n);

	int ans=0;
	vector <int> vec;
	vector <int> vec1;

	fr(0,n)
	{
		if(a[i]!=b[i])
		{
			int first=i,last,index;
			fr1(i+1,n)
			{
				if(b[i]==a[j])
				{
					index=j;
					last=j;
					break;
				}
			}

			ans++;
			vec.push_back(first);
			vec1.push_back(last);
			int temp=a[first];
			a[first]=a[last];
			a[last]=temp;
		}
	}

	cout<<ans<<endl;

	fr(0,ans)
	{
		cout<<vec[i]<<" "<<vec1[i]<<endl;
	}


}

