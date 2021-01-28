

#include<bits/stdc++.h>
using namespace std;
map <string,string> mp;
vector<bool> vis;

//void rec(string uv)
//{
//       if(!vis[i])
//       {
//            rec(mp[uv]);
//       }
//
//}

main()
{
   // while(1)
    {
       // freopen("in.txt","r",stdin);
        int n,ans=0;
        cin>>n;
        string st[n];

       for(int i=0;i<n;i++)
        {
            string s,t;
            cin>>s>>t;
            if(mp[s]!="")
            {
                mp[t]=mp[s];
            }
            else
                mp[t]=s;
            mp.erase(s);
       }

       cout<<mp.size()<<endl;
       for(auto i:mp)
           cout<<i.second<<" "<<i.first<<endl;
      }
}
