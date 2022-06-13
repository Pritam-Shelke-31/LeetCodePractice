// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int maxi = arr[0],curr=arr[0],steps = 1;
        if(arr[0]==0)return (n==1)?0:-1;
        
        for(int i = 1;i<n;i++)
        {
            curr = max(curr,i+arr[i]);
             if(maxi>=n-1) return steps;
            
            
            
            if(i == maxi)
            {
                steps++;
                maxi = curr;
            }
            if(i>maxi) return -1;
            
           
        }
    
        return steps;
    }
};


// { Driver Code Starts.

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
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends