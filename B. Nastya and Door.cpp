#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int

main()
{
	//freopen("input.txt","r",stdin);
	int tc;
	cin>>tc;
	while(tc>0)
	{
     int n,k;
     cin>>n>>k;
     int a[n];
     fr(0,n)cin>>a[i];
     int mark[n],mx=0;
     memset(mark,0,sizeof(mark));
     fr(1,n)
     {
     	if(a[i-1]<a[i] and a[i]>a[i+1] and i<n-1)
		{
			mx++;
			mark[i]=mx;
		}
		else mark[i]=mx;
     }
     int in[1+(n-k)];
     int s[1+(n-k)];

     fr(0,1+(n-k))in[i]=i+(k-1);
     int mxx=-32342,index;
     fr(0,(n-k)+1)
     {
     	int temp=mark[(in[i]-1)]-mark[i];
     	if(temp>mxx)
		{
			mxx=temp;
			index=i;
		}

     }
     cout<<mxx+1<<" "<<index+1<<endl;
	tc--;
	}
}

