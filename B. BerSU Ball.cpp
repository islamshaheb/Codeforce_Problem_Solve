
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
	bool aa[n];
	fr(0,n)
	{
		cin>>a[i];
		aa[i]=false;
	}

	int m;
	cin>>m;
	int b[m];
	bool bb[m];
	fr(0,m)
	{
		cin>>b[i];
		bb[i]=false;
	}

	sort(a,a+n);
	sort(b,b+m);

	int ans=0;
	if(n<m)
	{
		fr(0,n)
		{
			fr1(0,m)
			{
				if(((a[i]==b[j]+1 or  a[i]==b[j]-1 or  a[i]==b[j]) and !bb[j])){ans++,bb[j]=true;break;}
			}
//			if((a[i]==b[i-1]+1 or  a[i]==b[i-1]-1 or  a[i]==b[i-1]) and i>0 and !bb[i-1]) ans++,bb[i-1]=true;
//			else if((a[i]==b[i]+1 or  a[i]==b[i]-1 or  a[i]==b[i]) and !bb[i]) ans++,bb[i]=true;
//			else if((a[i]==b[i+1]+1 or  a[i]==b[i+1]-1 or  a[i]==b[i+1]) and !bb[i]) ans++,bb[i]=true;
		}
	}
	else
	{
		fr(0,m)
		{
			fr1(0,n)
			{
				if(((b[i]==a[j]+1 or  b[i]==a[j]-1 or  b[i]==a[j]) and !aa[j])){ans++,aa[j]=true;break;}
			}
//			if((b[i]==a[i-1]+1 or  b[i]==a[i-1]-1 or  b[i]==a[i-1]) and i>0 and !aa[i-1]) ans++,aa[i-1]=true;
//			else if((b[i]==a[i]+1 or  b[i]==a[i]-1 or  b[i]==a[i]) and !aa[i]) ans++,aa[i]=true;
//			else if((b[i]==a[i+1]+1 or  b[i]==a[i+1]-1 or  b[i]==a[i+1]) and !aa[i]) ans++,aa[i]=true;
		}

	}
	cout<<ans<<endl;

}
