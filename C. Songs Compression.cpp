#include<bits/stdc++.h>
using namespace std;

main()
{
    unsigned long long int n,m,suma=0,sumb=0,ans=0;
    cin>>n>>m;
   vector<int> vec;

    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        int diff=x-y;
        vec.push_back(diff);
        suma+=x;
        sumb+=y;
    }

    if(sumb>m)
    {
        cout<<"-1\n";
    }
    else
    {

        sort(vec.begin(),vec.end(),greater<int>() );
        long long int dif=suma-m,i=0;
        while(dif>0)
        {
            dif-=vec[i];
            ans++;
            i++;
        }
        cout<<ans<<endl;
    }


}
