//https://www.hackerrank.com/challenges/utopian-tree
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin>>x;
        long long int n=1;
        int m=x/2;
        for(int i=1;i<=m+1;i++)
        {
                n*=2;
        }
        if(x%2==0)
            {
            n-=1;
        }
        else
            {
            n=(n-1)*2;
        }
        cout<<n<<endl;
    }
    return 0;
}
