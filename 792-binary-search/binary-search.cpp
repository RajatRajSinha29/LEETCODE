class Solution {
public:
    int search(vector<int>& nums, int target) {
        int LB=0 , UB=nums.size()-1 , MID;
        while(LB<=UB)
        {
            MID = (LB+UB)/2;
            if(nums[MID] == target)
            {
                return MID;
                break;
            }

            else if(nums[MID] < target) LB = MID + 1;

            else UB = MID - 1;
        }

        return -1;
    }
};