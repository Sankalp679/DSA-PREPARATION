#include<bits/stdc++.h>
using namespace std;
#define INF 1000000007
int minJumps(int arr[], int n)
{
    vector<int>jump(n);
    vector<int>last_pos(n);
    fill(jump.begin(),jump.end(),INF);
    jump[0]=0;
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(j+arr[j]>=i)
            {
                if(jump[j]+1<jump[i])
                {
                    jump[i]=jump[j]+1;
                    last_pos[i]=j;
                }

            }
        }
    }
    // for(auto x:jump)
    // cout<<x<<" ";
    // cout<<endl;
    // for(auto x:last_pos)
    // cout<<x<<" ";
    return jump[n-1];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<minJumps(arr, n)<<endl;
    }
    return 0;
}

// TC O(N^2)
// ASC O(N)