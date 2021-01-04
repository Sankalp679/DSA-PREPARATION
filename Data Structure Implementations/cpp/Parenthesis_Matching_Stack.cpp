#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Node
{
   public:
   T data;
   Node<T> *next;
};

template<typename T>
class Stack
{
   private:
   Node<T> * top;
   public:
   Stack()
   {
      top=NULL;
   }
   void push(T val);
   T pop();
   T peek(int index);
   T Stacktop();
   int isempty();
   int isfull();
   void display();
   int isbalanced(T *exp);
};

template<typename T>
void Stack<T> :: push(T val)
{
    Node<T> * t;
    t=new Node<T>;
    if(t==NULL)
    {
        cout<<"Stack Overflow"<<endl;
        return;
    }
    else
    {
        t->next=top;
        t->data=val;
        top=t;
    }
}

template<typename T>
T Stack<T> :: pop()
{
    Node<T> * t;
    int x=-1;
    if(top==NULL)
    cout<<"Stack Underflow"<<endl;
    else
    {
       t=top;
       x=top->data;
       top=top->next;
       t->next=NULL;
       delete(t);
    }
    return x;
}

template<typename T>
T Stack<T> :: peek(int index)
{
  int x=-1;
      if(!isempty())
          cout<<"Stack Empty"<<endl;
      else
      {
        Node<T> *t;
        t=top;
        for(int i=0 ; i<(index-1) ; i++)
        {
          if(t->next)
            t=t->next;
          else
          {
            t=t->next;
            break;
          }
        }
        if(t==NULL)
        {
          cout<<"Invalid Index"<<endl;
        }
        else
        x=t->data;
      }     
      return x;
}

// NOT WORKING
// int Stack :: peek(int index)
// {
//     int x=-1;
//       if(!isempty())
//           cout<<"Stack Empty"<<endl;
//       else
//       {
//         Node * t;
//         t=top;
//         for(int i=0 ; i< (t!=NULL) && (index-1) ; i++)
//         {
//             t=t->next;
//             cout<<t<<endl;
//         }
//         if(t==NULL)
//           cout<<"Invalid Index "<<endl;
//         else
//           x=t->data;
//       }    
//     return x; 
// }

template<typename T>
T Stack<T> :: Stacktop()
{
    T x =-1;
    if(!isempty())
        cout<<"Stack Empty"<<endl; 
    else
       x=top->data;
    return x;   
}

template<typename T>
int Stack<T> :: isempty()
{
    if(top==NULL)
        return 0;
    else
        return 1;
}

template<typename T>
int Stack<T> :: isfull()
{
    Node<T> * t;
    t=new Node<T>;
    if(t==NULL)
        return 1;
    else
        return 0;
    delete(t);
}

template<typename T>
void Stack<T> :: display()
{
    Node<T> *t;
    t=top;
    if(!isempty())
        cout<<"Stack Empty"<<endl;
    else
        while(t)
        {
            cout<<t->data<<" ";
            t=t->next;
        }
    cout<<endl;
} 

template<typename T>
int Stack<T> :: isbalanced(T *exp)
{
    for(int i=0 ; i<strlen(exp) ; i++)
    {
      if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
      push(exp[i]);
      else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
      {
        T x;
        x=Stacktop();
        pop();
        if((x=='(' && exp[i]==')') || (x=='{' && exp[i]=='}') || (x=='[' && exp[i]==']'))
        {
          continue;
        }
        else
          return 0;
      }
    }
    if(!isempty())
    return 1;
    else 
    return 0;
}

int main()
{
    char *exp = "{[a+b)*(c+d]}";
    Stack<char> stk;
    // stk.push('a');
    // stk.push('b');
    // stk.push('c');
    // cout<<stk.peek(1)<<endl;
    cout<<stk.isbalanced(exp)<<endl;
    // cout<<stk.pop()<<endl;
    // cout<<stk.pop()<<endl;
    // cout<<stk.pop()<<endl;
    // cout<<stk.pop()<<endl;
    // stk.display();
    return 0;
}
