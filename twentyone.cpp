//INSERTION SORTING:

/*#include<iostream>
using namespace std;
int main(){
    int n,a[50];
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"enter the elements in an array :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];                                    //TIME COMPLEXITY => O(n^2)
    }
    for(int i=1;i<n;i++)
    {
        int key;
         key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<"the sorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/



//SELECTION SORT:


/*#include<iostream>
using namespace std;
int main(){
    int i,a[50],n;
    cout<<"enter the number of elements in the array :";
    cin>>n;
    cout<<"enter the elements in the array :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;    //finding index.
            }
        }
        int temp;
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
   
    cout<<"the sorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";

    }
    return 0;
}*/



//QUICK SORT:

/*#include<iostream>
using namespace std;
void swap(int &c,int &d){
    int temp;
    temp=c;
    c=d;
    d=temp;
}

//pivot key element
int partition(int a[500],int low,int high)
{
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[high]);          //pivot updation
    return i+1;
}

void quick_sort(int a[500],int low, int high){
    if(low<high)
    {
        int p=partition(a,low,high);
        quick_sort(a,low,p-1);
        quick_sort(a,p+1,high);
    }
}
int main(){
    int p,b[500];
    cout<<"enter the number of elements in the array:";
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>b[i];
    }
    quick_sort(b,0,p-1);
    cout<<"after sorting:";
    for(int i=0;i<p;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}*/



//MERGE SORT:

/*#include <iostream>
using namespace std;
void merge(int a[], int l, int m, int r)
{
    int temp[50];
    int i = l;     // beginnig of left subarray.
    int j = m + 1; // beginning of right subarray.
    int k = l;
    while (i <= m && j <= r)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            i++;
        }
        else
        {
            temp[k] = a[j];
            j++;
        }
        k++;
    }
    while (i <= m)
    {
        temp[k] = a[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        temp[k] = a[j];
        j++;
        k++;
    }
    int x;
    for (int x = l; x <= r; x++)
    {
        a[x] = temp[x];
    }
}
void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        merge_sort(a, l, m);
        merge_sort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int main()
{
    int b[50], n;
    cout << "enter the elements in the array:";
    cin >> n;
    cout << "the elements in the array is:";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    merge_sort(b, 0, n - 1);
    cout << "after sorting:";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}*/
