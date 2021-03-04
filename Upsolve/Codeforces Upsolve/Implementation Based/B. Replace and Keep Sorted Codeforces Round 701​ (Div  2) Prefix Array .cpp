// TC: O(N)
// ASC: O(2*N)

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
//   for(ll i=1;i<n-1;i++)
//   {
//     dis[i]=a[i+1]-a[i-1]-2;
//   }
//   dissum[0]=0;
//   for(ll i=1; i<n-1; i++)
//   {
//     dissum[i]=dissum[i-1]+dis[i];
//   }
//   while(q--)
//   {
//     ll l,r,ans=0;
//     cin>>l>>r;
//     l--;
//     r--;
//     if(l==r)
//       cout<<k-1<<endl;
//     else
//     {
//       ans+=a[l+1]-2+k-1-a[r-1];
//       ans+=dissum[r-1]-dissum[l];
//       cout<<ans<<endl;
//     }
//   }
// }

// TC : O(n+q)
// ASC : O(const)
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
//   while(q--)
//   {
//     ll l,r,ans=0;
//     cin>>l>>r;
//     l--;
//     r--;
//     cout<<k-a[r]+a[l]-1+2*(a[r]-a[l]-1-(r-l-1))<<endl;
//   }
// }
