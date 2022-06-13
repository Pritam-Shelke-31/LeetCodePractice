// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double solve(vector<int> a1, vector<int> a2,int n1,int n2)
    {
        int low=0,high=n1;
        int l1,l2,r1,r2;
        while(low<=high)
        {
            int cut1=(low+high) >> 1;
            int cut2=(n1+n2+1)/2-cut1;
            
            l1 = cut1==0?INT_MIN:a1[cut1-1];
            l2 = cut2==0?INT_MIN:a2[cut2-1];
            
            r1 = cut1==n1?INT_MAX:a1[cut1];
            r2 = cut2==n2?INT_MAX:a2[cut2];
            
            if(l1<=r2 && l2<=r1)
            {
                if((n1+n2)%2==0)
                {
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }
                else
                {
                    return max(l1,l2);
                }
            }
            else if(l1>r2)
            {
                high=cut1-1;
            }
            else 
            {
                low=cut1+1;
            }
        }
        return 0.0;
    }
    double MedianOfArrays(vector<int>& a1, vector<int>& a2)
    {
        int n1=a1.size();
        int  n2=a2.size();
        if(n1>n2)
        return solve(a2,a1,n2,n1);
        
        return solve(a1,a2,n1,n2);
    
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends