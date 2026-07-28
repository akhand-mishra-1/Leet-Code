class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {


vector<int> vec;
for(int i=0;i<nums.size();i++)
{
    int temp = pow(nums[i],2);
    vec.emplace_back(temp);
}
sort(vec.begin(),vec.end());

return {vec};
        
    }
};