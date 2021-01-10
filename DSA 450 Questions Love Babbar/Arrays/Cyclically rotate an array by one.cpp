#include <stdio.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

// METHOD 1 (Using temp array)
// Input arr[] = [1, 2, 3, 4, 5, 6, 7], d = 2, n =7
// 1) Store the first d elements in a temp array
//    temp[] = [1, 2]
// 2) Shift rest of the arr[]
//    arr[] = [3, 4, 5, 6, 7, 6, 7]
// 3) Store back the d elements
//    arr[] = [3, 4, 5, 6, 7, 1, 2]
// Time complexity : O(n)
// Auxiliary Space : O(d)

// METHOD 2 (Rotate one by one)
// leftRotate(arr[], d, n)
// start
//   For i = 0 to i < d
//     Left rotate all elements of arr[] by one
// end
// Time complexity : O(n * d)
// Auxiliary Space : O(1)

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

// void right_rotate(vector<ll>&v,ll d, ll n)
// {
// //    if d is greater than length of array n;
// 
//  d=d%n;
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

// JUGGLING THEOREM
// METHOD 3 (A Juggling Algorithm)
// This is an extension of method 2. Instead of moving one by one, divide the array in different sets
// where number of sets is equal to GCD of n and d and move the elements within sets.
// If GCD is 1 as is for the above example array (n = 7 and d =2), then elements will be moved within one set only, we just start with temp = arr[0] and keep moving arr[I+d] to arr[I] and finally store temp at the right place.
// Here is an example for n =12 and d = 3. GCD is 3 and
// Time complexity : O(n)
// Auxiliary Space : O(1)

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

// ll gcd(ll a,ll b)
// {
// 	if(b==0)
// 	return a;
// 	else
// 	return gcd(b,a%b);
// }

// void left_rotate(vector<ll>&v, ll n, ll d)
// {
// 	ll sets=gcd(n,d);
// 	for(ll i=0; i<sets; i++)
// 	{
// 		ll temp,j=i;
// 		temp=v[i];
// 		while(1)
// 		{
// 			ll temp1=j;
// 			j=(d+j)%n;
// 			if(j==i)
// 			{
// 				v[temp1]=temp;
// 				break;
// 			}
// 			else
// 			v[temp1]=v[j];
// 		}
// 	}
// }

// void solve()
// {
//     ll n,d;
//     cin>>n>>d;
//     vector<ll>v(n);
//     for(ll i=0; i<n; i++)
//         cin>>v[i];
//   left_rotate(v,n,d);
// 	print_array(v);
// }

// int main() {
// 	ll T;
// 	cin>>T;
// 	while(T--)
// 	{
// 	    solve();
// 	}
// 	return 0;
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