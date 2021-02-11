#include<bits/stdc++.h>
using namespace std;
# define ll long long

void solve()
{
  string s;
  cin>>s;
  for(int i=0; i<s.length(); i++)
  {
    if(i%2==0)
    {
      if(s[i]=='a')
      cout<<'b';
      else 
      cout<<'a';
    }
    else
    {
      if(s[i]=='z')
      cout<<'y';
      else 
      cout<<'z';
    }
  }
  cout<<endl;
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