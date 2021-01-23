// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function template for C++

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {

        // Not correct\\
    }

    // Not getting what is wrong in this and why we used if (subtract >= small || add <= big)  and why we are getting 5 instead of 7 for 2 6 3 4 7 2 10 3 2 1 and k=5
    //     int small,big;
    //         if(n==1)
    //             return 0;
    //         sort(arr,arr+n);
    //         int ans=arr[n-1]-arr[0];
    //         small=arr[0]+k;
    //         if(arr[n-1]-k<0)
    //         big=arr[n-1]+k;
    //         else
    //         big=arr[n-1]-k;
    //         if(small>big)
    //         swap(big,small);
    //         for(int i=1; i<n-1; i++)
    //         {
    //             int subtract,add;
    //             if(arr[i]-k>=0)
    //             subtract=arr[i]-k;
    //             else
    //             subtract=arr[i]+k;
    //             add=arr[i]+k;
    //             if (subtract >= small || add <= big)
    // 			continue;
    //             if(big-subtract<=add-small)
    //             small=subtract;
    //             else if(add-small<big-subtract)
    //             big=add;
    //
    //         }
    //         return min(ans,abs(big-small));

    // 9
    // small=3
    // big=8
    // subtract=3
    // add=7
    // big-subtract=5
    // add-small=4
    // big=7
    // subtract=6
    // add=10
    // big-subtract=1
    // add-small=7
    // small=6

    // Not Understood But a correct solution
    //   sort(arr,arr+n);
    //     int i,mx,mn,ans;
    //     ans = arr[n-1]-arr[0];

    //     for(i=0;i<n;i++){
    //         if(arr[i]>=k){
    //             mn = min(arr[0]+k, arr[i]-k);
    //             mx = max(arr[n-1]-k, arr[i-1]+k);
    //             ans = min(ans,mx-mn);
    //         }
    //     }
    //     return ans;
    // }
    // };

    // { Driver Code Starts.
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n, k;
            cin >> k;
            cin >> n;
            int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            Solution ob;
            auto ans = ob.getMinDiff(arr, n, k);
            cout << ans << "\n";
        }
        return 0;
    } // } Driver Code Ends


    #include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) 
    {
       int left,right,ele,ans;
       left=right=ele=0;
       vector<pair<int,int>>v;
       vector<int>vis(n);
       for(int i=0; i<n; i++)
       {
           if(arr[i]>=k)
           v.push_back(make_pair(arr[i]-k,i));
           v.push_back(make_pair(arr[i]+k,i));
       }
       sort(v.begin(),v.end());
       while(ele<n)
       {
         if(vis[v[right].second]==0)
         {
           vis[v[right].second]++;
           ele++;
         }
         else
         vis[v[right].second]++;
         right++;
       }
       ans=v[right-1].first-v[left].first;
       while(right<v.size())
       {
          if(vis[v[left].second]==1)
          {
            vis[v[left].second]--;
            left++;
            right=left;
            ele--;
            while(right<v.size() && ele<n)
            {
              if(vis[v[right].second]==0)
              {
                vis[v[right].second]++;
                ele++;
              }
              else
              vis[v[right].second]++;
              right++;
            }
          }
          else
             break;
       if(ele==n)
       ans=max(ans,v[right-1].first-v[left].first);
       }
       return ans;
      //  for(auto x:v)
      //  cout<<x.first<<" "<<x.second<<endl;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0; 
}