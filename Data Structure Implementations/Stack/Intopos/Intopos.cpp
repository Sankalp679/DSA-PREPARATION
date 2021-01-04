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
   int isoperand(T exp);
   int precbef(T exp);
   int precaft(T exp);
   T * intopos(T *exp);
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
        if(!isempty())
        return 0;
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

template<typename T>
int Stack<T> :: precbef(T exp)
{
        if(exp == '+' || exp == '-')
        return 1;
        else if(exp == '*' || exp == '/')
        return 3;
        else if(exp == '^')
        return 6;
        else if(exp == '(')
        return 7;
        else if(exp == ')')
        return 0;
        else
        return 0; 
}

template<typename T>
int Stack<T> :: precaft(T exp)
{
        if(exp == '+' || exp == '-')
        return 2;
        else if(exp == '*' || exp == '/')
        return 4;
        else if(exp == '^')
        return 5;
        else if(exp == '(')
        return 0;
        else
        return 0;
}

template<typename T>
int Stack<T> :: isoperand(T exp)
{
        if(exp == '+' || exp == '-' || exp == '*' || exp == '/' || exp == '(' || exp == ')' || exp == '^')
        return 0;
        else
        return 1;
}

template<typename T>
T * Stack<T> :: intopos(T *exp)
{
   T * postfix;
   int j=0,i=0;
   postfix = new T[strlen(exp)+2];
   push('#');
   while(exp[i]!='\0')
   {
        if(isoperand(exp[i]))
          postfix[j++]=exp[i++];
        else
            if(precbef(exp[i])>precaft(Stacktop()))
                push(exp[i++]);
            else
            {
                if((precbef(exp[i])==precaft(Stacktop())) && precbef(exp[i])==0)
                {   
                   pop();
                   i++;
                }
                else
                     postfix[j++]=pop();   
            } 
   }
   while(isempty())
        postfix[j++]=pop();
   postfix[strlen(exp)+1]='\0';
   return postfix;
}

int main()
{
    char *exp = "((a+b)*c)-d^e^f";
    Stack<char>stk;
    // stk.push('a');
    // stk.push('b');
    // stk.push('c');
    // cout<<stk.peek(1)<<endl;
    // cout<<stk.isbalanced(exp)<<endl;
    // cout<<stk.pop()<<endl;
    // cout<<stk.pop()<<endl;
    // cout<<stk.pop()<<endl;
    // cout<<stk.pop()<<endl;
    // stk.display();
    cout<<stk.intopos(exp)<<endl;
    return 0;
}
