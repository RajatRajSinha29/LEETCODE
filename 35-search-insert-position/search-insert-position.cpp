class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0 , high=nums.size()-1 , mid , cnt=0 , res;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid] >= target)
            {
                res = mid;
                high = mid-1;
                cnt++;
            }
            else low = mid + 1;
        }

        if(cnt>0) return res;
        else return nums.size();
    }
};