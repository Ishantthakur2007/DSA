/*#include<iostream>
using namespace std;
int main(){
    int start,end,i,n;
    cout<<"enter the starting and ending point:";
    cin>>start>>end;
    for (n=start;n<=end;n++)
    {
        int count=0;
        for (i=1;i<=end;i++)
        {
            if (n%i==0)
            {
                count++;
            }
        }
        if (count==2)
        {
            cout<<n<<"\n";
        }
    }
    return 0;
}*/


//WITHOUT RETURN TYPE WITH PARAMETER:

/*#include<iostream>
using namespace std;
void area(int l, int b)
{
    cout<<"the area of rectangle is "<<l*b;
}
int main(){
    area(4,5);
    return 0;
}*/

//WITH RETURN TYPE WITH PARAMETERS

/*#include<iostream>
using namespace std;
float area(float r)
{
    float pi=3.14;
    return pi*r*r;

}
int main(){
    cout<<area(5);
    return 0;
}*/

//another method:

/*#include<iostream>
using namespace std;
float area(float r){
    float pi=3.14;
    float area=pi*r*r;
    cout<<"the area of a circle is ";
    return area;
}
int main(){
    cout<<area(5);
    return 0;
}*/


//WITH PARAMETER NO RETURN TYPE AND USER INPUT:

/*#include<iostream>
using namespace std;
void si(float p,float r,float t){
    float si=(p*r*t)/100;
    cout<<"the si interest is "<<si;
}
int main(){
    float pr,ra,ti;
    cout<<"enter the principle rate and time:";
    cin>>pr>>ra>>ti;
    si(pr,ra,ti);
    return 0;
}*/

// WITH PARAMETER NO RETURN TYPE AND USER INPUT:

/*#include<iostream>
using namespace std;
void total(float price,float quantity)
{
    float total=price*quantity;
    float gst=total*0.05;
    total=total+gst;
    float discount=total*0.20;
    total=total-discount;
    cout<<"the total bill including gst and discount is "<<total;
}
int  main(){
    float price_,quantity_;
    cout<<"enter the price and quantity of the object:";
    cin>>price_>>quantity_;
    total(price_,quantity_);
    return 0;
}*/


#include<iostream>
using namespace std;
void marks(float m1, float m2, float m3, float m4, float m5)
{
    float total=m1+m2+m3+m4+m5;
    float percentage=(total*100)/500;
    if (percentage>85 && percentage<=100)
    {
        cout<<"grade A";
    }
    else if (percentage>65 && percentage<=80)
    {
        cout<<"grade B";
    }
    else 
    {
        cout<<"grade F";
    }

}
int main(){
    float ma1,ma2,ma3,ma4,ma5;
    cout<<"enter the marks of five subjects:";
    cin>>ma1>>ma2>>ma3>>ma4>>ma5;
    marks(ma1,ma2,ma3,ma4,ma5);
    return 0;
}