//https://www.codechef.com/problems/CHEFCH
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
        int l=s.size();
        int ans1=0,ans2=0;
        for(int i=0;i<l;i++)
        {
            if(i%2==0)
            {
                if(s[i]!='-')
                    ans1+=1;
                if(s[i]!='+')
                    ans2+=1;
            }
            else
            {
                if(s[i]!='+')
                    ans1+=1;
                if(s[i]!='-')
                    ans2+=1;
            }
        }
        if(ans1<=ans2)
            cout<<ans1<<endl;
        else

            cout<<ans2<<endl;
    }
    return 0;
}
