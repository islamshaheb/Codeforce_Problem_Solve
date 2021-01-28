#include<bits/stdc++.h>
using namespace std;

main()
{
    //while(1)
    {
    int n,a,b;
    cin>>n>>a>>b;
    if(b>0)
    {
        if(b>=n)
            b%=n;
        int x=a+b;
        if(x>n)
            x%=n;
        cout<<x<<" "<<endl;
    }
    else
    {
        b=abs(b);
        if(b>n)
            b%=n;
        int x=a-b;
        if(x<=0)
            x+=n;
        if(x>n)
            x%=n;
        cout<<x<<endl;
    }


    }
}
