//INSERT POSITION:

/*class Solution{
    public:
    int searchInsert(vector<int> &nums,in target)
    int n=nums.size();
    int k=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>=target)
        {
            return i;
        }

    }
    return nums.size();

};*/



//PLUS ONE:

class solution{
    vector int plusOne(vector<int> &digits)
    int n=digits.size();

    for(int i=n-1;i>digits.size>0;i++)
    {
        if(digits[i]<9)
        {
            digits[i]++;
            return digits;
        }
        digits[i]=0;

    }
    digits.insert(digits.begin(),1);
    return digits;

};