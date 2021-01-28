#include<bits/stdc++.h>
using namespace std;
# define ll long long

void solve()
{
  ll N,M,ans1,ans2,ans3,cnt,total;
  ans1=ans2=ans3=cnt=total=0;
  cin>>N>>M;
  total=N*M;
  vector<string>v(N);
  for(ll i=0; i<N; i++)
  cin>>v[i];
  for(ll i=0; i<N; i++)
  {
    for(ll j=0; j<M; j++)
    {
        if((i+j)%2==0)
        {
          if(v[i][j]!='*')
          {
            ans1++;
          }
        }
        else
        {
          if(v[i][j]!='.')
          {
            ans1++;
          }
        }
        if((i+j)%2==0)
        {
          if(v[i][j]!='.')
          {
            ans2++;
          }
        }
        else
        {
          if(v[i][j]!='*')
          {
            ans2++;
          }
        }
    }
  }
  if(total%2==0)
  cnt=min(ans1,ans2);
  else
  cnt=ans1;
  cout<<cnt<<endl;
}

int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    solve();
  }
}