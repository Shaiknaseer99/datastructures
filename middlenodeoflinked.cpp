#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    // constructor
    node(int val)
    {
        data = val;
        this->next = NULL;
    }
};
// print   the linked list
void printll(node * head)
{
    node*temp = head;
    while(temp!=NULL)
    {
        //print the data 
        cout<<temp->data<<" ";
        temp = temp->next ;
    }
}
// length of the linked list
int  length(node*head)
{
    node*temp = head;
    int len = 0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len ;
}
int middlell(node*head)
{
    // calculate the length of the linked list 
    // can aslo handle the edge cases having the  node null and having only one node 
    int len = length(head);
    cout<<len<<endl;
    int count = 1 ;
    int ans ;
    node * temp = head;
    int length = len%2;
    if(length==0)
    {
        
        
        while(count<(len/2))
        {
            temp= temp->next;
            count++; 
        }
        ans =  temp->data;
        return ans ;
    }
    else{
        while(count<((len/2)+1))
        {
            temp = temp->next;
            count++;
        }
        ans = temp->data;
        return ans ; 

    }

}
// using the tortoise or two pointer approach to find the middle node of  the ll
node * middleofll(node*head)
{
    // two pointers slow and fast 
    node*slow = head;
    node*fast = head;
    while(fast!=NULL)
    {
        // increment  the fast by one step
        fast = fast->next ;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow = slow->next;
        }

    }
    return slow;
}
int main()
{
   node *n1 = new node(1);
   node *n2 = new node(2);
   node *n3 = new node(3);
   node *n4 = new node(4);
   node *n5 = new node(5);
   node *n6 = new node(6);
   n1->next = n2;
   n2->next = n3;
   n3->next = n4;
   n4->next = n5;
// n5->next = n6;
   node*head = n1;  // first node/head node
   node*tail = n5;  // last node// tail node
   cout<<"the linked list is: ";
   printll(head);
   cout<<endl;
//cout<<"length of the linked list: "<<length(head)<<endl;
   cout<<"middle of the linked list is :"<<middlell(head)<<endl;
   cout<<"using the two pinter approach :"<<middleofll(head)->data<<endl;

    return 0 ;
}