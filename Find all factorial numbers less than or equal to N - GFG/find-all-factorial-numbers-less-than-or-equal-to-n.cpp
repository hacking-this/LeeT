//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    
    int fact(int n){
        if(n==1) return 1;
        else {
            return n*fact(n-1);
        }
    }
    
    vector<long long> factorialNumbers(long long N)
    {
            vector<long long> facto;
            long long int a =1;
            for(int i=1;i<=N;i++){
                a=a*i;
                if(a<=N) facto.push_back(a);
                else break;
            }
            return facto;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends