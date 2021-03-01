// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

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
        sort012(a, n);
        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

// Complexity Analysis:
// Time Complexity: O(n*log(n)).
// Space Complexity: O(1).
// As no extra space is required.
// void sort012(int a[], int n)
// {
//     sort(a,a+n);
// }

// Complexity Analysis:
// Time Complexity: O(n).
// Only two traversals of the array is needed.
// Space Complexity: O(1).
// As no extra space is required.
// void sort012(int a[], int n)
// {
//     int cnt0=0,cnt1=0,cnt2=0;
//     for(int i=0; i<n; i++)
//     {
//       if(a[i]==0)
//       cnt0++;
//       else if(a[i]==1)
//       cnt1++;
//       else if(a[i]==2)
//       cnt2++;
//     }
//     for(int i=0; i<cnt0; i++)
//       a[i]=0;
//     for(int i=cnt0; i<n-cnt2; i++)
//       a[i]=1;
//     for(int i=n-cnt2; i<n; i++)
//       a[i]=2;
// }

// Dutch National Flag Algorithm OR 3-way Partitioning
// Complexity Analysis:
// Time Complexity: O(n).
// Only one traversal of the array is needed.
// Space Complexity: O(1).
// No extra space is required.
// The above code performs unnecessary swaps for some inputs which are not really required. It can be modified to reduce some swaps.

void sort012(int a[], int n)
{
    int mid=0,low=0,high=n-1;
    while(mid<=high)
    {
      switch(a[mid])
      {
        case 0:
        swap(a[low++],a[mid++]);
        break;
        case 1:
        mid++;
        break;
        case 2:
        swap(a[high--],a[mid]);
      }
    }
}
