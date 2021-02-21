// WA TC 55

// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long

// void solve()
// {
//   ll n;
//   cin>>n;
//   vector<ll>v(n+2);
//   v[0]=v[n+1]=1e6;
//   ll l=1,r=n;
//   cout<<v[0]<<" "<<v[n+1]<<endl;
//   fflush(stdout);
//   while(l<=r)
//   {
//     ll m;
//     m=(l+r)/2;
//     if(v[m]==0)
//     {
//       cout.flush()<<"? "<<m<<endl;
//       cin>>v[m];
//     }
//     if(v[m-1]==0)
//     {
//       cout.flush()<<"? "<<m-1<<endl;
//       cin>>v[m-1];
//     }
//     if(v[m+1]==0)
//     {
//       cout.flush()<<"? "<<m+1<<endl;
//       cin>>v[m+1];
//     }
//     if(v[m]<min(v[m-1],v[m+1]))
//     {
//       cout.flush()<<"! "<<m<<endl;
//       break;
//     }
//     if(v[m]>v[m-1])
//     r=m-1;
//     else
//     l=m+1;
// }
// }

// int main()
// {
//   ll t=1;
//   while(t--)
//   {
//     solve();
//   }
// }

// TC O(n)
// ASC O(n)