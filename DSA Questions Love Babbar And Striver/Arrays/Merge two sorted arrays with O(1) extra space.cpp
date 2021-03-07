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
// TC O(N*M)
// ASC O(1)
// #include <bits/stdc++.h>
// using namespace std;

// class Solution
// {
// public:
// 	void merge(int arr1[], int arr2[], int n, int m) 
// 	{
// 	    int i,j,l;
// 	    i=n-2;
// 	    j=m-1;
// 	    for(int k=j; k>=0; k--)
// 	    {
//          int last=arr1[i+1];
// 	        for(l=i; l>=0; l--)
// 	        {
// 	            if(arr1[l]>arr2[k])
// 	            arr1[l+1]=arr1[l];
// 	            else 
// 	            break;
// 	        }
// 	        if(l!=n-2 || last>arr2[k])
// 	        {
// 	            arr1[l+1]=arr2[k];
// 	            arr2[k]=last;
// 	        }
// 	    }
// 	}
// };

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m, i;
//         cin >> n >> m;
//         int arr1[n], arr2[m];
//         for (i = 0; i < n; i++) {
//             cin >> arr1[i];
//         }
//         for (i = 0; i < m; i++) {
//             cin >> arr2[i];
//         }
//         Solution ob;
//         ob.merge(arr1, arr2, n, m);
//         for (i = 0; i < n; i++) {
//             cout << arr1[i] << " ";
//         }
//         for (i = 0; i < m; i++) {
//             cout << arr2[i] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// } 

// b] Using the modified insertion sort algorithm (TUF Method)
// TC O(N)*Mlog(M)
// ASC O(1)
// class Solution{
// public:
// 	void merge(int arr1[], int arr2[], int n, int m) 
// 	{
// 	    for(int i=0; i<n; i++)
// 	    {
// 	        if(arr1[i]>arr2[0])
// 	        {
//     	        swap(arr1[i],arr2[0]);
//     	        sort(arr2,arr2+m);
// 	        }
// 	    }
// 	}
// };

// 3. Approach Using Gap Method (shell sort algorithm)
