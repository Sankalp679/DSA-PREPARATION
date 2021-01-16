// Iterative Approach
// #include <bits/stdc++.h> 
// using namespace std; 

// class Solution
// {   
// public:     
//     vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
//     {
//        int last_row=c-1,last_col=r-1,l=0,k=0;
//        vector<int>v;
//        while(k<=last_row && l<=last_col)
//        {
//            for(int i=l; i<=last_col; i++)
//            v.push_back(matrix[k][i]);
//            k++;
//            for(int i=k; i<=last_row; i++)
//            v.push_back(matrix[i][last_col]);
//            last_col--;
//            if(k<=last_row)
//            {
//                for(int i=last_col; i>=l; i--)
//                v.push_back(matrix[last_row][i]);
//                last_row--;
//            }
//            if(l<=last_col)
//            {
//                for(int i=last_row; i>=k; i--)
//                v.push_back(matrix[i][l]);
//                l++;
//            }
//        }
//        return v;
//     }
// };

// int main() {
//     int t;
//     cin>>t;
//     while(t--) 
//     {
//         int r,c;
//         cin>>r>>c;
//         vector<vector<int> > matrix(r); 
//         for(int i=0; i<r; i++)
//         {
//             matrix[i].assign(c, 0);
//             for( int j=0; j<c; j++)
//             {
//                 cin>>matrix[i][j];
//             }
//         }
//         Solution ob;
//         vector<int> result = ob.spirallyTraverse(matrix, r, c);
//         for (int i = 0; i < result.size(); ++i)
//                 cout<<result[i]<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

// Complexity Analysis: 
// Time Complexity: O(m*n). 
// To traverse the matrix O(m*n) time is required.
// Space Complexity: O(1). 
// No extra space is required.

// Recursive Approach

// #include <bits/stdc++.h> 
// using namespace std; 

// class Solution
// {   
// public:     
//     void spirallyTraverse(vector<vector<int>>&matrix, int r, int c , int l, int k) 
//     {
//       if (l>=c &&  k>=r) 
//       return; 
//       for(int i=l; i<c; i++)
//       cout<<matrix[k][i]<<" ";
//       for(int i=k+1; i<r; i++)
//       cout<<matrix[i][c-1]<<" ";
//       if(k!=r-1)
//       for(int i=c-2; i>=l; i--)
//       cout<<matrix[r-1][i]<<" ";
//       if(l!=c-1)
//       for(int i=r-2; i>=k+1; i--)
//       cout<<matrix[i][l]<<" ";
//       spirallyTraverse(matrix,r-1,c-1,l+1,k+1);
//     }
// };

// int main() 
// {
//     int t;
//     cin>>t;
//     while(t--) 
//     {
//         int r,c,l,k;
//         l=0,k=0;
//         cin>>r>>c;
//         vector<vector<int>>matrix(r,vector<int>(c)); 
//         for(int i=0; i<r; i++)
//         {
//             for( int j=0; j<c; j++)
//             {
//                 cin>>matrix[i][j];
//             }
//         }
//         Solution ob;
//         ob.spirallyTraverse(matrix, r, c, l, k);
//         cout<<endl;
//     }
//     return 0;
// }

// Time Complexity: O(m*n). 
// To traverse the matrix O(m*n) time is required.
// Space Complexity: O(1). 
// No extra space is required.

// Method 3: (DFS Recursive Approach)
// After DFS
