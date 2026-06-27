class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>arr;
        int size =nums.size();
        arr.push_back(nums[0]);
       int count=0;
for(int i=1;i<size;i++)
{
if(nums[count]!=nums[i])
{
count++;
nums[count]=nums[i];
}
}

        return count+1 ;
    }
};