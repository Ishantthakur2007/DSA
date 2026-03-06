//EVEN OR ODD NUMBER:

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    if (n%2==0)
    {
        cout<<"the number is even";
    }
    else 
    {
        cout<<"the number is odd";
    }
    return 0;
}*/


//GREATEST OF A NUMBER:

/*#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter all the three numbers:";
    cin>>a>>b>>c;
    if ((a>b) && (a>c))
    {
        cout<<"a is greater then b and c";
    }
    else if ((b>a) && (b>c))
    {
        cout<<"b is greater then a and c";
    }
    else 
    {
        cout<<"c is greater then b and c";
    }
    return 0;
}*/

//LEAP YEAR:

/*#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year:";
    cin>>year;
    if ((year%400==0) && (year%4==0 || year%100!=0))
    {
        cout<<"leap year";
    }
    else 
    {
        cout<<"not a leap year";
    }
    return 0;
}*/


//AVERAGE OF MARKS:

/*#include<iostream>
using namespace std;
int main(){
    int m1,m2,m3,total;
    float average;
    cout<<"enter the marks of all the three subjects:";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    average=total/3;
    cout<<"the average marks is "<<average<<"\n";
    if ((average>=80) && (average<=100))
    {
        cout<<"you have got the grade A";
    }
    else if ((average>=60)&& (average<80))
    {
        cout<<"you have got the grade B";
    }
    else
    {
        cout<<"you have got the grade C";
    }
    return 0;

}*/


//BILL OR UNITS:

/*#include<iostream>
using namespace std;
int main(){
    int units;
    float bill;
    cout<<"enter the units :";
    cin>>units;
    if ((units>0) && (units<=100))
    {
        bill=units*1;
    }
    else if ((units>100) && (units<=200))
    {
        bill=100*1+(units-100)*2;
    }
    else if ((units>200) &&(units<=300))
    {
        bill=100*1+100*2+(units-200)*3;
    }
    else
    {
        bill=100*1+100*2+100*3+(units-300)*5;
        
    }
    cout<<"the bill is "<<bill;
    
    return 0;
    
    
}*/


//CHECK IF THREE SIDE CAN FORM TRIANGLE:

/*#include<iostream>
using namespace std;
int main(){
    int s1,s2,s3;
    cout<<"enter the three sides :";
    cin>>s1>>s2>>s3;
    if ((s1+s2>s3) && (s1+s3>s2) && (s2+s3>s1))
    {
        cout<<"can form a triangle";
    }
    else 
    {
        cout<<"cannot form a triangle";
    }
    return 0;
}*/

//CALCULATOR:

/*#include<iostream>
using namespace std;
int main(){
    int op,a,b;
    cout<<"1.Addition:";
    cout<<"2.Subtraction:";
    cout<<"3.Multiplication:";
    cout<<"4.Division:";
    cout << "choose operation:";
    cin>>op;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    if (op==1)
    {
        cout<<"the addition of two numbers is "<<a+b;
    }
    else if(op==2)
    {
        cout<<"the subtraction of two numbers is "<<a-b;
    }
    else if(op==3)
    {
        cout<<"the multiplication of two numbers is "<<a*b;

    }
    else if (op==4)
    {
        cout<<"the division of two numbers is "<<a/b;
    }
    else 
    {
        cout<<"invalid operation";
    }
    return 0;
}*/

//GROSS SALARY:

#include<iostream>
 using namespace std;
 int main(){
    int basic_salary;
    float hra,da,gross_salary;
    cout<<"enter the basic salary :";
    cin>>basic_salary;
    if (basic_salary>20000)
    {
        hra=0.2*basic_salary;
        da=0.08*basic_salary;
        gross_salary=basic_salary+hra+da;
        
    }
    else{
        hra=0.1*basic_salary;
        da=0.05*basic_salary;
        gross_salary=basic_salary+hra+da;
    }
    cout<<"the gross salary is "<<gross_salary;
    return 0;
 }