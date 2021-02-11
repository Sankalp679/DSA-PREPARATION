#include<bits/stdc++.h>
using namespace std;
# define ll long long

void solve()
{
  ll A,B,n,k1,k2,k3;
  cin>>A>>B>>n;
  vector<ll>ai(n);
  vector<ll>bi(n);
  vector<pair<ll,ll>>v;
  for(ll i=0; i<n; i++)
  cin>>ai[i];
  for(ll i=0; i<n; i++)
  cin>>bi[i];
  for(int i=0; i<n; i++)
  {
    v.push_back(make_pair(ai[i],bi[i]));
  }
  sort(v.begin(),v.end());
  for(int i=0; i<n; i++)
  {
    k1=v[i].second/A;
    cout<<v[i].second<<endl;
    k2=B/v[i].first;
    k3=max(k1,k2);
    B-=k3*(v[i].first);
    v[i].second-=k3*A;
    cout<<"k1: "<<k1<<" k2: "<<k2<<" k3:"<<k3<<" A:"<<A<<" B:"<<B<<endl;
    if(B<=0 && i<n-1)
    {
      cout<<"NO"<<endl;
      return;
    }
  }
  if(v[n-1].second<=0)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
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