//LINKED LIST:

#include<iostream>
using namespace std;
struct Node{         //defines the nodes of the linked list
    int data;    //stores the value.
    Node* Next;            //a pointer.

};
Node *Head = NULL;      // Head is a pointer to a Node, and currently it points to nothing because the linked list is empty.
int main(){
    int value,n;
    cout<<"enter the number of nodes:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"enter the value of " << i << " node:";
        cin>>value;
    Node * new_node=new Node();               //create a new node
    new_node->data = value;                   // store value in the node
    new_node->Next = NULL;                    // set next pointer to NULL
    if (Head == NULL)                         // This checks whether the linked list is empty.
    {
        Head = new_node;                          // If the list is empty, we make the new node the first node.
    }
    else{
        Node* temp=Head;              //this line is used to create another pointer that starts from the first node of the linked list.
        while(temp->Next!=NULL)  //temp → pointer to the current node  temp->Next → the address of the next node  != NULL → check that the next node exists
            {
                temp=temp->Next;


            }
            temp->Next=new_node;
        }
    }
    cout<<"Linked List created successfully."<<"\n";
    if(Head==NULL)
    {
        cout<<"the linked list is empty.";
        return 0;
    }
    else 
    {
        Node *temp=Head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->Next;
        }
        cout<<"NULL"<<"\n";
    }
    return 0;
    }