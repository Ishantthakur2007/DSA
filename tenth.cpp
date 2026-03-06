//VECTORS:

/*#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout<<" the elements are :";
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<"\n the size of vector is :"<<v.size();
    cout<<"\n the capacity of vector is :"<<v.capacity();
    cout<<"\n the front element of vector is:"<<v.front();
    cout<<"\n the back element of vector is :"<<v.back();
    cout<<"\nthe vector after insertion of element is:";
    v.insert(v.begin()+2,100);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<"\nafter removing last element:";

    v.pop_back();
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<"\n after erasing the element in an vector:";
    v.erase(v.begin()+3);
    for(int x:v)
    {
        cout<<x<<" ";
    }

    return 0;
}*/

/*#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> marks;
    int choice;
    while (choice != 5)
    {

        cout << "\n===== Student Marks Management =====\n";
        cout << "1. Create (Insert Marks)\n";
        cout << "2. Read (Display Marks)\n";
        cout << "3. Update Marks\n";
        cout << "4. Delete Marks\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int mark;
            cout << "Enter marks to insert: ";
            cin >> mark;
            marks.push_back(mark);
            cout << "Mark inserted successfully!\n";
            break;
        }
        case 2:
        {
            if (marks.empty())
            {
                cout << "No marks available!\n";
            }
            else
            {
                cout << "Stored Marks: ";
                for (int m : marks)
                    cout << m << " ";
                cout << endl;
            }
            break;
        }
        case 3:
        {
            int index, newMark;
            cout << "Enter index to update:";
            cin >> index;
            if (index >= 0 && index < marks.size())
            {
                cout << "Enter new mark: ";
                cin >> newMark;
                marks[index] = newMark;
                cout << "Mark updated successfully!\n";
            }
            else
            {
                cout << "Invalid index!\n";
            }
            break;
        }
        case 4:
        {
            int deleteChoice;
            cout << "1. Delete last mark (pop_back)\n";
            cout << "2. Delete mark at index\n";
            cout << "Enter your choice: ";
            cin >> deleteChoice;
            if (deleteChoice == 1)
            {
                if (!marks.empty())
                {
                    marks.pop_back();
                    cout << "Last mark deleted!\n";
                }
                else
                {
                    cout << "Vector is empty!\n";
                }
            }
            else if (deleteChoice == 2)
            {
                int index;
                cout << "Enter index to delete: ";
                cin >> index;
                if (index >= 0 && index < marks.size())
                {
                    marks.erase(marks.begin() + index);
                    cout << "Mark deleted successfully!\n";
                }
                else
                {
                    cout << "Invalid index!\n";
                }
            }
            else
            {
                cout << "Invalid choice!\n";
            }
            break;
        }
        case 5:
            cout << "Exiting the program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
 } 
    return 0;
}*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int choice = 0, position, value;
    cout << "1. Insert:" << "\n";
    cout << "\n2. Delete:";
    cout << "\n 3. Update:";
    cout << "\n4. Display: ";
    cout << "\n5. Exit: ";
    cout << "enter the choice:";
    cin >> choice;
    int n;
    cout << "enter the number of elements in a vector:";
    cin >> n;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    cout << "the elements in a vector is :";
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}