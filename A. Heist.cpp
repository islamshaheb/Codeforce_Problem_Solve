#include<bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    int start=a[0],last=a[n-1],ans=0;
    for(int i=start,j=0; i<=last; i++)
    {
        if(i==a[j])
        {
            j++;
        }
        else
        {
            ans++;
        }
    }

    cout<<ans<<endl;
}


