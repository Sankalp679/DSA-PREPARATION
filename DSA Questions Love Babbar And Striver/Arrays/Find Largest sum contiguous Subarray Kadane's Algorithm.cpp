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

// NOT UNDERSTOOD RECURSION
// Maximum Subarray Sum using Divide and Conquer algorithm

// #include<cmath>
// #include<iostream>
// #include<climits>
// using namespace std;

// int Max_Subarray_Sum(int arr[],int n)	
// {
// 	if(n==1)
// 	{
// 		return arr[0];
// 	}
// 	int m = n/2;
// 	int left_MSS = Max_Subarray_Sum(arr,m);
// 	int right_MSS = Max_Subarray_Sum(arr+m,n-m);
// 	int leftsum = INT_MIN, rightsum = INT_MIN, sum=0;
// 	for(int i=m;i < n; i++)
// 	{
// 		sum += arr[i];
// 		rightsum = max(rightsum,sum);
// 	}
// 	sum = 0;
// 	for(int i= (m-1);i >= 0; i--)
// 	{
// 		sum += arr[i];
// 		leftsum = max(leftsum,sum);
// 	}
// 	int ans = max(left_MSS,right_MSS);
// 	return max(ans,leftsum+rightsum);
// }


// int main(int argc, char const *argv[])
// {
// 	int arr[] = {3,-2,5,-1};
// 	cout<<Max_Subarray_Sum(arr,4)<<"\n";
// 	return 0;
// }

// Time Complexity: maxSubArraySum() is a recursive method and time complexity can be expressed as following recurrence relation.
// T(n) = 2T(n/2) + Θ(n)
// The above recurrence is similar to Merge Sort and can be solved either using Recurrence Tree method or Master method. It falls in case II of Master Method and solution of the recurrence is Θ(nLogn).


// Most Efficient Approach O(n) maxSubArraySum
// Kadane’s Algorithm:

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int N,s,max_ending_here,start,end;
//   start=end=s=max_ending_here=0;
//   cin>>N;
//   vector<int>v(N);
//   for(int i=0; i<N; i++)
//     cin>>v[i];
//   int max_so_far=v[0];
//   for(int i=0; i<N; i++)
//   {
//     max_ending_here+=v[i];
//     if(max_ending_here<0)
//     {
//       max_ending_here=0;
//       s=i+1;
//     }
//     else if(max_so_far<max_ending_here)
//     {
//         max_so_far=max(max_so_far,max_ending_here);
//         start=s;
//         end=i;
//     }
//   }
//   cout<<"max_so_far :"<<max_so_far<<endl;
//   cout<<"start :"<<start<<" end :"<<end<<endl;
// }

// Another Compact Solution But will not able to find start and end indices using this method
// for(int i=0; i<N; i++){
// max_ending_here=max(v[i],max_ending_here);
// max_so_far=max(max_ending_here,max_so_far);
// }

// Time Complexity: O(n)
// Algorithmic Paradigm: Dynamic Programming
