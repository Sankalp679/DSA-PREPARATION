// Note
// The first two approaches mentioned do not satisfy the constraints given in the prompt, but they are solutions that you might be likely to come up with during a technical interview. As an interviewer, I personally would not expect someone to come up with the cycle detection solution unless they have heard it before.
// Proof
// Proving that at least one duplicate must exist in nums is simple application of the pigeonhole principle. Here, each number in nums is a "pigeon" and each distinct number that can appear in nums is a "pigeonhole". Because there are n+1n+1 numbers are nn distinct possible numbers, the pigeonhole principle implies that at least one of the numbers is duplicated.

// 1. Approach using map

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int a=0;
//         map<int,int>v;
//         for(auto x:nums)
//         v[x]++;
//         for(auto x:v)
//         {
//             if(x.second>=2)
//             a=x.first;
//         }
//        return a; 
//     }
// };
// TC O(N*log(N))
// ASC O(N) Map tak normally O(N) space 
// If we do the same with frequency array then
// TC gets reduced to O(N)
// ASC O(N) for the frequency array

// 2. Approach using sort

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//        int a=0;
//        sort(nums.begin(),nums.end());
//        for(int i=0; i<nums.size()-1; i++)
//            if(nums[i+1]==nums[i])
//            {
//                a=nums[i];
//                break;
//            }
//         return a;
//     }
// };
// TC O(N*log(N))
// ASC O(1)
// But the original array gets distorted.
// Complexity Analysis
// Time complexity : O(N*log(N))
// The sort invocation costs O(N*log(N)) time in Python and Java, so it dominates the subsequent linear scan.
// Space complexity : O(1) or O(N)
// Here, we sort nums in place, so the memory footprint is constant. If we cannot modify the input array, then we must allocate linear space for a copy of nums and sort that instead.

// 3. Approach using unordered set

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         unordered_set<int>v;
//         for(int i=0; i<nums.size(); i++)
//         {
//             if(v.find(nums[i])!=v.end())
//                 return nums[i];
//             v.insert(nums[i]);
//         }
//         return -1;
//     }
// };
// Complexity Analysis
// An unordered_set is implemented using a hash table where keys are hashed into indices of a hash table so that the insertion is always randomized. All operations on the unordered_set takes constant time O(1) on an average which can go up to linear time O(n) in worst case which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation.
// Set is an ordered sequence of unique keys whereas unordered_set is a set in which key can be stored in any order, so unordered. Set is implemented as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal). The time complexity of set operations is O(log n) while for unordered_set, it is O(1).
// TC O(N)
// ASC O(N)

// 4. Approach using Floyd's Tortoise and Hare (Cycle Detection)
// Algorithm
// Floyd's algorithm consists of two phases and uses two pointers, usually called tortoise and hare.
// In phase 1, hare = nums[nums[hare]] is twice as fast as tortoise = nums[tortoise]. Since the hare goes fast, it would be the first one who enters the cycle and starts to run around the cycle. At some point, the tortoise enters the cycle as well, and since it's moving slower the hare catches the tortoise up at some intersection point. Now phase 1 is over, and the tortoise has lost.
// Note that the intersection point is not the cycle entrance in the general case.
// To compute the intersection point, let's note that the hare has traversed twice as many nodes as the tortoise,2d(turtoise)=d(hare), that means
// 2(F + a) = F + nC + a, where n is some integer.
// Hence the coordinate of the intersection point is F + a = nC.
// In phase 2, we give the tortoise a second chance by slowing down the hare, so that it now moves with the speed of tortoise: tortoise = nums[tortoise], hare = nums[hare]. The tortoise is back at the starting position, and the hare starts from the intersection point.
// pic. Let's show that this time they meet at the cycle entrance after F steps.
// The tortoise started from zero, so its position after F steps is F.
// The hare started at the intersection point F + a = nC, so its position after F steps is nC + F, that is the same point as F.
// So the tortoise and the (slowed down) hare will meet at the entrance of the cycle.

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//        int turtle=nums[0];
//        int hare=nums[0];
//        do
//        {
//           turtle=nums[turtle];
//           hare=nums[nums[hare]];
//        }while(turtle!=hare);
//        turtle=nums[0];
//        while(turtle!=hare)
//        {
//           turtle=nums[turtle];
//           hare=nums[hare];
//        }
//             return hare;
//     }
// };
// TC O(N) For detailed analysis, refer to Linked List Cycle II.
// ASC O(1) For detailed analysis, refer to Linked List Cycle II.