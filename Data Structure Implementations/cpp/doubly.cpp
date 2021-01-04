# include <iostream>
# include <bits/stdc++.h>

using namespace std;

class Node
{
   public:
   Node * prev;
   int data;
   Node * next;
}*first=NULL;

class DoublyLL
{
   public:
   DoublyLL(int A[] , int n);
   ~DoublyLL();
   void DisplaydLL(Node * p);
   int LengthdLL(Node * p);
   void Insertdll(Node * p , int pos , int dat);
   int DeletedLL(Node * p , int pos );
   void ReversedLL(Node * p);
};

DoublyLL:: ~DoublyLL()
{
    Node *p=first;
    Node *q;
    while(p)
    {
        q=p;
        first=q->next;
        if(q->next)q->next->prev=NULL;
        q->next=NULL;
        delete(q);
        p=first;
    }
    delete(p);
}

// Efficient One Delete All Destructor

// DoublyLL:: ~DoublyLL()
// {
//     Node *p=first;
//     while(first)
//     {
//         first=first->next;
//         if(p->next)p->next->prev=NULL;
//         p->next=NULL;
//         delete(p);
//         p=first;
//     }
// }

DoublyLL:: DoublyLL(int A[] , int n)
{
    Node *t=NULL,*q=NULL;
    first=new Node;
    first->next=NULL;
    first->data=A[0];
    first->prev=NULL;
    q=first;
    for(int i=1 ; i<n ; i++)
    {
        t=new Node;
        q->next=t;
        t->prev=q;
        t->data=A[i];
        t->next=NULL;
        q=t;
    }
}

int DoublyLL :: LengthdLL(Node * p)
{
    int len=0;
    while(p)
    {
        p=p->next;
        len++;
    }
    return len;
}

void DoublyLL :: DisplaydLL(Node * p)
{
     while(p)
     {
        cout<<p->data<<" ";
        p=p->next;
     }
     cout<<endl;
}

void DoublyLL :: Insertdll(Node * p , int pos , int dat)
{
    Node *t=NULL;
    if(pos<0 || pos>LengthdLL(first))return;
    if(pos==0)
    {
        t=new Node;
        t->data=dat;
        t->next=first;
        t->prev=NULL;
        if(first->next)
        first->next->prev=t;
        first=t;
    }
    else
    {
        for(int i=0; i<pos-1; i++)
        {
             p=p->next;
        }
        t=new Node; 
        t->data=dat;
        t->next=p->next;
        t->prev=p;
        if(p->next)
        p->next->prev=t;
        p->next=t;
    }
}

int DoublyLL:: DeletedLL(Node * p , int pos )
{
     int x=-1;
     if(pos<0 || pos>LengthdLL(first))return x;
     if(pos==1)
     {
         first=first->next;
         if(p->next)p->next->prev=NULL;
         p->next=NULL;
         x=p->data;
         delete(p);
     }
     else
     {
         for(int i=0 ; i<pos-1 ; i++)
         p=p->next;
         p->prev->next=p->next; 
         if(p->next)p->next->prev=p->prev;  
         x=p->data;
         p->next=NULL;
         delete(p);
     }
     return x;
}

void DoublyLL:: ReversedLL(Node * p)
{
    Node *temp=NULL;
    while(p)
    {
        temp=p->prev;
        p->prev=p->next;
        p->next=temp;
        if(p->prev==NULL)
        first=p;
        p=p->prev;
    }
}

int main()
{
    int A[]={10};
    DoublyLL d( A , 1 );
    // cout<<d.LengthdLL(first)<<" ";
    // d.DisplaydLL(first);
    // d.Insertdll(first,0,5);
    // cout<< "The data deleted is :"<<d.DeletedLL(first,0)<<endl;
    // d.ReversedLL(first);
    cout<<d.DeletedLL(first,1)<<endl;
    d.DisplaydLL(first);
    return 0;
}