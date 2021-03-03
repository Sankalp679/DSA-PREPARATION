// TC: O(n)
// ASC: O(N) where N are number of groups

// class Solution{
// public:
//     int countBinarySubstrings(string s) {
//         int count1=1,count2=0,value=0;
//         vector<int>v;
//         char first=s[0];
//         for(int i=1; i<s.length(); i++)
//         {
//             if(s[i]==first)
//             {
//                 if(count2>0)
//                 {
//                     v.push_back(count2);
//                     count2=0;
//                 }
//                 count1++;
//             }
//             else
//             {
//                 if(count1>0)
//                 {
//                     v.push_back(count1);
//                     count1=0;
//                 }
//                 count2++;
//             }
//         }
//         v.push_back(max(count1,count2));
//         for(int i=0; i<v.size()-1; i++)
//         {
//             value+=min(v[i],v[i+1]);
//         }
//         return value;
//     }
// };

// TC : O(n)
// ASC : O(N)  O(N) where N is the length of the string
// More Small One
// class Solution {
// public:
//     int countBinarySubstrings(string s) {
//         vector<int>groups(s.length());
//         int t=0,ans=0;
//         groups[t]=1;
//         for(int i=1; i<s.length(); i++)
//         {
//             if(s[i]!=s[i-1])
//                 groups[++t]=1;  // ++i,i++ concept
//             else
//                 groups[t]++;
//         }
//         for(int i=0; i<t; i++)
//             ans+=min(groups[i],groups[i+1]);
//         return ans;
//     }
// };

// TC : O(N)
// ASC: O(const)
// Linear Scan

// class Solution {
// public:
//     int countBinarySubstrings(string s) {
//         int prev=0,curr=1,ans=0;
//         for(int i=1; i<=s.length(); i++)
//         {
//             if(s[i]!=s[i-1])
//             {
//                 ans+=min(prev,curr);
//                 prev=curr;
//                 curr=1;
//             }   
//             else
//                 curr++;
//         }
//         return ans;
//     }
// };