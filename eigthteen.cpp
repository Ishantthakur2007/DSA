//MISSING NUMBER:
/*class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(),nums.end);
        for(int i=0;i<nums.size;i++)
        {
            if(nums[i]!=i)
            {
                return i;
            }
        }
        return nums.size();
    }
};*/


//MOVES ZEROES:

/*class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums!=0)
            {
                nums[k]=nums[i];    //repositioning.
                k++;
            }
        }
        for(int i=k;i<nums.size();i++)
        {
            nums[i]=0;
        }
    }
};*/


//SINGLE NUMBER:

/*class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i+=2)
        {
            if(nums[i]!=nums[i+1])
            {
                return nums[i];
            }
        }
        return nums[n-1];
    }
    };*/
    




