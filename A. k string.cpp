#include<bits/stdc++.h>
using namespace std;

 main()
{
    int a[26]={0},n,i,j;
    string s,s1;
    cin>>n>>s;

    for(auto i:s)
        a[i-97]++;

    for(auto i:a)
      if(i%n!=0)
      {
          cout<<"-1\n";
          return 0;
      }


      for(i=0; i<26; i++)
        if(a[i]>0)
        {
            int x;
            x=a[i]/n;
            for(j=0; j<x; j++)//cout<<i+97<<endl;
            s1+=i+97;
        }

       int len=s.size(),len1=s1.size();

        for(i=0; i<len/len1; i++)
          cout<<s1;
          cout<<endl;





}
