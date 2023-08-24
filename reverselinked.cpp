#include<iostream>
using namespace std;
// creation of the node
class node
{
    public:
    int  data ;
    node*next ;
    node()
    {
        this->data =0;
        this->next = NULL;
    }
    node(int val)
    {
        data = val;
        this->next =NULL;
    }
    
};
// printing || traversing the linked list 
void printll(node * head)
{
    // i can use the tempoarary variable and can alos done with  the help of the temporary variable
    node * temp = head;
    while(temp!=NULL)
    {
        //print the data 
        cout<<temp->data<<"->";
        temp= temp->next ;
    }
}
// reverse of  the linekd list returns the head of the linked list
node * reverse(node*&head)
{
    // passing by reference in order to make the changes to the original linked list 
    // doing it in  the  iterative way 
    node * prev  = NULL;
    node * curr = head;
    node * forward = NULL;
    while(curr!=NULL)
    {
        forward = curr->next;
        curr->next = prev;
         prev = curr;
         curr = forward;
    }
    // returning the head position
    return prev;

}

int main()
{
    node * n1 = new node(7);
    node * n2 =new node(4);
    node * n3 = new node(3);
    node * n4 = new node(2);
    // connecting the nodes with each other 
    n1->next = n2 ;
    n2->next = n3;
    n3->next  = n4 ;
    // n4 next is pointing to the null
    // first node making as the head
    node * head = n1 ;
    node * tail = n4;
    cout<<" traversal of the linked list : "<<endl;
    printll(head);
    cout<<endl;
    // data of the head
    cout<<"head data:"<<head->data<<endl;
    cout<<"tail data :"<<tail->data<<endl;
    cout<<"reverse of  the linked list: "<<endl;
    head = reverse(head);
    cout<<head<<endl;
    printll(head);



    return 0 ;

}