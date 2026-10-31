class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
         int s = bloomDay.size() , ans=-1 , low=*min_element(bloomDay.begin() , bloomDay.end()) , high=*max_element(bloomDay.begin() , bloomDay.end()) , mid;
            if(s<(long long)m*k) return ans;
            while (low<=high)
            {
                mid = low + (high-low)/2;
                int cnt=0 , boq=0;
                for(int i=0 ; i<s ; i++)
                {
                    
                    if(bloomDay[i]<=mid)
                    {
                        cnt++;
                        if(cnt==k)
                        {
                            boq++;
                            cnt=0;
                        }
                    }
                    else cnt = 0;
                }
                if(boq>=m)
                {
                    ans = mid;
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            return ans;
    }
};