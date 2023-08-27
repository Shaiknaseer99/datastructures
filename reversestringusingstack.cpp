#include <iostream>
#include<stack>
using namespace std;

int main() {
  // reversing the string  using the vector 
  stack<char>ch;
  string s;
  cout<<" enter the string :"<<endl;
  cin>>s;
  // pushing the elemens in the stack
  for(int i = 0 ; i<s.length();i++)
  {
       ch.push(s[i]);
  }
  // performing the reverse operation on the string 
  while(!ch.empty())
  {
      cout<<ch.top()<<endl;
      ch.pop();
  }


  return 0;
}