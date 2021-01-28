#include<bits/stdc++.h>
using namespace std;

main()
{
    //freopen("in.txt","r",stdin);
   // while(1)
    {
        int n,total=0;
        cin>>n;
        //if(n==0)break;
        char a[n][n];

        for(int i=0; i<n; i++)
            for(int j=0;j<n; j++)
                cin>>a[i][j];
        char x=a[0][0];
        bool ans=true;
        if(x!=a[n-1][0])
            ans=false;
        else
        {
            for(int i=0; i<n; i++)
          {
            for(int j=0;j<n; j++)
            {
                if(i==j)
                {
                    if(a[i][j]!=x)
                    {
                        ans=false;
                        break;
                    }
                    else total++;
                }

                if(a[i][j]!=a[j][i])
                {
                    ans=false;
                    break;
                }else total++;
            }
                if(!ans)break;
           }

        } //cout<<total<<endl;


        if(ans)
        {
            if(a[0][0]!=a[0][1] and a[n-1][n-2]!=a[n-1][n-1] and a[n-2][n-1]!=a[n-1][n-1])
                 cout<<"YES\n";
            else
                 cout<<"NO\n";
        }
        else
            cout<<"NO\n";


    }
}
