class Solution {
public:
    
    float median(vector<int>& nums1,vector<int>& nums2,int m,int n) {
        int finalArray[n+m];
        int i=0,j=0,k=0;
        while(i<m && j<n) {
            if(nums1[i]<nums2[j]) {
                finalArray[k++] = nums1[i++];
            }
            else {
                finalArray[k++] = nums2[j++];
            }
        }
        if(i<m) {
            while(i<m) 
                finalArray[k++] = nums1[i++];
        }
        if(j<n) {
            while(j<n)
                finalArray[k++] = nums2[j++];
        }
        n = n+m;
        if(n%2==1) 
            return finalArray[((n+1)/2)-1];
        else return ((float)finalArray[(n/2)-1]+(float)finalArray[(n/2)])/2;
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n=nums2.size();
        return median(nums1,nums2,m,n);
        
    }
};