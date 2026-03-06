//LEETCODE QUESTIONS:

//2 SUM:


/*class Solution{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
                for(int i=0;i<nums.size();i++)
                {
                    for(int j=i+1;j<nums.size();j++)
                    {
                        if(nums[i]+nums[j]==target)
                        {
                             return{i,j};
                        }
                    }
                }
                return {};
        }
};*/


//REMOVE DUPLICATES FROM SORTED ARRAY:

/*class Solution{
    public:
        int removeDuplicates(vector<int> &nums)
        {
          int n=nums.size();
          if(n==0)
          {
            return 0;
          }
          int j=0;
          for(int i==1;i<nums.size();i++)
          {
            if(nums[j]!=nums[i])
            {
                j++;
                nums[j]=nums[i];
            }
          }
            return j+1;
        }
}*/