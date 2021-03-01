// TC: O(n*n)
// ASC: O(const)
// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals){
//         sort(intervals.begin(),intervals.end());
//         for(int i=0; i<intervals.size()-1; i++)
//         {
//             for(int j=i+1; j<intervals.size(); j++)
//             {
//                 if(intervals[i][1]<intervals[j][0])
//                 continue;
//                 else if(intervals[i][1]>=intervals[j][0])
//                 {
//                     if(intervals[i][1]<intervals[j][1])
//                     {
//                         intervals[i][1]=intervals[j][1];
//                     }
//                     intervals.erase(intervals.begin()+j);
//                     j--;
//                 }
//             }
//         }
//         return intervals;
//     }
// };

// Done Like Stack 
// TC: O(n*log(n))
// ASC: O(n) for an extra array similar as stack when done using stack
// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         vector<vector<int>>output;
//         if(intervals.size()<=1)
//             return intervals;
//         sort(intervals.begin(),intervals.end());
//         output.push_back(intervals[0]);
//         for(int i=1; i<intervals.size(); i++)
//         {
//           if(output.back()[1]>=intervals[i][0])
//               output.back()[1]=max(output.back()[1],intervals[i][1]);
//           else
//               output.push_back(intervals[i]);
//         }
//         return output;
//     }
// };

// By doing merge operations in place
// TC: O(n*log(n))
// ASC: O(const)

// #include <bits/stdc++.h> 
// using namespace std; 
// class Solution{
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {
//         if(intervals.size()<=1)
//             return intervals;
//         sort(intervals.rbegin(),intervals.rend());
//         int index=0,i=0;
//         for(i=0; i<intervals.size();i++)
//         {
//             if(index!=0 && intervals[index-1][0]<=intervals[i][1])
//             {
//                 while(index!=0 && intervals[index-1][0]<=intervals[i][1])
//                 {
//                     intervals[index-1][0]=min(intervals[i][0],intervals[index-1][0]);
//                     intervals[index-1][1]=max(intervals[i][1],intervals[index-1][1]);
//                     index--;
//                 }
//             }
//             else
//                 intervals[index]=intervals[i];
//             index++;
//         }
//         i--;
//         while(i!=index-1)
//         {
//             intervals.erase(intervals.begin()+i);
//             i--;
//         }
//         return intervals;
//     }
   
// };