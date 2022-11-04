//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    if(n==0 || n==1) return -1;
	    int maxi=INT_MIN;
	    int maxi_2=INT_MIN;
	    for(int i=0;i<n;i++){
	        maxi = max(maxi,arr[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>maxi_2 && arr[i]!=maxi) maxi_2=arr[i];
	    }
	    if(maxi_2==INT_MIN) return -1;
	    else return maxi_2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends