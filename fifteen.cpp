/*#include<iostream>
using namespace std;
class Student{
    public:
    int marks,id;
    string name;
    void display(){
        cout<<marks <<"\n";
        cout<<name <<"\n";
        cout<<id <<"\n";
    }

};
int main(){
    Student s;
    s.name="Ishant Thakur";
    s.marks=19;
    s.id=18;
    s.display();
    return 0;

}*/

//CONSTRUCTOR IS USED FOR ALLOCATING THE MEMORY.
//BANK ACCOUNT:

/*#include<iostream>
using namespace std;
class Bank_Account{
    private:
        int account_no;
        double balance;
        string name;
        
        public:  //constructor
           Bank_Account(int acc,double bal,string n)
           {
           account_no=acc;
           balance=bal;
           name=n;
           }
    void deposit(double amount)
    {
        if(amount>0)
        {
            cout<<"the amount deposited is :"<<amount<<"\n";
            balance+=amount;
            cout<<"the new balance is "<<balance<<"\n";

        }
        else{
            cout<<"invalid amount";
        }
    }
    void withdraw(double amount)
    {
        if(amount>0 && amount<balance)
        {
            cout<<"the amount to be withdrawn is :"<<amount<<"\n";
            balance-=amount;
            cout<<"the remaining balance is :"<<balance<<"\n";

        }
        else{
            cout<<"insufficient balance";
        }
    }
    void display()
    {
        cout<<"the name of the account holder is:"<<name<<"\n";
        cout<<"the a balance in the bank is :"<<balance<<"\n";
        cout<<"the account number is:"<<account_no<<"\n";
        
    }


};
int main(){
    int a;
    double b;
    string c;
    cout<<"enter the account number:";
    cin>>a;
    cout<<"enter the name of the account hoder:";
    cin>>c;
    cout<<"enter the balance in the account:";
    cin>>b;
    Bank_Account b1(a,b,c);
    b1.deposit(5000.0);
    b1.withdraw(1000.0);
    b1.display();
    return 0;

}
*/

//SALARY HRA DRA:

/*#include<iostream>
using namespace std;
class Salary{
   private:
      float basic_salary,gross_salary;
      string name;
      int id;
   public:
      Salary(float basic,string n,int eid)
      {
        basic_salary=basic;
        name=n;
        id=eid;
        gross_salary=0;
      }
      void calculate_gross_salary(){
        float hra=0.10*basic_salary;
        float dra=0.05*basic_salary;
        gross_salary=hra+dra+basic_salary;

      }
      void display(){
          cout << "employee name:" << name;
          cout << "\nemployee id:" << id;
          cout << "\nemployee basic salary:" << basic_salary;
          cout << "\nemployee gross salary:" << gross_salary << "\n";
      }

};
int main(){
    float a;
    int b;
    string c;
    cout<<"enter the name:";
    cin>>c;
    cout<<"enter the basic salary:";
    cin>>a;
    cout<<"enter the id :";
    cin>>b;
    Salary s(a,c,b);
    s.calculate_gross_salary();
    s.display();
    return 0;
}*/



//AREA OF RECTANGLE:

/*#include<iostream>
using namespace std;
class Rectangle{
     private:
         float length,breadth,area;
     public:
     Rectangle(float l,float b)
     {
        length=l;
        breadth=b;
        area=1;
     }
     void calculate(){
        area=length*breadth;
         
     }
     void display(){
        cout<<"the length of rectangle is:"<<length<<"\n";
        cout<<"the breadth of rectangle is :"<<breadth<<"\n";
        cout<<"the area of rectangle is :"<<area<<"\n";


     }
};
int main(){
    int a,b;
    cout<<"enter the length of rectangle :";
    cin>>a;
    cout<<"enter the breadth of rectangle:";
    cin>>b;
    Rectangle r(a,b);
    r.calculate();
    r.display();
    return 0;
}*/


#include<iostream>
using namespace std;
class Circle{
       private:
       float radius,area;
       public:
       Circle(){
           radius=1;
           
       }
       Circle(float r)
       {
        radius=r;
        
       }
       
       void calculate_area()
       {
        area=3.14*radius*radius;
       }
       void display(){
        cout<<"the area of circle is :"<<area;
       }

};
int main(){
    float d;
    cout<<"enter the radius of circle:";
    cin>>d;
    Circle c(d);
    Circle m;
    c.calculate_area();
    c.display();
    m.calculate_area();
    m.display();
    return 0;
    
}
    