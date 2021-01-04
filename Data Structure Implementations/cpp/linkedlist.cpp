#include <iostream>
using namespace std;
// Circular Linked List
class Node
{
    public :
    int data;
    Node *next;
    
}*head=NULL;

class CirLinkedlist
{
    // private:
    // Node *head;
    public:
    // Constructor
    CirLinkedlist(){head=NULL;}
    CirLinkedlist(int A[],int n);
    // Destructor Remaining

    // Function Declaration
    int lengthcl();
    void displaycl();
    void displayclr(Node * p); //Doubt Recursive Function
    void insertcl(int dat, int pos);
    int deletecl(int pos);
};
// Create Function

// Scope Resolution

CirLinkedlist:: CirLinkedlist(int A[],int n)
{
    Node *t=NULL,*q;
    head = new Node;
    head->data=A[0];
    q=head;
    for(int i=1;i<n;i++)
    {
         t= new Node;
         t->next=NULL;
         t->data=A[i];
         q->next=t;
         q=t;
    }
    q->next=head;
}

// Length Function

int CirLinkedlist:: lengthcl()
{
    Node *p=head;
    int count=0;
    if(p==NULL)count=0;
    else
    do
    { 
        count++;
        p=p->next;
    } while(p!=head);
    return count;
}

// Display Function

void CirLinkedlist:: displaycl()
{
    Node *p=head;
    if(head==NULL)cout<<"Empty Circular Linked List"<<endl;
    else
    do
    {
      cout<<p->data<<" ";
      p=p->next;
    } while (p!=head);  
    cout<<endl;
} 

// Recursive Display Function

void CirLinkedlist:: displayclr(Node * p)
{
    // Node *p=head;
    static int flag=0;
    if(p!=head || flag==0)
    {
        flag=1;
        cout<<p->data<<" ";
        displayclr(p->next);
    }
    flag=0;
}

// Insert Function

void CirLinkedlist:: insertcl(int dat, int pos)
{
   Node * t, *q, *p=head;
   if(pos<0 || pos>lengthcl())
   {
       cout<<"Enter valid position : "<<endl;
       return;
   }
   else if(pos==0)
   {
        t= new Node;
        t->data=dat;
        if(p==NULL)
        {
            head=t;
            t->next=head;
        }
        else
        {
            do
            {
                p=p->next;
            }
            while (p->next!=head);
            t->next=head;
            head=t;
            p->next=t;
        }
   }
   else
   {
        t= new Node;
        t->data=dat;
        for(int i=0 ; i<pos-1 ; i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
   }
}

// Delete Function

int CirLinkedlist:: deletecl(int pos)
{
    Node *q=NULL,*p=head;
    int x;
    if(pos<0 || pos>lengthcl())return -1;
    if(pos==1)
    {
        if(p==head)
        {
            x=p->data;
            delete(head);
            head=NULL;
        }
        else
        {
            do
            {
                p=p->next;
            } while (p->next!=head);
            p->next=head->next;   
            x=head->data;
            head->next=NULL;
            delete(head);
            head=p->next;
        }
    }
    else
    {
        for(int i=0; i<pos-1; i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        p->next=NULL;
        delete(p);
    }
    return x;
}
// node 1 node 2 node 3 node 4
int main()
{
    // createcl(A,4);
    // printf("Length of circular linked list is %d\n",lengthcl(head));
    // displaycl(head);
    // displayclr(head);
    // printf("Enter the data to be inserted: ");
    // scanf("%d",&dat);
    // printf("Enter the position the data need to be inserted: " );
    // scanf("%d",&pos);
    // insertcl(head,dat,pos);
    // printf("Enter the position to be deleted : " );
    // scanf("%d",&pos);
    // printf("The node having data %d have been deleted: \n",deletecl(head,pos));
    // displaycl(head);
    int dat,pos;
    int A[] = {1,2,3,4};
    CirLinkedlist l(A,4);
    // l.displaycl();
    // cout<<l.lengthcl()<<endl;
    // l.insertcl(4,0);
    // l.displaycl();
    // l.deletecl(2);
    // l.displaycl();
    l.displayclr(head);
    return 0;
}