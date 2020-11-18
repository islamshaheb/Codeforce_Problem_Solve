#include<bits/stdc++.h>
using namespace std;


main()
{
    int tc;
    cin>>tc;
    int sum[tc]={0};
    string s[tc];
    int i=0;
    int n=tc;
    while(tc>0)
    {
        string name;
        int a,b,c,d,e,f,g;
        cin>>name>>a>>b>>c>>d>>e>>f>>g;
        s[i]=name;
        int sumx=0;
        sumx=(a*100)-(b*50)+c+d+e+f+g;
        tc--;
        sum[i]=sumx;
        i++;
    }

    //int x=*max_element(sum,sum+n);
    int index,mx=-939933;
    for(int i=0; i<n; i++)
        {

            if(sum[i]>mx)
            {
                mx=sum[i];
                index=i;
            }
        }
    cout<<s[index]<<endl;

}
