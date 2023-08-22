#include <iostream>
using namespace std;
class node
{
  public:
  int data;
  node * next;
  node()
  {
    this->data = 0;
    this->next = NULL;
  }
  node(int val)
  {
    data = val;
    this->next = NULL;
  }

};
void printll(node*head)
{
    while(head!=NULL)
    {
      cout<<head->data<<"->";
      head = head->next;
    }
}
void deletionathead(node*&head)
{
   node * temp = head;
   head = head->next;
   temp->next = NULL;
   delete(temp);
}
void deletionatlast(node *&head,node *& tail)
{
  node* temp = head;
  // i should also update the tail
  node * prev = NULL;
  while(temp->next!=NULL)
  {
    prev = temp;
    temp=temp->next;
  }
  prev->next = NULL;
  tail = prev;
  
  delete(temp);
}
void deleteatmiddle(node*&head,node*&tail,int pos)
{
     //write a destructor to delete a node 
     int count = 1;
     node* temp = head;
     node * prev = NULL;
     while(count<pos)
     {
      prev = temp;
      temp = temp->next;
      count++;
     }
     prev->next = temp->next;
     temp->next = NULL;
     delete(temp);

}


int main() {
  node * n1 =  new  node(5);
  node * n2 = new node(8);
  node * n3 = new node(9);
  node* n4 = new node(7);
  node * n5 = new node(4);
 node *  head = n1;
 node * tail = NULL;
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n5;
  cout<<"linked list traversal"<<endl;
  printll(head);
  // cout<<" deletion  of the linked list " <<endl;
  // deletionathead(head);
  // cout<<endl;
  // printll(head);
  // cout<<"deletion at the last position"<<endl;
  // deletionatlast(head,tail);
  // cout<<endl;
  // printll(head);
  // cout<<endl;
  // cout<<"tail data printing"<<endl;
  // cout<<tail->data<<endl;
   deleteatmiddle(head,tail,3);
   cout<<endl;
   cout<<" after deletion of the particular node " <<endl;
   printll(head);
   
   cout<<endl;

 



  return 0;
}