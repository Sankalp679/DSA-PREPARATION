// #include<bits/stdc++.h>
// using namespace std;
// # define ll long long
// # define upper 10000001

// First Approach OF Finding Prime
// Using Recursion
// bool isPrime(int n)
// {
//     static int i = 2;

//     // corner cases
//     if (n == 0 || n == 1) {
//         return false;
//     }
    
    
//     // Checking Prime
//     if (n == i)
//         return true;

//     // base cases
//     if (n % i == 0) {
//         return false;
//     }
//     i++;
//     return isPrime(n);
// }
// Time Complexity :O(N), A Space Complexity :O(N) 

// Using iteration
// bool isprime(ll p)
// {
//   if(p<=1)
//   return false;
//    for(ll i=2; i<=p; i++)
//    {
//      if(p%i==0)
//      return false;
//    }
//    return true;
// }
// TC O(N)
// ASC O(1)

// Improved One
// We can do following optimizations:
// Instead of checking till n, we can check till √n because a larger factor of n must be a multiple of smaller factor that has been already checked.
// The algorithm can be improved further by observing that all primes are of the form 6k ± 1, with the exception of 2 and 3. This is because all integers can be expressed as (6k + i) for some integer k and for i = -1, 0, 1, 2, 3, or 4; 2 divides (6k + 0), (6k + 2), (6k + 4); and 3 divides (6k + 3). So a more efficient method is to test if n is divisible by 2 or 3, then to check through all the numbers of form 6k ± 1.

// bool isprime(ll p)
// {
        //  Corner Cases
//       if(p<=1)
//       return false;
//       if(p<=3)
//       return true;
//       This is checked so that we can skip  
//       middle five numbers in below loop 
//       if(p%2==0 || p%3==0)
//       return false;
//    for(ll i=5; i<=p*p; i=i+6)
//    {
//      if(p%i==0 || p%(i+2))
//      return false;
//    }
//    return true;
// }
// TC O(sqrt(N))
// ASC O(1)

// Now doing precommputation using seive of erosthenes
// The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million or so
// TC O(n*log(log(n))) 
// We can use memset() to set all values as 0 or -1 for integral data types also. It will not work if we use it to set as other values. The reason is simple, memset works byte by byte.It can be used to fill  all characters as well.
// while we can use fill to fill any value
// vector<bool>v(upper,true);
// vector<int>u(upper,0);
// void precom_prime()
// {
//   v[1]=false;
//   for(ll i=2; i*i<upper; i++)
//   {
//       if(v[i])
//       {
//           for(ll j=i*i; j<upper; j=j+i)
//           v[j]=false;
//       }
//   }
// }
// void ans()
// {
//   ll cntr=0,i;
//   for( i=5; i<upper; i++)
//   {
//     if(v[i]*v[i-2])
//     cntr++;
//     u[i]=cntr;
//   }
// }

// void solve()
// {
//   ll N;
//   cin>>N;
//   cout<<u[N]<<endl;
//   // ll cnt=0;
//   // for(ll i=1 ; i<=N-2; i++)
//   // {
//   //   if(v[i]*v[i+2])
//   //   cnt++;
//   // }
// }

// int main()
// {
//   ll t;
//   cin>>t;
//   precom_prime();
//   ans();
//   while(t--)
//   {
//     solve();
//   }
// }

// TC O(t)
// ASC O(n)