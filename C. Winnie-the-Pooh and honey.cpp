#include<bits/stdc++.h>
using namespace std;

main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int sum=0;

    for(int i=0; i<n; i++)
            for(int j=0; j<3; j++)
            {
              if(a[i]>=k)
              {
                  a[i]-=k;
              }
            }



     for(int i=0; i<n; i++)
        sum+=a[i];
        cout<<sum<<endl;


}
