#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node * next;
    int data;
    Node * prev;
}*head=NULL;

class CirdoublyLL{
    public:
    CirdoublyLL(Node *p, int A[], int n);
    ~CirdoublyLL();
    void cirdbLLinsert(Node *p, int pos, int dat);
    int cirdbLLdelete(Node *p, int pos);
    void cirdbLLdisplay(Node *p);
    int cirdbLLlength(Node *p);
};
// Node 1 Node 2 Node 3 Node 4 Node 5
void CirdoublyLL:: ~CirdoublyLL()
{
    Node *p=head,*q;
    q=p;
    if(p!=NULL)
    {
    while (head->next!=head)
    {  
        head=head->next;
        p->next->prev=p->prev;
        p->prev->next=p->next;
        p->next=NULL;
        p->prev=NULL;
        delete(p);
        p=head;
    }
    delete(p);
    head=NULL;
    }
}

CirdoublyLL :: CirdoublyLL(Node *p, int A[], int n)
{
     Node *t;
     head=new Node;
     head->data=A[0];
     p=head;
     for(int i=1; i<n ; i++)
     {
         t=new Node;
         t->data=A[i];  
         p->next=t;
         t->prev=p;
         p=p->next;
     }
     p->next=head;
     head->prev=p;
}


void CirdoublyLL :: cirdbLLdisplay(Node *p)
{
    if(p!=NULL){
        do
        {
            cout<<p->data<<" ";
            p=p->next;
        }while(p!=head);
    }
     cout<<"\n";
}

int CirdoublyLL :: cirdbLLlength(Node *p)
{
   int len=0;
   if(p!=NULL)
   {
        do
        {
            p=p->next;
            len++;
        } while (p!=head);
   } 
   return len;
}

void CirdoublyLL :: cirdbLLinsert(Node *p, int pos , int dat)
{
     Node *t=NULL;
     if(pos<0 || pos>cirdbLLlength(head))return;
     if(pos==0)
     {
         t=new Node;
         t->next=p;
         t->data=dat;
         p=p->prev;  
         t->prev=p;
         p->next=t;
         head->next->prev=t;
         head=t;
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
         if(p->next)p->next->prev=t;
         p->next=t;
     }  
}

int CirdoublyLL :: cirdbLLdelete(Node *p,int pos)
{
     int x=-1;
     Node * q;
     if(pos<1 || pos>cirdbLLlength(head))return x;
     if(pos==1)
     {
         if(p!=NULL)
         {
            q=p;
            p=p->prev; 
            x=q->data;
            if(p->next!=head)
            {
                p->next=q->next;
                if(q->next)q->next->prev=p;
                head=head->next;
                q->next=NULL;
                q->prev=NULL;
                delete(q);
            }
            else
            {
                p->next=NULL;
                p->prev=NULL;
                head=NULL;
                delete(p);
            }   
         }  
     }
     else
     {
         for(int i=0; i<pos-1 ; i++)
         {
             q=p;
             p=p->next;
         }
         x=p->data;
         q->next=p->next;
         if(p->next)p->next->prev=q;
         p->next=NULL;
         p->prev=NULL;
         delete(p);
     }
     return x;
}

// Node 1 Node 2 Node 3 Node 4 Node 5
int main()
{
    int A[]={10,20,30,40,50};
    CirdoublyLL c(head, A , 5);
    c.CirdoublyLL1();
    // c.cirdbLLdisplay(head);
    cout<<c.cirdbLLlength(head)<<endl;
    // c.cirdbLLinsert(head,0,3);
    // c.cirdbLLdisplay(head);
    // cout<<c.cirdbLLdelete(head,1)<<endl;
    // c.cirdbLLdisplay(head);
    return 0;
}

