#include<bits/stdc++.h>
using namespace std;

// Mine Approach(Brute Force)
// int maxSubarraySum(int arr[], int n){
//  vector<int>u;
//     for(int i=0; i<n; i++)
//     {
//       vector<int>v;
//       int sum=0;
//       v.push_back(arr[i]);
//       for(int j=i; j<n; j++)
//       {
//           sum=sum+arr[j];
//           v.push_back(sum);
//       }
//       u.push_back(*max_element(v.begin(),v.end()));
//     }
//     return *max_element(u.begin(),u.end());
// }
// TC O(n^2)
// SC O(n)

// Improved Version (BRUTE FORCE)
// int maxSubarraySum(int arr[], int n)
// {
//     int ans=INT_MIN;
//     for(int i=0; i<n; i++)
//     {
//       int sum=0;
//       for(int j=1; j<=n; j++)
//       {
//           if(i+j>n)
//           break;
//           sum=sum+arr[j+i-1];
//           ans=max(sum,ans);
//       }
//     }
//     return ans;
// }

// int main()
// {
//     int t,n;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++)
//             cin>>a[i]; 
//         cout << maxSubarraySum(a, n) << endl;
//     }
// }

// TC O(n^2)
// SC O(1)

