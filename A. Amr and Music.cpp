#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,s;
    cin>>n>>s;
    int a[n];

    for(int i=0; i<n; i++)
        cin>>a[i];

    int ans=0;
    sort(a,a+n);
    int b[n];

    int total=0;
    //for(int i=0; i<n; i++)
    {
        int i=0;
        while(total<=s)
        {
            total+=a[i];
            ans++;
            b[i]=a[i];
            i++;
        }
    }

    cout<<ans-1<<endl;

    for(int i=0; i<ans-2; i++)
        cout<<b[i]<<" ";

    cout<<b[ans-2]<<endl;

}
