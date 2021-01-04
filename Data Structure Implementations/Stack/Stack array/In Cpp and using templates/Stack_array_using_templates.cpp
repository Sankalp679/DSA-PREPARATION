// Stack using templates and efficient c++

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template<typename T>
class Stack
{
   private:
   int top;
   int size;
   T *st;
   public:
   Stack()
   {
      top = -1;
      size = 10;
      st = new T[size];
   }
   Stack(int size)
   {
      this->size = size;
      top = -1;
      st = new T[this->size];
   }
   void push(T x);
   T pop();
   T peek(int index);
   int isempty();
   int isfull();
   void stacktop();
   void display();
};

template<typename T>
void Stack<T> :: push(T x)
{
      if(isfull())
         cout<<"Stack Overflow"<<endl;
      else
      {
         top++;
         st[top]=x;
      }
}

template<typename T>
T Stack<T> :: pop()
{
   T x=-1;
   if(!isempty())
   cout<<"Stack Underflow"<<endl;
   else
   x=st[top--];
   return x;
}

template<typename T>
T Stack<T> :: peek(int index)
{
   T x = -1;
   if(top-index+1<0)
   cout<<"Invalid Index"<<endl;
   else
   x=st[top-index+1];
   return x;
}

template<typename T>
int Stack<T> :: isfull()
{
    if(top>=size-1)
       return 1;
    else
       return 0; 
}

template<typename T>
int Stack<T> :: isempty()
{
   if(top==-1)
      return 0;
   else 
      return 1;
}

template<typename T>
void Stack<T> :: stacktop()
{
  if(!isempty())
  cout<<"Stack Empty"<<endl;
  else
  cout<<st[top]<<endl; 
}

template<typename T>
void Stack<T> :: display()
{
    if(!isempty())
       cout<<"Stack Empty"<<endl;
    else
    for(int i=top; i>=0; i--)
       cout<<st[i]<<" ";
    cout<<endl;
}

int main()
{
   Stack<char>stk(5);
   stk.push('a');
   stk.push('b');
   stk.push('c');
   stk.push('d');
   stk.push('e');
   stk.push('f');
  //  cout<<stk.pop()<<endl;
  //  cout<<stk.pop()<<endl;
   cout<<stk.isfull()<<endl;
  //  cout<<stk.isempty()<<endl;
  //  cout<<stk.pop()<<endl;
  //  cout<<stk.peek(2)<<endl;
  //  stk.display();
   return 0;
}