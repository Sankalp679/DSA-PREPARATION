// O(N) Approach

// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long

// int main()
// {
//   ll n,q,k;
//   cin>>n>>q>>k;
//   vector<ll>a(n);
//   for(auto &x: a)
//   cin>>x;
//   vector<ll>dis(n);
//   vector<ll>dissum(n);
//   for(ll i=0;i<n;i++)
//   {
//     if(n!=1)
//     {
//       if(i==0)
//       {
//         dis[i]=dis[i+1]-2;
//       }
//       if(i!=0 && i!=n-1)
//       {
//         dis[i]=dis[i+1]-dis[i-1]-2;
//       }
//     }
//   }
//   dissum[0]=0;
//   for(ll i=1; i<n-1; i++)
//   {
//     dissum[i]=dissum[i-1]+dis[i];
//   }
//   while(q--)
//   {
//     ll l,r,ans;
//     cin>>l>>r;
//     l--;
//     r--;
//     if(l==r)
//     cout<<k-1<<endl;
//     else
//     {
//       ans+=a[l+1]-2+k-1-a[r-1];
//       ans+=dissum[r]-dissum[l-1];
//     }
//   }
// }