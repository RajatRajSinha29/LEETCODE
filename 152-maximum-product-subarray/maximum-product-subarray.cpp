class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=INT_MIN , prefix=1 , sufix=1;
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(prefix==0) prefix=1;
            if(sufix==0) sufix=1;

            prefix *= nums[i];
            sufix *= nums[nums.size()-i-1];

            maxi = max(maxi , max(prefix,sufix));
        }
        return maxi;
    }
};