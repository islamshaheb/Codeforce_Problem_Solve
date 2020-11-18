#include<bits/stdc++.h>
using namespace std;

main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,p;
    cin>>n>>p;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    p--;
    bool ans=false;
    int answer;
    while(!ans)
    {
        if(a[p]==1)
        {
            answer=p;
            ans=true;
        }
        else
        {
            if(p==n)
                p=0;
            else
                p++;
        }
    }

    cout<<p+1<<endl;

}
