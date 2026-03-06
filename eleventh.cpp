/*#include<iostream>
using namespace std;
int main(){
int a[50];
int i,n;
cout<<"enter the number of elements in an array:";
cin>>n;
cout<<"enter the elements in an array:";
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<"\nthe size of array is :"<<sizeof(a);
cout<<"\nsize of an element: "<<sizeof(a[1]);
int t=sizeof(a)/sizeof(a[0]);
cout<<"\nthe size of array is :"<<t;
return 0;
}*/


//INSERTION OF AN ELEMENT:

/*#include<iostream>
using namespace std;
int main(){
    int a[5];
    int i,n,position,value;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in the array is:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the position:";
    cin>>position;
    if(position<1 || position>n-1)
    {
        cout<<"invalid position";
        return 0;
    }

    cout<<"enter the value:";
    cin>>value;
    for(i=n;i>=position;i--)
    {
        a[i]=a[i-1];
    }
   a[position-1]=value;
    n++;
    cout<<"array after insertion is :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/


//INSERTION IN A VECTOR:

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,a,value;
    vector<int>v;
    cout << "enter the number of elements in a vector:";
    cin >> n;
    cout<<"the element in a vector is :";
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cout<<"enter the value to insert:";
    cin>>value;
    int position;
    cout<<"enter the position:";
    cin>>position;
    v.insert(v.begin()+position,value);
    cout<<"insertion after vector is :";
    for(int i=0;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }

    
    return 0;
    
}*/

//DELETION OF AN ARRAY:

/*#include<iostream>
using namespace std;
int main(){
    int a[50];
    int i,n,position;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the position :";
    cin>>position;
    for(i=position-1;i<n-1;i++)
    {
           a[i]=a[i+1];
    }
    n--;
    cout<<"array after deletion:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}*/

//UPDATE:

/*#include<iostream>
using namespace std;
int main(){
    int i,n,position,value;
    int a[50];
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"the elements in an array is:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the position:";
    cin>>position;
    cout<<"enter the value;";
    cin>>value;
    a[position-1]=value;
    cout<<"elements updated sucessfully:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}*/

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    
	vector<int>v;
	int choice=0,position,value, n=0;
	cout<<"enter the number of elements in a vector:";
	cin>>n;
	int a;
	cout<<"the elements in the vectors are:";
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	cout<<"the elements in a vector is :";
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<"\n1.Insert:"<<"\n";
	cout<<"\n2.Delete:";
	cout<<"\n 3.Update:";
	cout<<"\n4.Display: ";
	cout<<"\n5.Exit: ";
	cout<<"\nenter the choice:";
	cin>>choice;

	while(choice!=5)
	{
		switch(choice)
		{
			case 1:
            {
				cout<<"enter the position :";
				cin>>position;
                cout<<"enter the value to insert:";
                cin>>value;
                if(position<1 || position>n+1)
                {
                    cout<<"invalid position";
                    return 0;
                }
                else{
                    n++;
                }
				cout<<"the vector after insert an element is :";
				v.insert(v.begin()+(position-1),value);
				n++;
				for(int i=0;i<n;i++)
				{
					cout<<v[i]<<" ";
					
				
				}
				break;
            }
			case 2:
            {
				int position;
				cout<<"enter the position to delete an element:";
				cin>>position;
				cout<<"vector after deleting an element is :";
				v.erase(v.begin()+(position-1));
				n--;
				for(int i=0;i<=v.size();i++)
				{
					cout<<v[i]<<" ";
				}
				break;
            }
		}
	}
  return 0;
}*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int v;
    int n, i, position, value, choice = 0;
    cout << "enter the number of elements in an array:";
    cin >> n;
    cout << "the elements in an array:";
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        a.push_back(v);
    }
    cout << "\n1.Insert:" << "\n";



    \
    
    cout << "\n2.Delete:";
    cout << "\n 3.Update:";
    cout << "\n4.Display: ";
    cout << "\n5.Exit: ";
    while (choice != 5)
    {
        cout << "\nenter the choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter the position:";
            cin >> position;
            cout << "enter the value:";
            cin >> value;
            if (position < 1 || position > n + 1)
            {
                cout << "invalid position";
                return 0;
            }
            else
            {
                a.push_back(0);
                for (i = n; i >= position; i--)
                {
                    a[i] = a[i - 1];
                }
                a[position - 1] = value;
                n++;
                cout << "inserted sucessfully:";
                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
            }
            break;
        case 2:
            if (n == 0)
            {
                cout << "array is empty";
            }
            else
            {
                cout << "enter the position:";
                cin >> position;
                if (position < 1 || position > n)
                {
                    cout << "invalid position";
                }
                else
                {
                    for (int i = position - 1; i < n - 1; i++)
                    {
                        a[i] = a[i + 1];
                    }
                    a.pop_back();
                    n--;
                    cout << "\ndeleted sucessfully";
                }
                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
            }
            break;
        case 3:
            int position;
            cout << "enter the position:";
            cin >> position;
            int value;
            cout << "enter the new value:";
            cin >> value;
            if (position < 1 || position > n)
            {
                cout << "invalid position";
            }
            else
            {
                a[position - 1] = value;
                cout << "updated sucessfully ";
            }
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            break;
        case 4:
            if (n == 0)
            {
                cout << "array is empty";
            }
            else
            {
                cout << "the array elements are:";
                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
            }
            break;
        case 5:
            cout << "exit the program";
            break;
        default:
            cout << "invalid choice";
        }
    }
    return 0;
}