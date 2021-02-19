// Not working on TC 6 Don't Know Why?

#include<bits/stdc++.h>
using namespace std;
# define ll long long

void solve()
{
  ll a,b,c,count=0,prev_min=10000000000,flag=30;
  cin>>a>>b;
  c=sqrt(a);
  if(b<2)
  {
    b++;
    flag=0;
    count++;
  }
  for(ll i=b; i<=c; i++)
  {
    ll d,mina=i-b;
    d=a;
    if(flag==0)
    {
      mina++;
      flag=30;
    }
    while(d!=0)
    {
      d=d/i;
      mina++;
    }
    cout<<mina<<endl;
    prev_min=min(mina,prev_min);
    count=prev_min;
  }

  if(b>c)
  {
    while(a!=0)
    {
      a=a/b;
      count++;
    }
  }
  cout<<count<<endl;
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

// TC log(a^2)
// ASC O(constant)

// Not Understood this one (Editorial Idea One)

// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long

// void solve()
// {
//   ll a,b,ans=40;
//   cin>>a>>b;
//   // Not understood why i is taken only till 30 clearly
//   for(ll i=0; i<=30; i++)
//   {
//     ll temp=a,count=0;
//     if(b+i==1)
//     continue;
//     while(temp!=0)
//     {
//       temp=temp/(b+i);
//       count++;
//     }
//     count+=i;
//     ans=min(ans,count);
//   }
//   cout<<ans<<endl;
// }

// int main()
// {
//   ll t;
//   cin>>t;
//   while(t--)
//   {
//     solve();
//   }
// }

// TC O(log(a))
// ASC O(constant)