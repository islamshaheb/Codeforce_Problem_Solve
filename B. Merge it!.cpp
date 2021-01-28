#include<bits/stdc++.h>
using namespace std;

main()
{
   // freopen("in.txt","r",stdin);
    int tc;
    cin>>tc;

    while(tc>0)
    {
        int n;
        cin>>n;
        int a[n],an=0;
        long long int ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int x=0;

        sort(a,a+n,greater<int>());

        for(int i=0; i<n; i++)
        {
            x=0;
            if(a[i]%3==0)
                ans++;
            else
            {
                 for(int j=i; j<n; j++)
                {
                    if(a[j]!=0)
                    {
                        x+=a[j];
                        if(x%3==0)
                        {
                            ans++;
                            a[j]=0;
                            i=j;
                            break;
                        }
                         else if(x<3)
                        {
                        }
                        else
                        {
                            ans++;
                            x%=3;
                        }
                    }

                }
            }

        }

        cout<<ans<<endl;




        tc--;
    }
}
