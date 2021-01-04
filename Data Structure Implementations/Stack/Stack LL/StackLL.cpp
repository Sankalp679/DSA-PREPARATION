#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node
{
   public:
   int data;
   Node *next;
};

class Stack
{
   private:
   Node * top;
   public:
   Stack()
   {
      top=NULL;
   }
   void push(int val);
   int pop();
   int peek(int index);
   void Stacktop();
   int isempty();
   int isfull();
   void display();
};

void Stack :: push(int val)
{
    Node * t;
    t=new Node;
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

int  Stack :: pop()
{
    Node * t;
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

int Stack :: peek(int index)
{
  int x=-1;
      if(!isempty())
          cout<<"Stack Empty"<<endl;
      else
      {
        Node *t;
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

void Stack :: Stacktop()
{
    if(!isempty())
        cout<<"Stack Empty"<<endl; 
    else
        cout<<top->data<<endl;
}

int Stack :: isempty()
{
    if(top==NULL)
        return 0;
    else
        return 1;
}

int Stack :: isfull()
{
    Node * t;
    t=new Node;
    if(t==NULL)
        return 1;
    else
        return 0;
    delete(t);
}

void Stack :: display()
{
    Node *t;
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

int main()
{
    Stack stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.peek(1);
    // cout<<stk.pop()<<endl;
    // cout<<stk.pop()<<endl;
    // cout<<stk.pop()<<endl;
    // cout<<stk.pop()<<endl;
    // stk.display();
    return 0;
}
