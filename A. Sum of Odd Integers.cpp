
#include<bits/stdc++.h>
using namespace std;

main()
{
	//freopen("input.txt","r",stdin);
    int tc;
    cin>>tc;

    while(tc>0)
    {
        int n,k;
        cin>>n>>k;

        int div=n/k;
        if(k==1)
		{
			if(n%2==1)
			  cout<<"YES\n";
			else
			  cout<<"NO\n";

		}
		else if(div<k)
			cout<<"NO\n";
		else if(n<k)
		{
			cout<<"NO\n";
		}

		else
		{
			if(n%2==0 and k%2==0)
				cout<<"YES\n";
			else if(n%2==1 and k%2==1)
				cout<<"YES\n";
			else
			{
				cout<<"NO\n";
			}

		}

        tc--;
    }
}
