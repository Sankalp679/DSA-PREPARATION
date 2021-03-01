// Method 1: Naive Recursive Approach. 
// // C program to find Minimum
// // number of jumps to reach end
// #include <limits.h>
// #include <stdio.h>
 
// // Returns minimum number of
// // jumps to reach arr[h] from arr[l]
// int minJumps(int arr[], int l, int h)
// {
//     // Base case: when source and destination are same
//     if (h == l)
//         return 0;
 
//     // When nothing is reachable from the given source
//     if (arr[l] == 0)
//         return INT_MAX;
 
//     // Traverse through all the points
//     // reachable from arr[l]. Recursively
//     // get the minimum number of jumps
//     // needed to reach arr[h] from these
//     // reachable points.
//     int min = INT_MAX;
//     for (int i = l + 1; i <= h && i <= l + arr[l]; i++) {
//         int jumps = minJumps(arr, i, h);
//         if (jumps != INT_MAX && jumps + 1 < min)
//             min = jumps + 1;
//     }
 
//     return min;
// }
 
// // Driver program to test above function
// int main()
// {
//     int arr[] = { 1, 3, 6, 3, 2, 3, 6, 8, 9, 5 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf(
//         "Minimum number of jumps to reach end is %d ",
//         minJumps(arr, 0, n - 1));
//     return 0;
// }

// Complexity Analysis: 
// Time complexity: O(n^n). 
// There are maximum n possible ways to move from a element. So maximum number of steps can be N^N so the upperbound of time complexity is O(n^n)
// Auxiliary Space: O(1). 
// There is no space required (if recursive stack space is ignored).
// Note: If the execution is traced for this method, it can be seen that there will be overlapping subproblems. For example, minJumps(3, 9) will be called two times as arr[3] is reachable from arr[1] and arr[2]. So this problem has both properties (optimal substructure and overlapping subproblems) of Dynamic Programming. 

// #include<bits/stdc++.h>
// using namespace std;
// #define INF 1000000007

// int minJumps(int arr[], int n)
// {
//     vector<int>jump(n);
//     vector<int>last_pos(n);
//     fill(jump.begin(),jump.end(),INF);
//     jump[0]=0;
//     for(int i=1; i<n; i++)
//     {
//         for(int j=0; j<i; j++)
//         {
//             if(j+arr[j]>=i)
//             {
//                 if(jump[j]+1<jump[i])
//                 {
//                     jump[i]=jump[j]+1;
//                     last_pos[i]=j;
//                 }

//             }
//         }
//     }
//     return jump[n-1];
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,i,j;
//         cin>>n;
//         int arr[n];
//         for(int i=0; i<n; i++)
//             cin>>arr[i];
            
//         cout<<minJumps(arr, n)<<endl;
//     }
//     return 0;
// }

// TC O(N^2)
// ASC O(N)
// Complexity Analysis: 
// Time complexity:O(n^2). 
// Nested traversal of the array is needed.
// Auxiliary Space:O(n). 
// To store the DP array linear space is needed.


// Best Approach
// Complexity Analysis:  
// Time complexity: O(n). 
// Only one traversal of the array is needed.
// Auxiliary Space: O(1). 
// There is no space required.

// int minJumps(int arr[], int n)
// {
//    int steps,max_reachable,jumps;
//    steps=arr[0];
//    max_reachable=arr[0];
//    jumps=1;
//    if(n<=1 || arr[0]==0)
//    return -1;
//    for(int i=1; i<n; i++)
//    {
//      if(i==n-1)
//      return jumps;
//      steps--;
//      max_reachable=max(i+arr[i],max_reachable);
//      if(steps==0)
//      {
//        if(max_reachable-i<1)
//        return -1;
//        steps=max_reachable-i;
//        jumps++;
//      }
//    }
//    return -1; 
// }