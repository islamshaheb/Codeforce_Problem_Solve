#include<bits/stdc++.h>
using namespace std;
//vector <char> vis[110];

main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    char vis[n][m];
    memset(vis,'f',sizeof vis);
    //vis.assign(110,'f');
   //cout<<vis[4][3]<<endl;
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
           cin>>a[i][j];

    for(int i=0; i<n; i++)
    {

         for(int j=0; j<m; j++)
           {

            char temp=a[i][j];
             {
               for(int k=j+1; k<m; k++)
               {
                  if(temp==a[i][k])
                  {
                      vis[i][k]='t';
                      vis[i][j]='t';
                  }
               }


               for(int l=i+1; l<n; l++)
               {

                   if(a[l][j]==temp)
                   {
                       vis[l][j]='t';
                       vis[i][j]='t';
                   }
               }

               if(vis[i][j]=='f')
                 cout<<a[i][j];
            }
           }
    }


cout<<endl;
}
