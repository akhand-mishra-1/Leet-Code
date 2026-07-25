class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
     int   n=nums.size();

        for(int i:nums)
        {
            mp[i]++;
        }

vector<int>vec;

        n=n/3;
        for(auto &p:mp)
        {
            if(p.second>n )
            {
              vec.emplace_back(p.first);
            }
            
        }
       return vec; 
    }
};