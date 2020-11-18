#include<bits/stdc++.h>
#define ll long long int
using namespace std;
main()
{
    ll n;
    cin>>n;
    ll a[n];

    for(int i=0; i<n; i++)
            cin>>a[i];

    ll total=0,mn=34343344434334;
    int k=0;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i]<mn)
        {
            total+=a[i];//cout<<"__"<<a[i]<<endl;
            mn=a[i];
            k=1;
        }
        else
        {   mn--;
            if(mn>0)
              total+=mn;//cout<<mn<<endl;
            k++;

        }
    }
    cout<<total<<endl;
}
