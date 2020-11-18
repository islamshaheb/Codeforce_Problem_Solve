#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define pb push_back
vector <int> vec;

int binary_srch(int first,int last,int x)
{
	int o=89;
	int mid=(first+last)/2;
	//cout<<"____"<<mid<<endl;

	 if(vec[mid]==x)
	{
		return mid;
	}
	else if(vec[mid]<=x and x<=vec[mid+1] and mid%2==0)
		return mid;
	else if(vec[mid-1]<=x and x<=vec[mid] and mid%2==1)
		return mid;
	else if(x<vec[mid])
	{
		last=mid;
		binary_srch(first,last,x);
	}
	else if(x>vec[mid])
	{
		first=mid+1;
		binary_srch(first,last,x);
	}


	//else return o;

}

main()
{
	//freopen("input.txt","r",stdin);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n;
	int a[n];
	fr(0,n)cin>>a[i];

	cin>>m;
	int b[m];
	fr(0,m)cin>>b[i];


	vec.pb(1);
	vec.pb(a[0]);

	int k=1;
	fr(1,n)
	{
		//cout<<vec[i]<<endl;
		vec.pb(vec[k]+1);
		vec.pb((vec[k])+a[i]);
		k+=2;
	}

	fr(0,m)
	{
		int index=binary_srch(0,vec.size()-1,b[i]);
		index=index/2+1;
		cout<<index<<endl;
	}

	//fr(0,vec.size())cout<<vec[i]<<" ";



}

