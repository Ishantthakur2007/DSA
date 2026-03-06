//ARRAYS:

/*#include<iostream>
using namespace std;
int main(){
    int a[50];
    int i,n;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array are:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/


//REMOVE DUPLICATES IN AN ARRAY:

/*#include<iostream>
using namespace std;
int main(){
    int a[50];
    int n,i,j,k;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements present in an array is:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)    //comparing next element:
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n-1;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;       //check duplicates for exchanged positioned.

            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/



//REVERSE OF AN ARRAY:

/*#include<iostream>
using namespace std;
int main(){
    int a[50];
     int i,j,temp,n;
     cout<<"enter the number of elements in an array:";
     cin>>n;
     cout<<"the number of elements in an array is:";
     for(i=0;i<n;i++)
     {
        cin>>a[i];
     }
     for(i=0;i<n/2;i++)
     {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;

     }
     for(i=0;i<n;i++)
     {
        cout<<a[i]<<" ";
     }
     return 0;
}*/


//MAXIMUM AND MINIMUM IN AN ARRAY:

/*#include<iostream>
using namespace std;
int main(){
    int n,i,max=0,min=0;
    int a[50];
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
       if(a[i]<min)
       {
        min=a[i];
       }

    }
    cout<<"the maximum number in an array is "<<max<<"\n";
    cout<<"the minimum number in an array is "<<min<<"\n";
    return 0;
    
}*/


//SEPARATE EVEN AND ODD IN AN ARRAY:

/*#include<iostream>
using namespace std;
int main(){
    int even=0,odd=0,i,n;
    int a[50];
    int e[50],o[50];
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the number of elements in an array is:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e[even++]=a[i];
            
        }
        else{
            o[odd++]=a[i];
        }
    }
    cout<<"the even elements are:"<<"\n";
    for(i=0;i<even;i++)
    {
        cout<<e[i]<<" "<<"\n";
    }
    cout<<"the odd elements are:"<<"\n";
    for(i=0;i<odd;i++)
    {
        cout<<o[i]<<" ";
    }
    return 0;

}*/

//MERGING OF A SORTED ARRAY:

/*#include<iostream>
using namespace std;
int main(){
    int a[5]={1,3,5,7,9};
    int b[5]={2,4,6,8,10};
    int c[10];
    int i=0,j=0,k=0;
    while(i<5 & j<5)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
        k++;
        i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;

        }
    }
    while(i<5)
    {
        c[k]=a[i];
        k++;
        i++;


    };
    while(j<5)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    for(i=0;i<10;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;


}*/


/*#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cout<<a;
        v.push_back(a);
    }
   int min=v.at(0);
   int max=v.at(0);
    for(int i=0;i<v.size();i++)
    {
        if(v.at(i)>max)
        {
            max=v.at(i);
        }
        if(v.at(i)<min)
        {
            min=v.at(i);
        }
    }
    cout<<"the maximum element in an vector is :"<<max<<"\n";
    cout<<"the minimum element in an vector is :"<<min<<"\n";
    return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    cout << "the elements are:";
    for (int x:v)
    {
        cout << x << " ";
    }
    return 0;
}*/



