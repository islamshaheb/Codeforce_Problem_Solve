#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    bool ans=true;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x==1)ans=false;
    }

    if(ans)
        cout<<"1\n";
    else
        cout<<"-1\n";
}
