//https://www.hackerrank.com/challenges/two-characters
#include <iostream>

using namespace std;

int main()
{
    int l;
    cin>>l;
    string s;
    cin>>s;
    int ans=0;
    int a[26];
    for(int i=0;i<26;i++)
        a[i]=0;
    for(int i=0;i<l;i++)
    {
        int x=s[i]-97;
        a[x]+=1;
    }
    int c=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
            c++;
    }
    int j=0,k=1,z=0;
    string r=s;
    for(int i=1;i<c;i++)
    {
        char x,y;
        if(a[j]!=0&&a[k]!=0)
        {
            x=97+j;
            y=97+k;
            j+=1;
            k+=1;
            for(int h=0;h<r.size();)
            {
                if(r[h]==x||r[h]==y)
                    h+=1;
                else
                    r.erase(h,1);
            }
            int check=0;
            char w=r[0];
            char q;
            if(w==x)
                q=y;
            else
                q=x;
            for(int h=0;h<r.size();h+=2)
            {
                if(r[h]!=w)
                {
                    check=1;
                    break;
                }
            }
            for(int h=1;h<r.size();h+=2)
            {
                if(r[h]!=q)
                {
                    check=1;
                    break;
                }
            }
            if(check==0)
            {
                if(r.size()>z)
                z=r.size();
            }
            cout<<x<<" "<<y<<" "<<r.size()<<" "<<r<<endl;
            r=s;
        }
        else
        {
            if(a[j]==0 && a[k]!=0)
            {
                j+=2;
            }
            else if(a[k]==0)
            {
                k+=2;
            }
        }
    }
    cout<<z;
    return 0;
}
