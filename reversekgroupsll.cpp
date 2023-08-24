#include<iostream>
using namespace std;
class node
{
    public:
    int  data ;
    node*next;
    node(int val)
    {
        data = val;
        this->next = NULL;
    }
};
void printll(node*head)
{
    node*temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
}
node * reversekgroups(node*&head,int k)
{
    node * prev = NULL;
    node * curr = head;
    node* forward = NULL;
    int count = 0;
    while(count<k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if(forward!=NULL)
    {
        head->next = reversekgroups(forward,k);
    }
    return prev;

}

int main()
{
    node* n1 = new node(100);
    node* n2 = new node(200);
    node *n3 = new node(300);
    node * n4 = new node(400);
    node* n5 = new node(500);
    node * n6 = new node(600);
    node * head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    cout<<"printing the liked list:";
    printll(head);
    cout<<endl;
    cout<<"reversing the  linked list in k  groups : ";
    head = reversekgroups(head,2);
    cout<<head->data<<endl;
    printll(head);
   
    



    return 0 ;
}