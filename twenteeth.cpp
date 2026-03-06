//ALL TYPES OF SORTING :

// BUBBLE SORT:with each pass largest element bubbles up.adjacent elements are compared and swap to make up in order.

/*#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    int a[50];
    cout << "enter the number of elements in an array:";
    cin >> n;
    cout << "the elements in an array is :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) // only for iterations.
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "after the bubble sorting the elements in the array is :";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}*/


//INSERTION SORT:

/*#include<iostream>
using namespace std;
int main(){
    int n,a[500];
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<n;i++)                               //TIME COMPLEXITY=> O(n^2)
    {
        int key=a[i];
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

#include<iostream>
using namespace std;
int main(){
    int n,a[500];
    cout<<"enter the number of elements in an  array:";
    cin>>n;
    cout<<"the elements in an array is:";
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

               min=j;
         }
    }
    int temp;
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
    }
    cout<<"the sorted array is :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}