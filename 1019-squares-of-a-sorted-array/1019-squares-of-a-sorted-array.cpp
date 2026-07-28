class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
int n=nums.size();
    vector<int>arr(n);
int i=0;
int j=n-1;
int k=n-1;
while(i<=j)
{
    int temp1=nums[i]*nums[i];
    int temp2=nums[j]*nums[j];
    if(temp1<temp2)
    {
        arr[k]=temp2;
j--;
    
    }
    else
    {    
        arr[k]=temp1;
        i++;    

    }
    k--;
}



    return {arr};
    }
};