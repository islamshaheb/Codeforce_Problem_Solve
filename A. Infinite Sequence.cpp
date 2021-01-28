#include<bits/stdc++.h>
using namespace std;
#define ll long long int
main()
{
while(1)
{

   ll a,b,c,k=0;
   cin>>a>>b>>c;
   if(c==0)
   {
       if(a==b)
          cout<<"YES\n";
       else
          cout<<"NO\n";
   }
   else
   {
        bool ok;
        ll rem=b%c;//cout<<1%-4<<endl;
        if(rem==a)
            cout<<"YES\n";
        else
        { //cout<<"e\n";
          //if(rem==0)
           //-8 4 4 cout<<"NO\n";
          //else

            if(b>a)
            {
            for(ll i=a;i<=b;)
            {
                if(i==b)
                {
                    cout<<"YES\n";
                    k=10;
                    break;
                }
                i+=c;//cout<<i<<endl;
            }
            if(k==0)
                cout<<"NO\n";
          }
          else
          {
              for(ll i=a;i>=b;)
            {
                if(i==b)
                {
                    cout<<"YES\n";
                    k=10;
                    break;
                }
                i+=c;//cout<<"__________"<<i<<endl;
            }
            if(k==0)
                cout<<"NO\n";

          }


//            if(a!=0 and b!=0)
//            {
//                if(a%b==0 || b%a==0)
//                cout<<"YES\n";
//                else
//                cout<<"NO\n";
//
//            }
//            else
//            {
//              if(a%c==0)
//                cout<<"YES\n";
//                else
//                cout<<"NO\n";
//
//            }

        }

  }
}


}
