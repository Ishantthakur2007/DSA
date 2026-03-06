//TERNARY OPERATOR:

/*#include<iostream>
using namespace std;
int main(){
    int i=45,j=90,result;
    result=(i<j)?i:j;
    cout<<"the result is :"<<result;
    return 0;

}*/


//ASSIGNMENT OPERATOR:

/*#include<iostream>
using namespace std;
int main(){
    int a=18;
    cout<<(a+=5)<<"\n";
    cout<<(a-=5)<<"\n";
    cout<<(a*=4)<<"\n";
    return 0;
}*/


//BITWISE OPERATOR:

/*#include<iostream>
using namespace std;
int main(){
    int a=5,b=9;
    cout<<(a&b)<<"\n";
    cout<<(a|b)<<"\n";
    cout<<(a^b)<<"\n";     //only 01 or 10 is acceptabe and known as xor operator
    cout<<(a<<1)<<"\n";   //left shift
    cout<<(b>>1)<<"\n";
    return 0;
}*/


//sizof operator:

/*#include<iostream>
using namespace std;
int main(){
    int a=45;
    float c=3.14;
    bool istrue=true;
    char b='a';
    cout<<sizeof(a)<<"\n"<<sizeof(c)<<"\n"<<sizeof(istrue)<<"\n"<<sizeof(b);
    return 0;

}*/


//USER INPUT:


/*#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter the first number:";
    cin>>n;
    cout<<"the entered number is :"<<n;
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main(){
    string name;
    int marks;
    char grade;
    cout<<"enter the name of the student:";
    getline(cin,name);       //string input with spaces
    cout<<"enter the marks of the student :";
    cin>>marks;
    cout<<"enter the grade of the student :";
    cin>>grade;
    cout<<"the name of the student is "<< name <<"and got "<<marks<< "marks with grade "<<grade;
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;
    cout<<"the sum of two number is "<<a+b<<"\n"<<"the difference of two number is "<<a-b<<"\n"<<"the product of two number is "<<a*b<<"\n"<<"the division of two number is "<<a/b;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int age;
    string name;
    cout<<"enter the name and age of the person:";
    cin>>name>>age;
    cout<<"the name and age of the person is "<<name<<age;
    return 0;
}*/

