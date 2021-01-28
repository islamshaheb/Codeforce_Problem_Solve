#include<bits/stdc++.h>
using namespace std;

main()
{
    //freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin>>a[i][j];
    }

    bool ans=true;
     for(int i=0; i<n; i++)
    {
        int num=0;
        for(int j=0; j<n; j++)
           {
             //  if(a[i][j]=='o')
               {
                   if(a[i-1][j]=='o' and i>0)
                    num++;
                   if(a[i][j-1]=='o' and j>0)
                    num++;
                   if(a[i][j+1]=='o' and j<n-1)
                    num++;
                   if(a[i+1][j]=='o' and i<n-1)
                    num++;

               }
               //cout<<num<<i<<j<<endl;
               if(num%2==0)
                continue;
               else
               {
                   ans=false;
                   break;
               }
           }
           if(!ans)
            break;
    }

    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
