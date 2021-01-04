#include<bits/stdc++.h>
using namespace std;

void tryrec(long long n, long long a, long long b, long long val)
{
    cout<<val<<" ";
    if(n==1)
    return;
    tryrec(n-1,a,b,val+a);
    cout<<endl;
    tryrec(n-1,a,b,val+b);
}

int main()
{
    long long T;
    cin>>T;
    while(T--)
    {
        long long n,a,b,val=0;
        cin>>n>>a>>b;
        tryrec(n,a,b,val);
    }
    return 0;
}

// 0   
// 10
// 20
// 30