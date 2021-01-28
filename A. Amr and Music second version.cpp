#include<bits/stdc++.h>
using namespace std;


main()
{
    //freopen("in.txt","r",stdin);

    vector <pair <int,int> > vec;
    vector<int>answer;

    int i,n,m,ans=0;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;
        vec.push_back(make_pair(x,i+1));
    }

    sort(vec.begin(),vec.end());
//
//    for(i=0; i<n; i++)
//        cout<<vec[i].first<<" "<<vec[i].second<<endl;

    int total=0;
    for(i=0; i<n; i++)
       {
           if(ans+vec[i].first<=m)
           {
               answer.push_back(vec[i].second);
               ans+=vec[i].first;
               total++;
           }
           else
            break;
       }
       cout<<total<<endl;
       int len=answer.size();
       for(i=0; i<len-1; i++)
        cout<<answer[i]<<" ";

       if(answer.size()>=1)
          cout<<answer[i];




}
