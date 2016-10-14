//https://www.codechef.com/problems/ONOZ
#include <iostream>

using namespace std;
int getcount(int n)
{
    if(n<10)
    {
        return n;
    }
    else
    {
        int x=n%10;
        int p=n/10;
        if(x>=p)
        {
            return(9+p);
        }
        else
        {
            return(9+p-1);
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        h=h-1;
        m=m-1;
        int a,b;
        a=getcount(h);
        b=getcount(m);
        int ans=0;
        int x,y;
        x=a-9;
        y=b-9;
        if(x>=0 && y>=0)
        {
           ans=9+x+y;
            if(x>=y)
                ans+=y;
            else
                ans+=x;
                //cout<<ans<<endl;
        }
        else
        {
            if(x<0)
            {
                if(y<0)
                {
                    if(x>=y)
                    ans=b;
                    else
                    ans=a;
                }
                else
                {
                    ans=a;
                    if(a>=y)
                        ans+=y;
                    else
                        ans+=a;
                }
            }
            if(y<0)
            {
                if(x<0)
                {
                    if(x>=y)
                    ans=b;
                    else
                    ans=a;
                }
                else
                {
                    ans=b;
                    if(b>=x)
                        ans+=x;
                    else
                        ans+=b;
                }
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}
