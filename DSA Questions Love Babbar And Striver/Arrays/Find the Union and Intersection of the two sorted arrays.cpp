#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Set is implemented as a balanced tree structure that is why it is possible to maintain order between the elements (by specific tree traversal). The time complexity of set operations is O(log n) while for unordered_set, it is O(1).
// Union
// void solve()
// {
//     int N,M;
//     cin>>N>>M;
//     set<int>s;
// 	for(int i=0; i<N; i++)
// 	{
// 	    int input;
// 	    cin>>input;
//     	s.insert(input);
// 	}
// 	for(int j=0; j<M; j++)
// 	{
// 	    int input1;
// 	    cin>>input1;
//     	s.insert(input1);
// 	}
// 	cout<<s.size()<<endl;
// }

// Intersection
// Complexity is linear in the distance between [first1, last1) and [first2, last2): performs up to
// 2*(count1+count2)-1 comparisons. Where count1 = last1- first1 and count2 = last2- first2

// void solve()
// {
    // int N,M;
    // cin>>N>>M;
    // int arr[N];
    // int arr1[M];
//     vector<int>v(5);
//     vector<int>::iterator ls,it;
	// for(int i=0; i<N; i++)
	// cin>>arr[i];
	// for(int j=0; j<M; j++)
	// cin>>arr1[j];
// 	sort(arr,arr+N);
// 	sort(arr1,arr1+M);
// 	ls=set_intersection(arr,arr+N,arr1,arr1+M,v.begin());
// 	cout<<ls-v.begin()<<endl;
//   for (it = v.begin(); it != ls; ++it) 
//   cout << ' ' << *it; 
//   cout << "\n"; 
// }

// Time Complexity O(N+M)
// void solve()
// {
//     int N,M;
//     cin>>N>>M;
//     int arr[N];
//     int arr1[M];
//     for(int i=0; i<N; i++)
//     cin>>arr[i];
//     for(int j=0; j<M; j++)
//     cin>>arr1[j];
//     int i=0,j=0;
//     while(i<N && j<M)
//     {
//       if(arr[i]<arr1[j])
//       cout<<arr[i++]<<" ";
//       else if(arr[i]>arr1[j])
//       cout<<arr1[j++]<<" ";
//       else
//       {
//         cout<<arr1[j++]<<" ";
//         i++;
//       }
//     }
//     while(i<N)
//     cout<<arr[i++]<<" ";
//     while(j<M)
//     cout<<arr1[j++]<<" "; 
// }

// Time Complexity O(N+M)
// void solve()
// {
//     int N,M;
//     cin>>N>>M;
//     int arr[N];
//     int arr1[M];
//     for(int i=0; i<N; i++)
//     cin>>arr[i];
//     for(int j=0; j<M; j++)
//     cin>>arr1[j];
//     int i=0,j=0;
//     while(i<N && j<M)
//     {
//       if(arr[i]<arr1[j])
//       i++;
//       else if(arr[i]>arr1[j])
//       j++;
//       else
//       {
//         cout<<arr1[j++]<<" ";
//         i++;
//       }
//     }
// }

// Duplicates are also present in array
// Intersection Time Complexity O(N+M) Space Complexity O(N+M);
// void solve()
// {
//     int N,M;
//     cin>>N>>M;
//     int arr[N];
//     int arr1[M];
//     for(int i=0; i<N; i++)
//     cin>>arr[i];
//     for(int j=0; j<M; j++)
//     cin>>arr1[j];
//     int i=0,j=0;
//     while(i<N && j<M)
//     {
//       while(i<N-1 && arr[i]==arr[i+1])
//       {
//         i++;
//       }
//       while(j<M-1 && arr1[j]==arr1[j+1])
//       {
//         j++;
//       }
//       if(arr[i]<arr1[j])
//       i++;
//       else if(arr[i]>arr1[j])
//       j++;
//       else
//       {
//         cout<<arr1[j++]<<" ";
//         i++;
//       }
//     }
// }

// Duplicates are also present in array
// Union TC O(N+M) Space Complexity O(N+M)
// void solve()
// {
//     int N,M;
//     cin>>N>>M;
//     int arr[N];
//     int arr1[M];
//     for(int i=0; i<N; i++)
//     cin>>arr[i];
//     for(int j=0; j<M; j++)
//     cin>>arr1[j];
//     int i=0,j=0;
//     while(i<N && j<M)
//     {
//       while(i<N-1 && arr[i]==arr[i+1])
//       {
//         i++;
//       }
//       while(j<M-1 && arr1[j]==arr1[j+1])
//       {
//         j++;
//       }
//       if(arr[i]<arr1[j])
//       cout<<arr[i++]<<" ";
//       else if(arr[i]>arr1[j])
//       cout<<arr1[j++]<<" ";
//       else
//       {
//         cout<<arr1[j++]<<" ";
//         i++;
//       }
//     }
//     while(i<N)
//     cout<<arr[i++]<<" ";
//     while(j<M)
//     cout<<arr1[j++]<<" "; 
// }

// Another approach that is useful when difference between sizes of two given arrays is significant. 
// The idea is to iterate through the shorter array and do a binary search for every element of 
// short array in big array (note that arrays are sorted). Time complexity of this solution is O(min(mLogn, nLogm)). 
// This solution works better than the above approach when ratio of larger length to smaller is more than logarithmic 
// order.

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
	return 0;
}