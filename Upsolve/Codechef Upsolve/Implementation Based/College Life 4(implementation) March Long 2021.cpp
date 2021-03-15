// TC : O(n)
// ASC : O(const)
// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long

// void solve()
// {
//   ll N,E,H,A,B,C,ans=2e18,flag=50;
//   cin>>N>>E>>H>>A>>B>>C;
//   for(ll cakes=0; cakes<=N; cakes++)
//   {
//     ll maxO,maxM;
//     maxO=maxM=0;
//     if(E<cakes ||  H<cakes)
//     break;
//     maxO=(E-cakes)/2;
//     maxM=(H-cakes)/3;
//     if(cakes+maxO+maxM<N)
//     {
//       flag=-1;
//       continue;
//     }
//     else
//     flag=0;
//     if(A<B)
//     {
//       maxO=min(N-cakes,maxO);
//       maxM=N-cakes-maxO;
//     }
//     else
//     {
//       maxM=min(N-cakes,maxM);
//       maxO=N-cakes-maxM;
//     }
//     ans=min(ans,maxO*A+maxM*B+cakes*C);
//   }
//   if(flag==-1)
//   ans=-1;
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
//   return 0;
// }