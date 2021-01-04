// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void negpos(int[],int);

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        negpos(a, n);
        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }
        cout << endl;
    }
    return 0;
}

// My approach
// Complexity Analysis:
// Time Complexity: O(n).
// Only one traversal of the array is needed.
// Space Complexity: O(1).
// No extra space is required.
// void negpos(int a[], int n)
// {
//   int mid=0,low=0;
//   while(mid<n)
//   {
//     int value;
//     a[mid]>0 ? value=1 : value=0;
//     switch(value)
//     {
//       case 0:
//       swap(a[low++],a[mid++]);
//       break;
//       case 1:
//       mid++;
//       break;
//     }
//   }
// }
// 1
// 9
// -12 11 -13 -5 6 -7 5 -3 7
// low 1 mid 1
// low 1 mid 2
// low 2 mid 3 swap(11,-13)
// -12 -13 11 -5 6 -7 5 -3 7
// low 3 mid 4 swap(11,-5)
// -12 -13 -5 11 6 -7 5 -3 7
// low 3 mid 5
// low 4 mid 6 swap(11,-7)
// -12 -13 -5 -7 6 11 5 -3 7
// low 4 mid 7 swap (6 -3)
// -12 -13 -5 -7 -3 11 5 6 7

// } Driver Code Ends
// Dutch National Flag Algorithm OR 3-way Partitioning
// My approach
// Complexity Analysis:
// Time Complexity: O(n).
// Only one traversal of the array is needed.
// Space Complexity: O(1).
// No extra space is required.
// void negpos(int a[], int n)
// {
//   int low=0,high=n-1;
//   while(low<=high)
//   {
//     int value;
//     a[low]>0 ? value=1 : value=0;
//     switch(value)
//     {
//       case 0:
//       low++;
//       break;
//       case 1:
//       swap(a[low],a[high--]);
//       break;
//     }
//   }
// }
// // Two Colours
// It is easiest to consider just two "colours", {zero,one}, first. The algorithm maintains three sections (possibly empty) in the array a[ ]:

// a[1..Lo-1] zeroes
// a[Lo..Hi] unknown
// a[Hi+1..N] ones
// The unknown section is shrunk while maintaining these conditions:
// Lo := 1; Hi := N;
// while Lo <= Hi do
// Invariant: a[1..Lo-1] are all zero and a[Hi+1..N] are all one; a[Lo..Hi] are unknown.
// if a[Lo] = 0 then Lo++
// else swap a[Lo] and a[Hi]; Hi--
// --- 2-way Partitioning ---

// Quick Select
// Complexity Analysis:
// Time Complexity: O(n).
// One traversal of the array is needed.
// Space Complexity: O(1).
// void negpos(int a[], int n)
// {
//   int pivot=0,j=0;
//   for(int i=0; i<n; i++)
//   {
//     if(a[i]<pivot)
//     {
//       if(i!=j)
//       {
//         swap(a[j++],a[i]);
//       }
//     }
//   }
// }

// Two Pointer Approach
// This is an in-place rearranging algorithm for arranging the positive and negative numbers where the order of elements is not maintained.
// Time Complexity: O(N)
// Auxiliary Space: O(1)
// The problem becomes difficult if we need to maintain the order of elements.
void negpos(int a[], int n)
{
  int left=0,right=n-1;
  while(left<=right)
  {
    if(a[left]>0 && a[right]>0)
      right--;
    else if(a[left]>0 && a[right]<0)
      swap(a[left++],a[right--]);
      // int temp=arr[left];
      // arr[left]=arr[right];
      // arr[right]=temp;
      // left+=1;
      // right-=1;
    else if(a[left]<0 && a[right]<0)
      left++;
    else
    {
      left++;
      right--;
    }
  }
}

// Complexity Analysis:
// Time Complexity: O(n).
// Two traversal of the array is needed.
// Space Complexity: O(n).
// extra space is required.
// void negpos(int a[], int n)
// {
//   int j=0,neg=0,b[n];
//   for(int i=0; i<n; i++)
//   {
//     b[i]=a[i];
//     if(a[i]<0)
//     neg++;
//   }
//   for(int i=0; i<n; i++)
//   {
//     if(b[i]<0)
//     a[j++]=b[i];
//     else if(b[i]>0)
//     a[neg++]=b[i];
//   }
// }


