
#include<bits/stdc++.h>
using namespace std;

main()
{
    //freopen("in.txt","r",stdin);
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
        string a,b;
        a=vec[i].second;
        b=vec[i+1].second;

       if(strstr(b.c_str(),a.c_str()))
          {

          }
        else
          {
               ans=false;
               break;
           }
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

