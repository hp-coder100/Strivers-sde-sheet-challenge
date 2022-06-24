#include <limits>      
int a =numeric_limits<int>::min();
int b =numeric_limits<int>::max();
double median(vector<int> nums1, vector<int> nums2)
{
    
   if(nums1.size() > nums2.size())
        return median(nums2,nums1);//ensuring that binary search happens on minimum size array
    int m=nums1.size(), n=nums2.size();    
    int low=0,high=m,medianPos=((m+n)+1)/2;
    while(low<=high) {
        int cut1 = (low+high)>>1;
        int cut2 = medianPos - cut1;
        
        int l1 = (cut1 == 0)? a:nums1[cut1-1];
        int l2 = (cut2 == 0)? a:nums2[cut2-1];
        int r1 = (cut1 == m)? b:nums1[cut1];
        int r2 = (cut2 == n)? b:nums2[cut2];
        
        if(l1<=r2 && l2<=r1) {
            if((m+n)%2 != 0)
                return max(l1,l2);
            else 
                return (max(l1,l2)+min(r1,r2))/2.0;
        }
        else if(l1>r2) high = cut1-1;
        else low = cut1+1;
    }
    return 0.0;
}
