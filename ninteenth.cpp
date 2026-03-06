// BUBBLE SORT:with each pass largest element bubbles up.adjacent elements are compared and swap to make up in order.

#include<iostream>  
using namespace std;
int main(){
    int n,temp;
    int a[50];
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)          //only for iterations.
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                  int temp;
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
            }
        }
    }
    cout<<"after the bubble sorting the elements in the array is :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}



//INSERTION SORT:

/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}*/

//LOWER BOUND AND UPPER BOUND:

/*#include<iostream>
using namespace std;
int main(){
    int n;
    int a[50];
    int lb, ub, count = 0;
    int target;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    
    cout<<"enter the target:";
    cin>>target;
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            if(count==0)
            {
            lb=i;
            
        }
        ub = i;
        count++;
    }

        ub=i;
        count++;
    }
    if(count==0)
    {
        cout<<"element not found";
    }
    else{

    cout<<"the lower bound is :"<<lb;
    cout<<"\n the upper bound is :"<<ub;
    cout<<"\n the number of occurance is :"<<count;
    }
   
    return 0;
}*/


//MAJORITY ELEMENT:

/*class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};*/

//INTERSECTION OF TWO ARRAYS:

/*class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        set<int>result;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    result.insert(nums1[i]);
                    break;
                }
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};*/



//2-D array:

#include<iostream>
using namespace std;
int main(){
    int rows,columns,r2,c2,n;
    int a[50][50];
    int b[]
    cout<<"enter the number of rows and columns in the array :";
    cin<<rows<<columns;
    cout<<"enter the number of elements in an array:";
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin<<
        }
    }
}