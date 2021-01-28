#include<bits/stdc++.h>

using namespace std;

main()
{
    while(1)
    {
      int n;
      cin>>n;
      int a[n]={0},temp[130];
      int i,j,k,y,t;

      for(i=0; i<n; i++)
        cin>>a[i];

      sort(a,a+n, greater<int>());

      if(a[0]==a[1])
        cout<<a[0]<<" "<<a[1]<<endl;
      else{
      for(i=0; i<n; i++)
      {//cout<<i<<endl;
          int xx;
          bool flag=false,dbl=false;
          if(i>0)
          {
              for(k=0; k<t; k++)
                {
                    if(a[i]%temp[k]!=0)
                    {
                        flag=true;
                    }
                }
          }
          memset(temp,-1,130);
          int k=1;

          if(!flag)
          {
              t=0;xx=0;
              for(j=i; j<n-1; j++)
              {
                  if(a[i]%a[j]==0)
                  {
                      if(a[j]==a[j+1] and a[0]%a[j+1]==0)
                      {
                          dbl=true;//cout<<a[j]<<" "<<a[j+1]<<endl;
                          xx++;
                      }

                  }
                  else
                  {
                      temp[t]=a[j];//cout<<a[j]<<"...\n";
                      t++;
                      if(a[0]%a[j]!=0)
                        k=0;
                  }
              }
          }

          if(dbl and !flag and k==1 and xx>1 and i>0)
          {
              y=a[i];
              break;
          }

      }
      if(i<n)
         cout<<"Answer "<<a[0]<<" "<<y<<endl;
      else
         cout<<"Answer "<<a[0]<<" "<<a[n-1]<<endl;
      }



    }
}
