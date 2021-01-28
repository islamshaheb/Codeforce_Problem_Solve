
#include<bits/stdc++.h>

using namespace std;

main()
{
    while(1)
    {
      int n;
      cin>>n;
      int a[n];
      int i,j,k;

      for(i=0; i<n; i++)
        cin>>a[i];

      sort(a,a+n, greater<int>());
      bool dbl=false;
      int t=0,x=a[0],yy,temp[n];
      if(a[0]!=a[1]){
      for(i=0; i<n-1; i++)
      {
          //int temp[n]={-1};

         // cout<<temp[0]<<"__ "<<t<<" ";

       // if(t==0 and i>0)
        {

           // break;
        }

          cout<<" i = "<<i<<endl;
          int p=0;
            bool ok=false;
            if(i!=0)
          {
              for(int k=0; k<t; k++)
              {
                 // cout<<temp[k]<<"..."<<a[i]<<"temp\n";
                  if(a[i]%temp[k]!=0)
                  {
                      p=1;
                      break;
                  }
                  else
                  {
                      ok =true;
                  }


              }
          }
          dbl=false;

         // cout<<"ok "<<ok<<endl;


          int y=1;
          //sol:
          if(p!=1)
          {
              t=0;
          for(j=i; j<n-1; j++)
          {
              //cout<<a[i]<<endl;
            //  t=0;
              if(a[i]%a[j]==0)
              {
                  if(a[j]==a[j+1])
                  {
              //        <<" "<<a[j]<<"  "<<a[j+1]<<endl;
                      dbl=true;
                  }
                 // if(a[0]%a[j]==0)
                   // ok=true;

              }
              else
              {
                  cout<<a[j]<<"...."<<endl;
                  //if(i==0)
                  {
                      temp[t]=a[j];
                      t++;
                  }

                  if(a[0]%a[j]==0)
                  {
                     // ok=true;
                      t=0;
                  }

              }
          }
          }
//         if(i==1 and p==0)
//          {
//              yy=a[n-1];
//              break;
//          }

          //if(p!=1)
          if(dbl==true && i>0 && p==0 and ok==true)
          {
              yy=a[i];
              break;
          }



       }
        cout<<x<<" "<<a[i]<<endl;
      }
       else
       {
          cout<<x<<" "<<a[1]<<endl;
       }


    }
}
