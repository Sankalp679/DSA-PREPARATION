// Leetcode Easy One Having M+N space in first array

// 1. Approach using sort
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int j=0;
//         for(int i=m; i<m+n; i++)
//         {
//             nums1[i]=nums2[j];
//             j++;
//         }
//         sort(nums1.begin(),nums1.end());
//         for(int i=0; i<n+m; i++)
//         cout<<nums1[i]<<" ";
//         cout<<endl;
//     }
// };
// TC O((N+M))*log(N+M))
// ASC O(1)

// 2. Efficient One From Leetcode
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
//     {
//         int k,i,j;
//         i=m-1;
//         j=n-1;
//         k=m+n-1;
//         while(i>=0 && j>=0)
//         {
//             if(nums1[i]>nums2[j])
//             {
//                 nums1[k--]=nums1[i--];
//             }
//             else
//             {
//                 nums1[k--]=nums2[j--];
//             }
//         }
//         while(j>=0)
//         {
//             nums1[k--]=nums2[j--];
//         }
//     }  
// };
// TC O(N+M)
// ASC O(1)

// No Extra Space Given In 1st Array Then 

// 1. Approach using sort and extra space O(N+M)
// TC O(N)+O(M)+(N+M)log(N+M)=(N+M)log(N+M)
// ASC O(N+M)

// 2. Approach using insertion sort algorithm
// a] Using proper insertion sort algorithm

// b] Using the modified insertion sort algorithm (TUF Method)
// 3. Approach Using Gap Method (shell sort algorithm)