#define pub push_back
class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        vector<int> v;
        for(auto i : nums)
        {
            if(i!=val)
            {
                v.pub(i);
            }
        }
        nums.erase(nums.begin(),nums.end());
        for (auto i :v)
        {
            nums.pub(i);
        }
        return v.size();
    }
};
