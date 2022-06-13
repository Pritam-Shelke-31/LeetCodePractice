// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define N 1000


 // } Driver Code Ends
// you are required to complete this function 
// function should print the required range
#define pii pair<int, pair<int, int>>
class Solution{
    public:
    pair<int,int> findSmallestRange(int nums[][N], int n, int k)
    {
          priority_queue<pii, vector<pii>, greater<pii>> minHeap;
        
        int low = INT_MAX;
        int high = INT_MIN;
        int maxVal = 0;
        
        
        for(int i = 0;i < k;i++) {
            high = max(high, nums[i][0]);
            low = min(low, nums[i][0]);
            minHeap.push({nums[i][0], {i, 0}});
        }
        maxVal = high;
        
        // cout<<low<<" "<<high<<endl;
        
        while(1) {
                int listIdx = minHeap.top().second.first;
                int idx = minHeap.top().second.second;
                minHeap.pop();
                idx++;
                if(idx >= n) {
                    break;
                } else {
                    int currVal = nums[listIdx][idx];
                    maxVal = max(maxVal, currVal);
                    // cout<<currVal<<endl;
                    minHeap.push({currVal, {listIdx, idx}});
                    if(high-low > maxVal - minHeap.top().first) {
                        low = minHeap.top().first;
                        high = maxVal;
                    }
                    
                }
                
                
                // cout<<low<<" "<<high<<endl;
        }
        
        return {low, high};
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[N][N];
        pair<int,int> rangee;
        for(int i=0; i<k; i++)
            for(int j=0; j<n; j++)
                cin>>arr[i][j];
        Solution obj;
	    rangee = obj.findSmallestRange(arr, n, k);
	    cout<<rangee.first<<" "<<rangee.second<<"\n";
    }   
	return 0;
}

  // } Driver Code Ends