#include <iostream>
using namespace std;
class stack 
{
    public:
    int *arr;
    int top;
    int size;
    stack(int size)
    {
       arr = new int[size];
      this->size = size;
      top = -1 ;
    }

void push(int data )
{
  if(top>=size-1)
  {
    cout<<"OVERFLOW";
    
  }
  else
  {
       top++;
      arr[top]  = data ;

  }
}
void pop()
{
  if(top==-1)
  {
    cout<<"UNDERFLOW"<<endl;
    
  }
  else
  {
    top--;
  }
}
int getsize()
{
  if(top==-1)
  {
    cout<<" the stack is empty"<<endl;
    
  }
  return top+1;
 
}
int gettop()
{
  if(top==-1)
  {
    cout<<" the stack is empty"<<endl;
  }
  return arr[top];
}
bool isempty()
{
  if(top==-1)
  {
    return  false ;
  }
  return true;

  
}
};


int main() {
  // creating  the stack 
  stack s(5);
  // pushing the elements 
  s.push(4);
  s.push(8);
  s.push(9);
  s.push(10);
  s.push(3);
  
  s.push(23);
  // popping the elements 
  


  //  top of the element after pushing the element
  cout<<endl;
  cout<<"the element at the top is : " <<s.gettop()<<endl;
  //size of the stack
  cout<<"size of the stack is : "<<s.getsize()<<endl;
  // checking  whether the stack is empty or not 
  cout<<s.isempty()<<endl;
  
  return 0;
}