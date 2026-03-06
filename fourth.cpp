/*#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"enter the character:";
    cin>>alpha;
    if ((alpha>='a' && alpha<='z'))
    {
        cout<<"the character is small alphabet";
    }
    else if ((alpha>='A' && alpha<='Z'))
    {
        cout<<"the character is capital alphabet";
    }
    else if ((alpha>='0' && alpha<='9'))
    {
        cout<<"the character is a digit";
    }
    else 
    {
        cout<<"the character is a special character";
    }
    return 0;
}*/

//SWITCH STATEMENT:  only used in case of int and char 

/*#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"enter the number of a day:";
    cin>>day;
    switch(day)
    {
        case 1:
           cout<<"sunday";
           break;
        case 2:
           cout<<"monday";
           break;
        case 3:
          cout<<"tuesday";
          break;
        case 4:
          cout<<"wednesday";
          break;
        case 5:
          cout<<"thursday";
          break;
        case 6:
          cout<<"friday";
          break;
        case 7:
           cout<<"saturday";
           break;
        default:
          cout<<"invalid";



    

    }
     return 0;
}*/

//GRADES:

/*#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"enter the grades of the students:";
    cin>>grade;
    switch(grade)
    {
        case 'A':
          cout<<"excellent";
          break;
        case 'B':
         cout<<"very good";
         break;
        case 'C':
          cout<<"good";
          break;
        case 'D':
          cout<<"poor";
          break;
        case 'F':
          cout<<"failed";
          break;
        default:
         cout<<"invalid grade";

    }
    return 0;
}    */

//CALCULATOR USING SWITCH STATEMENT:

/*#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"the operators are:"<<"\n";
    cout<<"1.Addition:"<<"\n";
    cout<<"2.Subtraction:"<<"\n";
    cout<<"3.Multiplication:"<<"\n";
    cout<<"4.Division:"<<"\n";
    cout<<"enter the two numbers:";
    cin>>a>>b;
    cout<<"enter the operation:";
    cin>>op;
    switch(op)
    {
        case '+':
          cout<<"the addition of two number is "<<a+b;
          break;
        case '-':
          cout<<"the subtraction of two number is "<<a-b;
          break;
        case '*':
          cout<<"the multiplication of two numbers is "<<a*b;
          break;
        case '/':
        if (b==0)
        {
            cout<<"not possible";
            break;
        }
        else 
        {
          cout<<"the division of two numbers is "<<a/b;
           break;
        }
        default:
          cout<<"invalid operation";
    }
    return 0;

}*/


//VOWELS AND CONSONENTS:

/*#include<iostream>
using namespace std;
int main(){
    char alpha;
    cout<<"enter the alphabet:";
    cin>>alpha;
    switch(alpha)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
          cout<<"vowels";
          break;
        default :
          cout<<"consonents";

        }
        return 0;
}*/


//ATM MACHINE:

#include<iostream>
using namespace std;
int main(){
    float balance=20000;
    float amount;
    int choice;
    cout<<"the choice are:"<<"\n";
    cout<<"1.Check Bank Balance:"<<"\n";
    cout<<"2.Withdrawl Money:"<<"\n";
    cout<<"3.Deposited Money:"<<"\n";
    cout<<"4.Thanks for using ATM"<<"\n";
    cout<<"enter the choice:";
    cin>>choice;
    switch(choice)
    {
        case 1:
           cout<<"your bank balance is :"<<balance;
           break;
        case 2:
          cout<<"enter the money to be withdrawl :";
          cin>>amount;
          if (amount>balance)
          {
            cout<<"bhadwe itne paise hi nhi tere pe";
          }
          else 
          {
            balance=balance-amount;
            cout<<"your money has been sucessfully withdrawn collect the cash"<<"\n";
            cout<<"the remaining balance is :"<<balance;
            break;
          }
        case 3:
           cout<<"enter the money to deposit:";
           cin>>amount;
           balance=balance+amount;
           cout<<"money is sucessfully deposit:"<<"\n";
           cout<<"the balance is :"<<balance;
           break;
        case 4:
        cout<<"thanks for using ATM";
        break;

    }
    return 0;
}
