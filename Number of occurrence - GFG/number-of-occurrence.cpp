//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
	int binarySearch(int arr[],int n , int x){
	    int low=0,high=n-1;
	    while(low<=high){
	        int mid = (low+high)/2;
	        if(arr[mid]==x) return mid;
	        else if(arr[mid]>x) high=mid-1;
	        else low=mid+1;
	    }
	    return -1;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    
	    int index = binarySearch(arr,n,x);
	    
	    if(index==-1) return 0;
	    
	    int left = index-1;
	    int k=0;
	    while(left>=0 && arr[left]==x){
	        k++;
	        left--;
	    }
	    
	    int right = index+1;
	    while(right<n && arr[right]==x){
	        k++;
	        right++;
	    }
	   
	   return k+1;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends