//https://www.hackerrank.com/challenges/pangrams
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    getline(cin,s);
    int a[26];
    for(int i=0;i<26;i++)
        {
        a[i]=0;
    }
    for(int i=0;i<s.size();i++)
        {
        if(s[i]!=' ')
            {
            int x;
            if(s[i]>64&&s[i]<97)
                x=s[i]-65;
            else
                x=s[i]-97;
            a[x]+=1;
        }

    }
    int f=0;
    for(int i=0;i<26;i++)
        {
        if(a[i]==0)
            {
            f=1;
            break;
        }
    }
    if(f==0)
        cout<<"pangram";
    else
        cout<<"not pangram";
    return 0;
}
