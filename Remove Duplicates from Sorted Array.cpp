#define pub push_back
class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
         set<int> s;
         int n=nums.size();
         for(int i=0;i<n;i++)
         {
             s.insert(nums[i]);
         }
         nums.erase(nums.begin(),nums.end());
         for(auto i:s)
         {
             nums.pub(i);
         }
         return nums.size();
    }
};
