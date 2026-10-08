class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        int cnt1=0 , cnt2=0 , el1=0 , el2=0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(cnt1==0 && nums[i]!=el2) 
            {
                cnt1 = 1;
                el1 = nums[i];
            }
            else if(cnt2==0 && nums[i]!=el1)
            {
                cnt2 = 1;
                el2 = nums[i];
            }
            else if(el1 == nums[i]) cnt1++;
            else if(el2 == nums[i]) cnt2++;
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0 , cnt2=0;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] == el1) cnt1++;
            if(nums[i] == el2) cnt2++;
        }
        int mini = nums.size()/3;
        if(mini<cnt1) res.push_back(el1);
        if(mini<cnt2 && el1!=el2) res.push_back(el2);
        sort(res.begin() , res.end());
        return res;
    }
};