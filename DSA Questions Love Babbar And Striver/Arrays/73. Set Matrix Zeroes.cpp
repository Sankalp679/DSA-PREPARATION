// First Approach (mine)
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) 
//     {
//         set<int>row;
//         set<int>column;
//         for(int i=0; i<matrix.size(); i++)
//         {
//             for(int j=0; j<matrix[i].size(); j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     row.insert(i);
//                     column.insert(j);
//                 }
//             }
//         }

//         for (auto itr = row.begin(); itr != row.end(); itr++) 
//         { 
//             for(int i=0; i<matrix.size(); i++)
//             {
//                 for(int j=0; j<matrix[i].size(); j++)
//                 {
//                     if(i==*itr)
//                     {
//                        matrix[i][j]=0;
//                     }
//                 }
//             }
//         } 
        
//         for (auto itr = column.begin(); itr != column.end(); itr++) 
//         { 
//             for(int i=0; i<matrix.size(); i++)
//             {
//                 for(int j=0; j<matrix[i].size(); j++)
//                 {
//                     if(j==*itr)
//                     {
//                        matrix[i][j]=0;
//                     }
//                 }
//             }
//         } 
//     }
// };
// TC : O(N*M*N)+O(M*M*N)
// ASC : O(N+M)

// Second Approach 
// TC : O(N*M)*(O(N+M))
// ASC : O(1)
// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix){
//         for(int i=0; i<matrix.size(); i++)
//         {
//             for(int j=0; j<matrix[i].size(); j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     matrix[i][j]=-1;
//                     for(int k=0; k<matrix[i].size(); k++)
//                     {
//                         if(matrix[i][k]==0)
//                             continue;
//                         else
//                         matrix[i][k]=-1;  
//                     }
//                     for(int l=0; l<matrix.size(); l++)
//                     {
//                         if(matrix[l][j]==0)
//                             continue;
//                         else
//                             matrix[l][j]=-1;  
//                     }
//                 }
//             }
//         }
        
//          for(int i=0; i<matrix.size(); i++)
//          {
//               for(int j=0; j<matrix[i].size(); j++)
//               {
//                     if(matrix[i][j]==-1)
//                         matrix[i][j]=0;
//               }
//          }
//     }
// };

// Third Approach(using dummy array)
// TC : O(N*M + N*M) For two time traversal
// ASC : O(N)+O(M) (for two dummy array)

// Fourth Approach
// TC : O(N*M+ N*M)
// ASC : O(1)