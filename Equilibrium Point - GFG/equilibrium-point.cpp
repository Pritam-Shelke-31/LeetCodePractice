// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        // Your code here
        int sum = 0; // initialize sum of whole array 
        int leftsum = 0; // initialize leftsum 
        
        if (n == 1) {
            return 1;
        }
    
        /* Find sum of the whole array */
        for (int i = 0; i < n; ++i) 
            sum += a[i]; 
    
        for (int i = 0; i < n; ++i) 
        { 
            sum -= a[i]; // sum is now right sum for index i 
    
            if (leftsum == sum) 
                return i+1; 
    
            leftsum += a[i]; 
        } 
    
        /* If no equilibrium index found, then return 0 */
        return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends