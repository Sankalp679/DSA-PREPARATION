// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long

// void solve()
// {
//   ll A,B,n,k1,k2,k3;
//   cin>>A>>B>>n;
//   vector<ll>ai(n);
//   vector<ll>bi(n);
//   vector<pair<ll,ll>>v(n);
//   for(ll i=0; i<n; i++)
//   cin>>ai[i];
//   for(ll i=0; i<n; i++)
//   cin>>bi[i];
//   for(ll i=0; i<n; i++)
//   {
//     v[i].first=ai[i];
//     v[i].second=bi[i];
//   }
//   sort(v.begin(),v.end());
//   for(int i=0; i<n; i++)
//   {
//     if(B<=0)
//     {
//       cout<<"NO"<<endl;
//       return;
//     }
//     k1=(v[i].second+A-1)/A;
//     k2=(B+v[i].first-1)/v[i].first;
//     k3=min(k1,k2);
//     B-=k3*(v[i].first);
//     v[i].second-=k3*A;
//   }
//   if(v[n-1].second<=0)
//   cout<<"YES"<<endl;
//   else
//   cout<<"NO"<<endl;
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

// TC n*log(n)
// ASC O(n)

// Efficient Solution But Not Understood

// #include <bits/stdc++.h>
 
// using namespace std;
 
// const int MAXN = 100010;
 
// int A, B, n;
// int a[MAXN], b[MAXN];
 
// void solve()
// {
// 	scanf("%d%d%d", &A, &B, &n);
// 	for (int i = 1; i <= n; ++i)
// 		scanf("%d", &a[i]);
// 	for (int i = 1; i <= n; ++i)
// 		scanf("%d", &b[i]);
// 	int64_t damage = 0;
// 	for (int i = 1; i <= n; ++i)
// 		damage += int64_t(b[i] + A - 1) / A * a[i];
// 	for (int i = 1; i <= n; ++i)
// 		if (B - (damage - a[i]) > 0)
// 		{
// 			puts("YES");
// 			return;
// 		}
// 	puts("NO");
// }
 
// int main()
// {
// 	int tests;
// 	scanf("%d", &tests);
// 	while (tests--) solve();
// 	return 0;
// }

// TC O(n)
// ASC O(1)