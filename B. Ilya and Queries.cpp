#include<bits/stdc++.h>
using namespace std;
int temp[100000];
main()
{
    //freopen("input.txt","r",stdin);
//    ios::sync_with_stdio(0);
//    cin.tie(0);
    string s;
    cin>>s;

    int len=s.length();
    int tc;
    cin>>tc;

    for(int i=1; i<=len;i++)
        {
            temp[i]=temp[i-1];
            if(s[i]==s[i-1])
                temp[i]++;
           // cout<<temp[i]<<" ";

        }// cout<<endl;

    while(tc>0)
    {
        int a,b;
        int answer=0;
        scanf("%d%d",&a,&b);
        a--;
        b--;

        answer=temp[b]-temp[a];
        printf("%d\n",answer);

        tc--;
    }
}
