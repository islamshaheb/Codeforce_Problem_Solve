#include<bits/stdc++.h>
using namespace std;

main()
{
    int tc;
    cin>>tc;

    while(tc>0)
    {
        double a;
        cin>>a;
        double ex=180-a;
        double angle=360/ex;
        int theta=angle;
        //cout<<angle<<"::"<<theta<<endl;
        if(angle==theta)
            cout<<"YES\n";
        else
            cout<<"NO\n";

        tc--;
    }
}
