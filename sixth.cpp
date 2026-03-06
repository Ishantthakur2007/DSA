/*#include<iostream>
using namespace std;
int main(){
    int i;
    for (i=0;i<=20;i=i+2)
    {
        cout<<i<<"\n";

    }
    return 0;
}*/


//FACTORIAL:

/*#include<iostream>
using namespace std;
int main(){
    int fact=1,i,n;
    cout<<"enter the number:";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial of a number is "<<fact;
    return 0;
}*/


//FIBONACCI SERIES:

/*#include<iostream>
using namespace std;
int main(){
    int n1=0,n2=1,n3,terms,i;
    cout<<"enter the number of terms:";
    cin>>terms;
    for (i=0;i<=terms;i++)
    {
        cout<<n1<<"\n";
        n3=n1+n2;
        n1=n2;
        n2=n3;
        

    }
    return 0;
}*/


//PRIME NUMBER:

/*#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the number:";
    cin>>n;
    if (n<=1)
    {
        cout<<"the number is not a prime number";
        return 0;
    }
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            cout<<"the number is not a prime number";
            return 0;
        }
        
    }
    cout << "the number is a prime number";
    return 0;
}*/


//PATTERN MAKING OR NESTED LOOPS:

/*#include<iostream>
using namespace std;
int main(){
    int i,j;
    for(i=5;i>=1;i--)
    {
        for (j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}*/

//PYRAMID STRUCTRE:

/*#include<iostream>
using namespace std;
int main(){
    int i,j,s;
    for (i=1;i<=5;i++)
    {
        for(s=1;s<=5-i;s++)

        {
            cout<<" ";
        }
            for (j=1;j<=i;j++)
            {
                cout<< j<<" ";
            }
            cout << "\n";
                
        
        }
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main(){
    char i;
    for(i='a';i<='z';i++)
    {
        cout<<i <<" ";
    }
    return 0;
}*/


//FUNCTIONS:

//without parameter:

/*#include<iostream>
using namespace std;
void greet()
{
    cout<<"hello world";
}
int main(){
    greet();
    return 0;
}*/

//PARAMETER:
//PARAMETER--INPUT


/*#include<iostream>
using namespace std;
void sum(int a,int b){
    cout<<"the sum of two numbers is "<<a+b;
}
int main(){
    sum(5,4);
    return 0;
}*/

/*#include<iostream>
using namespace std;
void sum(int a,int b)
{
    cout<<"the sum of two numbers is "<<a+b;
}
int main(){
    int c,d;
    cout<<"enter the two numbers:";
    cin>>c>>d;
    sum(c,d);
    return 0;
}*/


/*#include<iostream>
using namespace std;
void greet(string name,int age)
{
    cout<<name <<age;

}
int main(){
    greet ("ishant",18);
    return 0;
}*/

//FUNCTION WITH PARAMETER AND RETURN VALUE:

/*#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
int main(){
   cout<<sum(8,7);
    return 0;
}*/


//PRIME NUMBER BETWEEN 2 TO 10:

/*#include<iostream>
using namespace std;
int main(){
    int start,end,i,num;
    cout<<"enter the starting and ending point:";
    cin>>start>>end;
    for(num=start;num<=end;num++)
    {
         
           int count=0;
           for (i=1;i<=num;i++)
           {
               if (num%i==0)
               {
                  count++;
               }
           }
              if (count==2)
              {
                cout<<num<<"\n";
              }

    }
    return 0;
}*/
    



