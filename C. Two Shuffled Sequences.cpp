#include<bits/stdc++.h>

using namespace std;
main()
{
   // while(1)
    {
        int n;
        vector<int> vec;
        cin>>n;
        int a[n];
        bool ans=true;
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+n);
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                vec.push_back(a[i]);
                if(i<n-2 and a[i+1]==a[i+2])
                {
                    ans=false;
                    break;
                }

            }
        }
        if(ans)
        {
            cout<<"YES\n";
            sort(vec.begin(),vec.end(),greater<int>());
            int dec_len=vec.size();
            int inc_len=n-dec_len;
            cout<<inc_len<<endl;
            for(int i=0; i<n;)
            {
                if(i<n-1 and a[i]==a[i+1])
                {
                    if(i<n-2)
                      cout<<a[i]<<" ";
                    else
                      cout<<a[i];
                    i=i+2;
                }
                else
                {
                    if(i<n-1)
                        cout<<a[i]<<" ";
                    else
                        cout<<a[i];
                    i++;
                }
            }
            cout<<endl<<dec_len<<endl;
            for(int i=0; i<dec_len-1; i++)
            {
                cout<<vec[i]<<" ";
            }
            if(dec_len>0)
                cout<<vec[dec_len-1]<<endl;
            else
                cout<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
