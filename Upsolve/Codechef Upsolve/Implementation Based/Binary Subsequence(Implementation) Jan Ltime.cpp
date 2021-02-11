#include<bits/stdc++.h>
using namespace std;
# define ll long long

void solve()
{
  string s;
  ll one,zero,count,one1,zero0,ans,N;
  one=zero=count=zero0=one1=0;
  ans=INT_MAX;
  cin>>N;
  cin>>s;
  for(auto x:s)
  if(x=='1')
  one++;
  else
  zero++;
  if(one>zero)
  count=zero;
  else if(one<=zero)
  count=one;
  for(auto x:s)
  {
    if(x=='0')
    zero0++;
    else 
    one1++;
    ans=min(ans,one1+zero-zero0);
  }
  cout<<min(ans,count)<<endl;
}

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}