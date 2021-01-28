#include<bits/stdc++.h>
using namespace std;
#define ll long long int

main()
{
  //while(1)
  {
    ll x,r,n,i;
    cin>>x>>r;

//    if(x==r)
//        cout<<"0"<<endl;
//    else
    {
        for(n=1; n<=x; n++)
        {
            ll temp;
            temp=n*(n+1)/2;
            if(temp-(x-n)==r)
            {
                cout<<x-n<<endl;
                break;
            }
        }
    }
  }

}
