class Solution {
public:
    int maxProduct(vector<int>& nums) {
  int largest=INT_MIN;
  int secondlargest=INT_MIN;
  
for(int i:nums)
{
    if(i>largest)
    {
        secondlargest=largest;
        largest=i;
    }
    else if(i>secondlargest)
    {
        secondlargest=i;
    }
}


        return ((largest-1)*(secondlargest-1));
    }
};