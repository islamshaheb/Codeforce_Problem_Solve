
#include<bits/stdc++.h>
using namespace std;
#define fr(m,n)for(int i=m; i<n; i++)
#define fr1(k,l)for(int j=k; j<l; j++)
#define ll long long int

main()
{
	//freopen("input.txt","r",stdin);
	int tc;
	//cin>>tc;
	//while(1)
	{
		string s,a;
		cin>>s>>a;
		int n=s.length();
		int sums=0,suma=0,qstn=0;
		fr(0,n)
		{
			if(s[i]=='+')sums++;
			else if(s[i]=='-')sums--;

			if(a[i]=='+')suma++;
			else if(a[i]=='-')suma--;
		    else if(a[i]=='?')qstn++;
		}
		int sze=pow(2,qstn);
		int bin[sze];
		fr(0,sze)
		{
			int n=i,cnt=0,times=0;
			while(n>0)
			{
				int rem=n%2;
				if(rem==0)cnt--;
				else cnt++;
				times++;
				n=n/2;
			}
			int rem=qstn-times;
			cnt-=rem;
			bin[i]=cnt+suma;
		}

		double total=0,to,ans;
		fr(0,sze)if(bin[i]==sums)total++;

		to=(double) sze;
		ans=total/to;
		printf("%.10f\n",ans);
	tc--;
	}
}

