//https://www.codechef.com/problems/LAPIN
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a[26],b[26];
        for(int i=0;i<26;i++)
        {
            a[i]=0;
            b[i]=0;
        }
        for(int i=0;i<s.size()/2;i++)
        {
            int x=s[i]-97;
            a[x]+=1;
        }
        if(s.size()%2==0)
        {
            for(int i=s.size()/2;i<s.size();i++)
            {
                int x=s[i]-97;
                b[x]+=1;
            }
        }
        else
        {
            for(int i=(s.size()/2)+1;i<s.size();i++)
            {
                int x=s[i]-97;
                b[x]+=1;
            }
        }
        int f=0;
        for(int i=0;i<26;i++)
        {

            if(a[i]!=b[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
