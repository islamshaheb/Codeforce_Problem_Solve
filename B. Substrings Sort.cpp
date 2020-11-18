#include<bits/stdc++.h>
using namespace std;

main()
{
   // freopen("in.txt","r",stdin);
    vector<pair<int,string> > vec;

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int len=s.size();
        vec.push_back(make_pair(len,s));
    }

    sort(vec.begin(),vec.end());
    bool ans=true;
    int j=1,i=0;
    for(i=0; i<n-1;i++)
    {
        int temp=i;

        string a,b;
        a=vec[i].second;
        b=vec[i+1].second;

        int ln=a.size(),lln=b.size(),x=0,k=0,l=0,sz=0,m=0;

        while(ln>=x)
        {

            if(a[k]!=b[l])
            {
                m++;
                k=0;
                l=m;
                x=0;
                sz=m;
            }
            else
            {
                k++,l++;
                x++;
                sz++;
            }

            if(sz>lln)
            {

                break;
            }
            if(x>=ln)
            {
               // ans=true;
                break;
            }
        }

      if((k)!=ln)
       {
           ans=false;
           break;
       }

//       if(!ans)
//       {
//           if(vec[j].second.size()==vec[j+1].second.size())
//           {
//               i=temp;
//               j++;
//           }
//       }
//       else
//       {cout<<j<<"  "<<j+1<<"______________\n";
//           i++,j++;
//       }
    }

    if(!ans)
        cout<<"NO\n";
    else
    {
        cout<<"YES\n";
          for(int i=0; i<n; i++)
            {
                cout<<vec[i].second<<"\n";
            }
    }




}
