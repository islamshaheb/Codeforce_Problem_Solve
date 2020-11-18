#include<bits/stdc++.h>
using namespace std;
#define ll long long

main()
{

	//while(1)
	{

	ll n,m,a,k;
	cin>>n>>m>>a;
	k=n;
	if(n<m)k=m;
	ll tiles1=(n)/a;
	ll tiles2=(m)/a;
    ll answer=tiles1*tiles2;

	ll sidenise=(n/a);
	sidenise=sidenise*a;

	ll side=(n-sidenise);//cout<<side<<" "<<sidenise<<endl;
	if(side!=0 and sidenise!=0)
		answer+=tiles2;

	ll sideupor=(m/a);
	sideupor=sideupor*a;

	ll side2=(m-sideupor);
    if(side2!=0 and sideupor!=0)
		answer+=tiles1;

	if((tiles1*tiles2)*(a*a)+(side*a*tiles1)+side2*a*tiles2<n*m)
		answer++;

    if(answer==0)
   	  answer++;
	cout<<answer<<endl;

	}


}
