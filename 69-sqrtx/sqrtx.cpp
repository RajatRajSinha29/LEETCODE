class Solution {
public:
    int mySqrt(int x) {
        int low=1 , high=x , ans=0;
        long mid;
        while(low<=high)
        {
            mid = low + (high-low)/2;
            if((mid*mid) <= x)
            {
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
};