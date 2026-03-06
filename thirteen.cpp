//LINEAR SEARCH:

/*#include<iostream>
using namespace std;
int main(){
    int a[50],n,key;
    int p[50],k=0;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key:";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
          p[k++]=i;
           
        }
    }
        if(k==0)
        {
            cout<<"element not found";        
        }
        else
        {
            cout << "element found at:";
            for (int i = 0; i < k; i++)
            {
               
                cout << p[i] << " ";
            }
        }
    return 0;
}*/

//BINARY SEARCH:always have sorted array.

/*#include<iostream>
using namespace std;
int main(){
    int a[50],n,i,k,key;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    int low=0,high=n-1;
;    cout<<"the number of elements in an array is:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key:";
    cin>>key;
    while(low<=high)
    {
        int mid;
        mid=(high+low)/2;
        if(a[mid]==key)
        {
            cout<<"element found at the index "<<mid;
            return 0;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
   cout<<"element not found";
    return 0;

}*/

//SORING OF AN ARRAY:

#include<iostream>
using namespace std;
int main(){
    int a[50],n,temp,i,j;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
     
               }
           }
    }
    cout<<"after sorting an array :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

/*An insurance company follows following rules to calculate premium.
      1. If a person health is excellent and the person is in between 25-35 years of age and lives 
          In a city and is a male. Then the premium is Rs. 4 per thousand and his policy amount  
          cannot exceed Rs. 2 lakhs.
      2. if a person satisfies all the above condition except that the sex is female then the 
          premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.
      3. If a person’s health is poor and the person is between 25 and 35 years of age and lives in    
           a village and is a male then the premium is Rs. 6 per thousand and his policy cannot  
          exceed Rs. 10,000.*/

/*#include<iostream>
using namespace std;
int main(){
    int health,person,age,place,premium,policy;
    cout<<"enter the person's health:";
    cin>>health;
    if(health==excellent)
    { 
        cout<<"enter the age:";
        cin>>age;
          if(age>=25 && age<=35)
          {
            cout<<"enter the place:";
            if(place==city)
            {
                
                if(person==female)
                {
                   cout<<"the premimum is Rs 3 per thousand"<<"\n";
                   cout<<"the policy amount cannot exceed Rs 1 lakh";
                }

            }
          }

    }
return 0;
}*/

/*include<iostream>
 using namespace std;
int main()
{
    int health, person, age, place, premium, policy;
    cout << "enter the person's health:";
    cin >> health;
    if (health == excellent)
    {
        cout << "enter the age:";
        cin >> age;
        if (age >= 25 && age <= 35)
        {
            cout << "enter the place:";
            if (place == city)
            {

                if (person == female)
                {
                    cout << "the premimum is Rs 3 per thousand" << "\n";
                    cout << "the policy amount cannot exceed Rs 1 lakh";
                }
            }
        }*/

/*#include <iostream>
using namespace std;

int main()
{
    int age;
    char health, gender, place;
    float policyAmount, premiumRate;
    cout << "Enter health (E for Excellent, P for Poor): ";
    cin >> health;
    if(health != 'E' && health != 'P')
    {
        cout << "bawaseer ho gyi h kya";
        return 0;
    }

    cout << "Enter age: ";
    cin >> age;
    if(age < 25 || age > 35)
    {
        cout << "age to sahi daal le dalle";
        return 0;
    }

    cout << "Enter gender (M for Male, F for Female): ";
    cin >> gender;
    if(gender!=M && gender!=F)
    {
       cout<<"kinner madarchod";
       return 0;
    }

    cout << "Enter place (C for City, V for Village): ";
    cin >> place;
    if(place!=C && place!=V)
    {
       cout<<"place sahi daal le gandu";
       return 0;
    }
    if (health == 'E' && age >= 25 && age <= 35 && place == 'C' && gender == 'M')
    {
        premiumRate = 4;
        policyAmount = 200000;
        cout << "Premium: Rs. " << premiumRate << " per thousand\n";
        cout << "Maximum Policy Amount: Rs. " << policyAmount ;
    }
    else if (health == 'E' && age >= 25 && age <= 35 && place == 'C' && gender == 'F')
    {
        premiumRate = 3;
        policyAmount = 100000;
        cout << "Premium: Rs. " << premiumRate << " per thousand\n";
        cout << "Maximum Policy Amount: Rs. " << policyAmount ;
    }
    else if (health == 'P' && age >= 25 && age <= 35 && place == 'V' && gender == 'M')
    {
        premiumRate = 6;
        policyAmount = 10000;
        cout << "Premium: Rs. " << premiumRate << " per thousand\n";
        cout << "Maximum Policy Amount: Rs. " << policyAmount ;
    }
    else
    {
        cout << "Person is not eligible for insurance under given rules.";
    }

    return 0;
}*/




//SECOND LARGEST ELEMENT IN AN ARRAY:

/*#include<iostream>
using namespace std;
int main(){
    int a[50],n,second,max;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]>a[1])
    {
        max=a[0];
        second=a[1];
    }
    else{
        max=a[1];
        second=a[0];
    }
    for(int i=2;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            second=max;
        }
        else if(a[i]>second && a[i]!=max)
        {
            second=a[i];
        }
        
    }
    cout<<"the second largest element in an array is :"<<second;

    return 0;
}*/


//SECOND MINIMUM ELEMENT IN AN ARRAY:

/*#include<iostream>
using namespace std;
int main(){

    int a[50],n,second,min;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(a[0]<a[1])
    {
        min=a[0];
        second=a[1];
    }
    else{
        min=a[1];
        second=a[0];
    }
    for(int i=2;i<n;i++)
    {
        if(a[i]<min)
        {
            second=min;
            min=a[i];
        }
        else if(a[i]<second && a[i]!=min)
        {
            second=a[i];
        }
        
    }
    cout<<"the second minimum element in an array is :"<<second;

    return 0;
}*/

/*#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    map<char, int> freq;

    for (char c : s)
    {
        freq[c]++;
    }

    cout << "\nCharacter Frequency:\n";
    for (auto it : freq)
    {
        if (it.first == ' ')
            cout << "[space] : " << it.second;
        else
            cout << it.first << " : " << it.second;
    }

    return 0;
}*/

// In a company the work efficiency is determined on the basis of the time required for a    
//       worker to complete a particular job. If the time taken by the worker is between 2-3 hours,  
//       then the worker is said to be highly efficient. If the time required by the worker is between  
//       3-4 hours, then the worker is ordered to improve speed. If the time taken is between 4-5  
//      hours, the worker is given training to improve his speed and if the time taken by the worker 
//      is more than 5 hours, then the worker has to leave the company, if the time taken by the 
//      worker is input through the keyword, find the efficiency of the worker.


/*#include<iostream>
using namespace std;
int main(){
    float time;
    cout<<"enter the time (in hours) to complete the task:";
    cin>>time;
    if (time>0 && time<=2)
    {
        cout<<"u did a great job";
    }
   else if(time>2 && time<=3)
    {
        cout<<"highly efficient";
    }
    else if (time>3 && time<=4)
    {
        cout<<"u need to work on your speed";
    }
    else if (time>4 && time<=5)
    {
        cout<<"you have to do training to increase your speed at work";
    }
    else{
        cout<<"pehli fursat m nikal lode company se";
    }
    return 0;



}*/

