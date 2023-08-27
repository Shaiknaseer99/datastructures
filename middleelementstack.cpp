#include <iostream>
#include<stack>
using namespace std;
void middlestack(stack<int>&s,int n)
{
     
     
      if(s.size()==n/2+1)
      {
        cout<<" the middle element is : "<<s.top()<<endl;
        return ;

      }
        
      char ch = s.top();
      s.pop();
     
      middlestack(s,n);
      s.push(ch);



}

int main() {
  // reversing the string  using the vector 
  stack<int>s;
  // pushing the elements in the stack
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);

  int n = s.size();
  middlestack(s, n);

  while(!s.empty())
  {
    cout<<s.top()<<endl;
    s.pop();

  }
  
  return 0;
}