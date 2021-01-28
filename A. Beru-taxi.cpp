#include<bits/stdc++.h>
using namespace std;

main()
{
    //freopen("in.txt","r",stdin);
    int a,b;
    cin>>a>>b;
    int n;
    cin>>n;

    int x[n],y[n],z[n];

    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }

     double ans[n],d[n],answer=99999999999999999;

     for(int i=0; i<n; i++)
    {
        d[i]=sqrt(((a-x[i])*(a-x[i]))+((b-y[i])*(b-y[i])));

        ans[i]=d[i]/z[i];
        if(ans[i]<answer)
            answer=ans[i];
    }

    printf("%.7lf\n",answer);


}
