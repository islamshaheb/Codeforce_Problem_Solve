#include<bits/stdc++.h>
using namespace std;

main()
{
    int a,b;
    cin>>a>>b;
    if(a==0 and b==0)
        cout<<"NO\n";
    else if(a+1==b or a-1==b or a==b )
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
