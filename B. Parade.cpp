#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    int a[n],b[n],l=0,r=0,index;

    for(int i=0;i<n; i++)
    {
        cin>>a[i]>>b[i];
        int x=abs(a[i]-b[i]);
        l+=a[i];
        r+=b[i];
    }

    int diff=abs(l-r);
    bool change=false;

    for(int i=0; i<n; i++)
    {
        int after_l,after_r;
        after_l=l-a[i]+b[i];
        after_r=r-b[i]+a[i];

        int diff1=abs(after_l-after_r);
        if(diff1>diff)
        {
            change=true;
            diff=diff1;
            // cout<<diff1<<"__"<<i<<endl;
            index=i;
        }


    }
    if(!change)
    {
        cout<<"0"<<endl;
    }
    else
        cout<<index+1<<endl;


}
