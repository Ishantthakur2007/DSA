//VECTORS AS AN ARRAY:

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
    int n,i,v,choice=0,position,value;
    cout<<"enter the number of elements in a vector:";
    cin>>n;
    cout<<"the elements in a vector is:";
    for(int i=0;i<n;i++)
    {
        cin>>v;
        a.push_back(v);

    }
    cout<<"\n1. INSERT AN ELEMENT:";
    cout<<"\n2. DELETE AN ELEMENT:";
    cout<<"\n3. UPDATE THE ARRAY:";
    cout<<"\n4. DISPLAY :";
    cout<<"\n5. EXIT:\n";
    while(choice!=5)
    {
        cout<<"enter the choice:";
         case 1:
      cin>>choice;
        switch(choice)
        {
             
            cout<<"enter the position:";
            cin>>position;
            cout << "enter the value:";
            cin >> value;
            if(position<1 || position>n+1)
            {
                cout<<"invalid position";
                return 0;

            }
            else 
            {
                a.push_back(0);
                for(int i=n;i>=position;i--)
                {
                    a[i]=a[i-1];
                }
                a[position-1]=value;
                n++;
            
            cout<<"after insertion:";
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            }
            break;
        case 2:
            if(n==0)
            {
                cout<<"array is empty.";
            }
            int position;
            cout<<"enter the position:";
            cin>>position;
            if(position<1 || position>n-1)
            {
                cout<<"invalid position";
                return 0;
            }
            else
            {
                for(int i=position-1;i<n;i++)
                {
                    a[i]=a[i+1];
                }
                n--;
                cout<<"deleted sucessfully ";
                for(int i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
            }
            break;
        case 3:
            cout<<"enter the position:";
            cin>>position;
            cout<<"enter the value:";
            cin>>value;
            if(position<1 || position>n-1)
            {
                cout<<"invalid position";
                return 0;
            }
            else
            {
                a[position-1]=value;
                cout<<"updated sucessfully:";
                for(int i=0;i<n;i++)
                {
                    cout<<a[i]<<" ";
                }
            }
            break;
        case 4:
           if(n==0)
           {
            cout<<"array is empty";
           }
           else
           {
            cout<<"the elements are:";
            for(int i=0;i<n;i++)
            {
                  cout<<a[i]<<" ";
            }
           }
           break;
        case 5:
           
            cout<<"exit the program";
           
           break;
        default:
        
            cout<<"invalid choice";
        
            
        
          }
    }

    return 0;
}*/


/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int a,n;
    cout<<"enter the number of elements:";
    cin>>n;
    cout<<"the elements in a vector:";
    
    for(int i=0;i<n;i++)
    {
         cin>>a;
         v.push_back(a);
    }
    int choice=0;
    cout<<"\n1. INSERT:";
    cout<<"\n2.DELETE:";
    cout<<"\n3.UPDATE:";
    cout<<"\n4.DISPLAY:";
    cout<<"\n5.EXIT";
    while(choice!=5)
    {
        cout<<"enter the choice :";
        cin>>choice;
        if(choice==1)
        {
            int position,value;
            cout<<"enter the position:";
            cin>>position;
            cout<<"enter the value:";
            cin>>value;
            if(position<1 || position>n+1)
            {
                cout<<"invalid choice";
                return 0;
            }
            
                cout<<"inserted sucessfully:";
                 v.insert(v.begin()+(position-1),value);
                 n++;
                 for(int i=0;i<n;i++)
                 {
                    cout<<v[i]<<" ";
                 }
                 break;

        }
        else if (choice==2)
        {
            int position;
            cout<<"enter the position:";
            cin>>position;
            cout<<"deleted sucessfully:";
            v.erase(v.begin()+(position-1));
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            break;
            
        }
        else if (choice==3)
        {
            int position,value;
            cout<<"enter the position:";
            cin>>position;
            cout<<"enter the value:";
            cin>>value;
            cout<<"updated successfully:";
            
        }
    }
    return 0;
} */

//vector erase:

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int>v;
   int a,n,position;
   cout<<"enter the number of elements in a vector:";
   cin>>n;
   cout<<"the elements in a vector is :";
   for(int i=0;i<n;i++)
   {
    cin>>a;
    v.push_back(a);
   }

   cout<<"enter the position:";
   cin >> position;
   v.erase(v.begin() + (position - 1));
   for (int i = 0; i < n; i++)
   {
       cout << v[i] << " ";
   }
   v.erase(v.begin() + 2, v.begin() + 5);
   for (int i = 0; i < n; i++)
   {
       cout << v[i] << " ";
   }

   return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    // erase element at index 2 (value 30)
    v.erase(v.begin() + 2);

    for (int x : v)
    {
        cout << x << " ";
    }
    cout<<"\n";
    v.erase(v.begin() + 2, v.begin() + 5);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}*/

//TARGETED VALUE:

/*#include<iostream>
using namespace std;
int main(){
    int a[50],count=0;
    int n,i,target;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     cout<<"enter the targeted value:";
     cin>>target;
     for(int i=0;i<n;i++)
     if(a[i]==target)
     {
        count++;
     }
     cout<<count<<" ";
     return 0;
}*/


