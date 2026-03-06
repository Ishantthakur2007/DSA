//LEFT ROTATE AN ARRAY BY IT'S K th POSITION:

/*#include<iostream>
using namespace std;
void lr(int a[50],int n,int k)
{
   k=k%n;   //formula to remember.
   for(int r=0;r<k;r++) //for rotation only.
   {
      int temp;
      temp=a[0];
      for(int i=0;i<n-1;i++)   //for swapping.
      {
          a[i]=a[i+1];
      }
      a[n-1]=temp;

   }
   
}
int main(){
   int a[50],n,k;
   cout<<"enter the number of rotation:";
   cin>>k;
   cout<<"enter the number of elements in an array:";
   cin>>n;
   cout<<"enter the elements in an array:";
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   lr(a,n,k);
   for (int i = 0; i < n; i++)
   {
      cout << a[i] << " ";
   }
   return 0;
}*/


//RIGHT ROTATE AN ARRAY BY ITS Kth POSITION:

/*#include<iostream>
using namespace std;
int main(){
   int a[50],n,k;
   cout<<"enter the number of elements in an array:";
   cin>>n;
   cout<<"the elements in an array is:";
   for(int i=0;i<n;i++)
   {
      cin>>a[i];
   }
   cout<<"enter the number of rotation:";
   cin>>k;
   for(int r=0;r<k;r++)  //for rotation.
   {
      int temp;
      temp=a[n-1];
      
         for(int i=n-1;i>0;i--)
         {
            a[i]=a[i-1];
         }
         a[0]=temp;
      
   }
   cout<<"after "<<k<<" times right rotation is :";
   for(int i=0;i<n;i++)
   {
      cout<<a[i]<<" ";
   }
   return 0;
}*/



//CLASSES IN C++:

/*#include<iostream>
using namespace std;
class Student{
   public:
       int rn,marks;
       void display(){
         cout<<marks<<"\n"<<rn;
       }


};
int main(){
   Student s1;
   s1.marks=45;
   s1.rn=1;
   s1.display();
   return 0;
}*/

//ARRAYS:

/*#include<iostream>
using namespace std;
class Array{
   public:
     int a[5],n;
     void input(){
      cout<<"enter the number of elements in an array:";
      cin>>n;
      cout<<"the elements in an array is:";
      for(int i=0;i<n;i++)
      {
         cin>>a[i];
      }

     }
     void output(){
      for(int i=0;i<n;i++)
      {
         cout<<a[i]<<" ";
      }
     }

};
int main(){
   Array b;  // b is an object here.
   b.input();
   b.output();
   return 0;
}
*/



/*#include<iostream>
using namespace std;
void Array{
   public:
      int a[50],n;
      void input(){
         cout<<"enter the number of elements in an array:";
         cin>>n;
         cout<<"the elements in an array is:";
         for(int i=0;i<n;i++)
         {
            cin>>a[i];
         }
      }
      void max(){
         int max=a[0];
         for(int i=1;i<n;i++)
         {
            if(a[i]>max)
            {
               max=a[i];
            }
         }
         cout<<"the maximum number in array is:"<<max;
         
      }
      void insert(){
         int position,value;
         cout<<"enter the position :";
         cin>>position;
         cout<<"enter the value:";
         cin>>value;
         for(int i=n;i>position;i--)
         {
            a[i]=a[i-1];
         }
         a[position-1]=value;
         n++;
   
      }
     

};
int main(){
   Array b;
   b.input();
   b.max();
  b.insert();
  b.output();
  return 0;
}
*/

/*#include<iostream>
using namespace std;
class Palindrome{
   public:
      int n,rev=0;
      void reverse(){
         cout<<"enter the number:";
         cin>>n;
         int temp=n;
         while(n>0)
      {
         int d;
         d=n%10;
         rev=rev*10+d;
         n=n/10;
      }
      cout<<"the reverse of a number is:"<<rev;
      }
      void palindrome(){
         if(temp==rev)
         {
            cout<<"the number is palindrome";
         }
         else{
            cout<<"the number is not palindrome";
         }
      }
};
int main(){
   Palindrome p;
   p.reverse();
   p.palindrome();
   return 0;
}*/



/*#include<iostream>
using namespace std;
class Factorial{
   public:
   int n,fact=1;
   void fact(){
      cout<<"enter the  number:";
      cin>>n;
      
   }
}*/