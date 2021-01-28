
#include<bits/stdc++.h>

using namespace std;

main()
{
      int  n;
      cin>>n;

       double s=(double)n;
        double x=0;

        while(s>0)
        {
            double y;
            y=1/s;
            x+=y;
            s--;

       //printf("%lf\n",y);
        }
       cout<<x<<endl;
}
