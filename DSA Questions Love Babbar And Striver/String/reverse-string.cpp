// Speaking seriously, let's use this problem to discuss two things:
// Does in-place mean constant space complexity?
// Two pointers approach.
// Approach 1: Recursion, In-Place, O(N) Space
// Does in-place mean constant space complexity?
// No. By definition, an in-place algorithm is an algorithm which transforms input using no auxiliary data structure.
// The tricky part is that space is used by many actors, not only by data structures. The classical example is to use 
// recursive function without any auxiliary data structures.
// Is it in-place? Yes.
// Is it constant space? No, because of recursion stack.

//  Two pointers approach
// class Solution 
// {
// public:
//     void reverseString(vector<char>& s){
//         int end=s.size()-1,start=0;
//         while(start<end)
//         {
//             int temp=s[start];
//             s[start++]=s[end];
//             s[end--]=temp;
//         }
//     }
// };

// Using XOR Swap Algorithm
// class Solution 
// {
// public:
//     void reverseString(vector<char>& s){
//         int end=s.size()-1,start=0;
//         while(start<end)
//         {
//             s[start]=s[start]^s[end];
//             s[end]=s[start]^s[end];
//             s[start]=s[start]^s[end];
//             start++;
//             end--;
//         }
//     }
// };
// Complexity Analysis
// Time complexity : O(N) to swap N/2 element.
// Space complexity : O(1), it's a constant space solution.

// Recursion
// class Solution 
// {
// public:
//     void reverseString(vector<char>& s){
//         helper(s,0,s.size()-1);
//     }

//     void helper(vector<char>&s,int start,int end)
//     {
//         if(start>=end)
//         return;
//         s[start]=s[start]^s[end];
//         s[end]=s[start]^s[end];
//         s[start]=s[start]^s[end];
//         helper(s,start+1,end-1);
//     }
// };
// Complexity Analysis
// Time complexity : O(N) time to perform N/2 swaps.
// Space complexity : O(N) to keep the recursion stack.

// Using Inbuilt function
// class Solution 
// {
// public:
//     void reverseString(vector<char>& s){
//         reverse(s.begin(),s.end());
//     }
// };
// The time complexity is O(n)
// O(1) because we used constant extra space.
