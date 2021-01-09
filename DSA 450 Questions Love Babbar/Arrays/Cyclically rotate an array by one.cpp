#include <stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

// Basic Approach
// Time Complexity: O(n) As we need to iterate through all the elements
// Auxiliary Space: O(1)
// void solve()
// {
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     for(ll i=0; i<n; i++)
//     {
//         cin>>v[i];
//     }
//     ll a= v[n-1];
//     for(ll i=n-1; i>0; i--)
//     {
//        v[i]=v[i-1];
//     }
//     v[0]=a;
//     for(auto x:v)
//     cout<<x<<" ";
//     cout<<endl;
// }

// TC O(N) ASC O(constant)
// Using Reversal Algorithm we can rotate by d elements
// rotate(arr[], d, n) For anticlockwise
//   reverse(arr[], 1, d) ;
//   reverse(arr[], d + 1, n);
//   reverse(arr[], 1, n);
// Let AB are the two parts of the input array where A = arr[0..d-1] and B = arr[d..n-1]. The idea of the algorithm is : 
// Reverse A to get ArB, where Ar is reverse of A.
// Reverse B to get ArBr, where Br is reverse of B.
// Reverse all to get (ArBr) r = BA.
// 1 2 3 4 5
// 1 2  3 4 5
// 2 1  5 4 3
// 3 4  5 1 2

// #include <stdio.h>
// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;

// void print_array(vector<ll>v)
// {
//     for(auto x:v)
//         cout<<x<<" ";
//     cout<<endl;
// }

// TC O(N)
// ASC O(1)
// void reverse_array(vector<ll>&v,ll start,ll end)
// {
//     while(start<end)
//     {
//         //  cout<<start<<" "<<end<<endl;
//         ll temp;
//         temp=v[start];
//         v[start]=v[end];
//         v[end]=temp;
//         start++;
//         end--;
//     }
//     // print_array(v);
// }

// void right_rotate(vector<ll>v,ll d, ll n)
// {
// //    if d is greater than length of array n;
//  if(d>n)
//    d=n%d;
//  reverse_array(v,0,n-d-1);
//  reverse_array(v,n-d,n-1);
//  reverse_array(v,0,n-1);
// }

// void solve()
// {
//     ll n,d;
//     cin>>n>>d;
//     vector<ll>v(n);
//     for(ll i=0; i<n; i++)
//         cin>>v[i];
//     right_rotate(v,d,n);
//     print_array(v);
// }

// int main() {
// 	int T;
// 	cin>>T;
// 	while(T--)
// 	{
// 	    solve();
// 	}
// 	return 0;
// }

// void solve()
// {
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     for(ll i=0; i<n; i++)
//     {
//         cin>>v[i];
//     }
//     ll a= v[n-1];
//     for(ll i=n-1; i>0; i--)
//     {
//        v[i]=v[i-1];
//     }
//     v[0]=a;
//     for(auto x:v)
//     cout<<x<<" ";
//     cout<<endl;
// }

// void solve()
// {
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     for(ll i=0; i<n; i++)
//     {
//         cin>>v[i];
//     }
//     ll a= v[n-1];
//     for(ll i=n-1; i>0; i--)
//     {
//        v[i]=v[i-1];
//     }
//     v[0]=a;
//     for(auto x:v)
//     cout<<x<<" ";
//     cout<<endl;
// }

// void solve()
// {
//     ll n;
//     cin>>n;
//     vector<ll>v(n);
//     for(ll i=0; i<n; i++)
//     {
//         cin>>v[i];
//     }
//     ll a= v[n-1];
//     for(ll i=n-1; i>0; i--)
//     {
//        v[i]=v[i-1];
//     }
//     v[0]=a;
//     for(auto x:v)
//     cout<<x<<" ";
//     cout<<endl;
// }

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    solve();
	}
	return 0;
}