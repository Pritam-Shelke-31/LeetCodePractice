// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long oddGame(long long N) {
        // code here
         long long a = floor(log2(N));   // Finding log2 of N
        long long ans = pow(2,a);      // Finding 2 power log2(N)
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.oddGame(N) << endl;
    }
    return 0;
}  // } Driver Code Ends