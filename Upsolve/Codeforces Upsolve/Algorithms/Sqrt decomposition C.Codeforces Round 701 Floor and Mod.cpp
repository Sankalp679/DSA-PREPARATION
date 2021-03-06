// Causing A TLE as y is upto 10^9
// TC : O(n)
// ASC : O(constant)
// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long

// void solve()
// {
//   ll x,y,ans=0;
//   cin>>x>>y;
//   y=min(y,x-1);
//   for(ll b=1; b<=y; b++)
//     ans+=min((x/(b+1)),b-1);
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

// Using Sqrt Decomposition
