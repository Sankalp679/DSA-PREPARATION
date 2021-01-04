#include<stdio.h>
#include<stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// }*first=NULL,*second=NULL,*third=NULL;

// void create1( int A[],int n)
// {
//    struct Node *last,*t;
//    first=(struct Node*)malloc(sizeof(struct Node));
//    first->data=A[0];
//    first->next=NULL;
//    last=first;
//    for(int i=1;i<n;i++)
//    {
//       t=(struct Node*)malloc(sizeof(struct Node));
//       last->next=t;
//       t->data=A[i];
//       t->next=NULL;
//       last=t;
//    }
// }

// void create2( int B[],int n)
// {
//    struct Node *last,*t;
//    second=(struct Node*)malloc(sizeof(struct Node));
//    second->data=B[0];
//    second->next=NULL;
//    last=second;
//    for(int i=1;i<n;i++)
//    {
//       t=(struct Node*)malloc(sizeof(struct Node));
//       last->next=t;
//       t->data=B[i];
//       t->next=NULL;
//       last=t;
//    }
// }

// void display(struct Node *p)
// {
//    while(p!=NULL)
//    {
//        printf("%d ",p->data);
//        p=p->next;
//    }
//    printf("\n");
// }
// // Printing Linkedlist using recursion in reverse order
// void Rdisplay(struct Node *p)
// {
//    if(p!=NULL)
//    {
//        Rdisplay(p->next);
//        printf("%d ",p->data);
//    }
// }

// // count
// int count3(struct Node *p)
// {
//     int count1=0;
//     while(p)
//     {
//         p=p->next;
//         count1++;
//     }
//     return count1;
// }
// // count recursion
// int countR(struct Node *p)
// {
//     if(p)
//     {
//         return countR(p->next)+1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// // sum
// int sum(struct Node *p)
// {
//     int sum1=0;
//     while(p)
//     {
//         sum1=sum1+p->data;
//         p=p->next;
//     }
//     return sum1;
// }
// // sum recursion
// int sumR(struct Node *p)
// {
//     int sum2=0;
//     if(p)
//     {
//         return sumR(p->next)+p->data;
//     }
//     else
//     {
//         return 0;
//     }   
// }
// int max(struct Node *p)
// {
//     int max1=-10;
//     while(p)
//     {
//         if(p->data>max1)
//         max1=p->data;
//         p=p->next;
//     }
//     return max1;
// }
// // mycode maxR
// // int max1=-10;
// // int maxR(struct Node *p)
// // {
// //     if(p)
// //     {
// //         if(p->data>max1)
// //         max1=p->data;
// //         maxR(p->next);
// //     }
// //     else
// //         return 0;
// //     return max1;
// // }

// // Sir's Code maxR
// int maxR(struct Node *p)
// {
//     if(p==0)
//     return -32768;
//     int x=maxR(p->next);
//     if(x>p->data)
//     return x;
//     else
//     return p->data;
// }
// int linearsearch(struct Node *p,int key)
// {
//     int a=-1;
//     while(p)
//     {
//         if(p->data==key)
//         {
//           a = p->data;
//         }
//         p=p->next;
//     }
//     if(a==key)
//     return a;
//     else
//     return a;
// }

// struct Node * linearsearchR(struct Node *p,int key)
// {
//     if(p)
//     {
//         if(p->data==key)
//         return p;
//         return linearsearchR(p->next,key);
//     }
// return NULL;
// }

// // Improved Version Of Linear Search 
// // 1:Transposition(Not Applicable to linkedlist and applicable to array)
// // 2:Move To First Method (Applicable to linkedlist and arrays both)

// struct Node * linearsearchimp(struct Node *p,int key)
// {
//     struct Node *q=NULL;
//     while(p)
//     {
//         if(p->data==key && q)
//         {
//             q->next=p->next;
//             p->next=first;
//             first=p;
//             return p;
//         }
//         q=p;
//         p=p->next;
//     }
//     return NULL;
// }
// void insert_node(struct Node *p, int pos, int dat)
// {
//     struct Node * t,*q=NULL;
//     t= (struct Node *)malloc(sizeof(struct Node));
//     t->next=NULL;
//     t->data=dat;
//     if(pos<0 || pos>count3(p))
//     return;
//     if(pos==0)
//     {
//         t->next=p;
//         first=t;
//     }    
//     else
//     {
//         for(int i=0 ;(i<pos)&&p;i++)
//         {
//             q=p;
//             p=p->next;
//         }
//     t->next=q->next;
//     q->next=t;
//     }
// }

// void insert_nodeLast(struct Node *p,int dat)
// {
//     struct Node *last, *t;
//     t= (struct Node *)malloc(sizeof(struct Node));
//     t->next=NULL;
//     t->data=dat;
//     if(p==NULL)
//     {
//         first=t;
//         last=first;
//     }
//     else
//     {
//         last->next=t;
//         last=t;
//     }   
// }

// void insert_sorted(struct Node *p,int dat)
// {
//     struct Node *t,*q;
//     t= (struct Node *)malloc(sizeof(struct Node));
//     t->next=NULL;
//     t->data=dat;
//     if(p==NULL)
//          first=t;
//     while(p)
//     {
//         q=p;
//         p=p->next;
//         if(dat>=q->data && (p&&(dat<p->data)))
//         {
//             t->next=p;
//             q->next=t;
//             return;
//         }
//         else if(dat<q->data)
//         {
//             t->next=q;
//             first=t;
//             return;
//         }  
//         else if(dat>q->data && q->next==NULL)
//         q->next=t;
//     }
// }

// void insert_sorted_again(struct Node *p,int dat)
// {
//     struct Node *t,*q=NULL;
//     t= (struct Node *)malloc(sizeof(struct Node));
//     t->next=NULL;
//     t->data=dat;
//     if(p==NULL)
//     {
//         first=t;
//     }
//     else
//     {
//         while(p&&(p->data<dat))
//         {
//             q=p;
//             p=p->next;
//         }
//         if(p==first)
//         {
//             t->next=p;
//             first=t;
//         }
//         else
//         {
//             t->next=p;
//             q->next=t;
//         }
//     }
// }

// int delete_node(struct Node *p,int pos)
// {
//     int x=-1;
//     struct Node * q=NULL;
//      if(pos<1 || pos>count3(first))
//      {
//          return -1;
//      }
//      else if (pos==1)
//      {
//         first=p->next;
//         x=p->data;
//         p->next==NULL;
//         free(p);
//      }
//      else
//      {
//          for(int i=1;i<pos;i++)
//          {
//              q=p;
//              p=p->next;
//          }
//          q->next=p->next;
//          x=p->data;
//          p->next=NULL;
//          free(p);
//      }
//      return x;
// }

// int LL_sorted(struct Node * p)
// {
//     struct Node * q=NULL;
//     int cou,flag=20;
//     cou=count3(first);
//     if(p==NULL || p->next==NULL)
//         flag=20;
//     else
//     for(int i=1;i<cou;i++)
//     {
//         q=p;
//         p=p->next;
//         if(p->data<q->data)
//         {
//             flag=-1;
//             break;
//         }
//     }
//     return flag;
// }

// int LL_sortedeff(struct Node *p)
// {
//      int x=-65226;
//      while(p)
//      {
//         if(p->data>x)
//             x=p->data;
//         else
//             return -1;
//         p=p->next; 
//      }
//     return 1;
// }

// void remove_duplicates(struct Node *p)
// {
//    struct Node *q=NULL;
//    while(p)
//    {
//        q=p;
//        p=p->next;
//        if(p!=NULL)
//        {
//             if(q->data==p->data)
//             {
//                 q->next=p->next;
//                 p->next=NULL;
//                 free(p);
//                 p=q->next;
//             }
//        }
//    }
// }

// void reverseLL1(struct Node * p, int A[])
// {
//      int i=count3(p);
//      while(p)
//      {
//          p->data=A[i-1];
//          p=p->next;
//          i--;
//      }
// }

// void reverseLL2(struct Node *p )
// {
//     struct Node *r=NULL,*q=NULL;
//     while(p)
//     {
//         r=q;
//         q=p;
//         p=p->next;
//         q->next=r;
//     }
//     first=q;
// }

// void reverseLL3(struct Node *q , struct Node *p)
// {
//     if(p)
//     {
//         reverseLL3(p,p->next);   
//         p->next=q; 
//     }
//     else
//     {
//         first=q;
//     }   
// }

// void concat(struct Node *p,struct Node *q)
// {
//     struct Node *r=NULL;
//     third=p;
//     while(p)
//     {
//         r=p;
//         p=p->next;
//     }
//     r->next=q;
// }

// void mergingLL(struct Node *p,struct Node *q)
// {
//    struct Node *last;
//    if(p->data<q->data)
//    {
//        third=p;
//        last=p;
//        p=p->next;
//        last->next=NULL;
//    }
//    else
//    {
//        third=q;
//        last=q;
//        q=q->next;
//        last->next=NULL;
//    }  
//    while(p!=NULL && q!=NULL)
//    {
//         if(p->data<q->data)
//         {
//             last->next=p;
//             last=last->next;
//             p=p->next;
//             last->next=NULL;
//         }
//         else
//         {
//             last->next=q;
//             last=last->next;
//             q=q->next;
//             last->next=NULL;
//         }
//    }
//   if(p==NULL)
//   last->next=q;
//   else
//   last->next=p; 
// }

// int isLoop(struct Node *p)
// {
//     struct Node *s,*r;
//     s=p;
//     // r=s->next->next;
//     r=s;
//     // while(s!=r)
//     // {
//     //     if(r==NULL)
//     //     {
//     //         flag=0;
//     //         break;
//     //     }
//     //     s=s->next;
//     //     r=r->next;
//     //     r=r?r->next:r;
//     // }
//     // Improvised
//     if(p==NULL)
//     {
//         printf("Empty LL\n"); 
//         return 0;
//     }
//     do
//     {
//         s=s->next;
//         r=r->next;
//         r=r?r->next:r;
//     } while (r && s && r!=s);
//    return r==s && s!=NULL?1:0;
// }


// int main()
// {
//     int A[]={1};
//     // int B[]={5,155,355,455,555};
//     int count,n,b,pos,dat;
//     struct Node *c,*d,*t,*r,*q;
    // create1(A,1);
    // t=first->next->next;
    // r=t;
    // while(r)
    // {
    //     q=r;
    //     r=r->next;
    // }
    // q->next=t;
    // create2(B,5);
    // display(first);
    // Rdisplay(first);
    // count=count3(first);
    // printf("%d",count);
    // printf("%d",countR(first));
    // printf("%d",sum(first));
    // printf("%d",sumR(first));
    // printf("%d",max(first));
    // printf("%d",maxR(first));
    // printf("Enter the key to search for :\n");
    // scanf("%d",&n);
    // b=linearsearch(first,n);
    // c=linearsearchR(first,n);
    // d=linearsearchimp(first,n);
    // display(first);
    // if(b==-1)
    //     printf("Key is not present in the list\n");
    // else
    //     printf("Key %d is present in the list\n",b);
    // if(d==NULL)
    //     printf("Key is not present in the list\n");
    // else
        // printf("Key %d is present in the list\n",d->data);
    // printf("Enter the position to insert a node\n");
    // scanf("%d",&pos);
    // printf("Enter the data of the node\n");
    // scanf("%d",&dat);
    // insert_node(first,0,10);
    // insert_node(first,1,20);
    // insert_node(first,0,15);
    // insert_node(first,2,13);
    // insert_node(first,2,5);
    // display(first);
    // insert_sorted(first,dat);
    // insert_sorted_again(first,dat);
    // printf("Enter the position of the node to be deleted: \n");
    // scanf("%d",&pos);
    // display(first);
    // if(delete_node(first,pos)==-1)
    //     printf("Node not found");
    // else
    // printf("The node at pos %d and data %d are deleted: \n",pos,delete_node(first,pos));
    // if(LL_sorted(first)==-1)
    //     printf("The LL is not sorted \n");
    // else
    //     printf("The LL is sorted\n");
    // if(LL_sortedeff(first)==-1)
    //     printf("The LL is not sorted \n");
    // else
    //     printf("The LL is sorted\n");
    // display(first);
    // remove_duplicates(first);
    // display(first);
    // reverseLL1(first,A);
    // display(first);
    // reverseLL2(first);
    // display(first);
    // reverseLL3(NULL,first);
    // concat(second,first);
    // display(third);
    // mergingLL(first,second);
    // display(third);
    // if(isLoop(first))
    //     printf("Loop Exists");
    // else
    //     printf("Loop Not Exists Linear LL");
    // return 0;
// }

// Circular Linked List

// struct Node
// {
//     int data;
//     struct Node *next;
// }*head=NULL;

// // Create Function

// void createcl(int A[],int n)
// {
//     struct Node *t=NULL,*q ;
//     head = (struct Node *)malloc(sizeof(struct Node *));
//     head->data=A[0];
//     q=head;
//     for(int i=1;i<n;i++)
//     {
//          t= (struct Node *)malloc(sizeof(struct Node *));
//          t->next=NULL;
//          t->data=A[i];
//          q->next=t;
//          q=t;
//     }
//     q->next=head;
// }

// // Length Function

// int lengthcl(struct Node * p)
// {
//     int count=0;
//     if(p==NULL)count=0;
//     else
//     do
//     { 
//         count++;
//         p=p->next;
//     } while (p!=head);
//     return count;
// }

// // Display Function

// void displaycl(struct Node * p)
// {
//     if(head==NULL)printf("Empty Circular Linked List\n");
//     else
//     do
//     {
//       printf("%d ",p->data);
//       p=p->next;
//     } while (p!=head);  
//     printf("\n");
// } 

// // Recursive Display Function

// void displayclr(struct Node * p)
// {
//     static int flag=0;
//     if(p!=head || flag==0)
//     {
//         flag=1;
//         printf("%d ",p->data);
//         displayclr(p->next);
//     }
//     flag=0;
// }

// // Insert Function

// void insertcl(struct Node * p, int dat, int pos)
// {
//    struct Node * t, *q;
  
//    if(pos<0 || pos>lengthcl(p))
//    {
//        printf("Enter valid position : \n");
//        return;
//    }
//    else if(pos==0)
//    {
//         t= (struct Node *)malloc(sizeof(struct Node *));
//         t->data=dat;
//        if(p==NULL)
//        {
//            head=t;
//            t->next=head;
//        }
//        else
//        {
//             do
//             {
//                 p=p->next;
//             }while (p->next!=head);
//         t->next=head;
//         head=t;
//         p->next=t;
//        }
//    }
//    else
//    {
//         t= (struct Node *)malloc(sizeof(struct Node *));
//         t->data=dat;
//         for(int i=0 ; i<pos-1 ; i++)
//         {
//             p=p->next;
//         }
//     t->next=p->next;
//     p->next=t;
//    }
// }

// // Delete Function

// int deletecl(struct Node *p, int pos)
// {
//     struct Node *q=NULL;
//     int x;
//     if(pos<0 || pos>lengthcl(head))return -1;
//     if(pos==1)
//     {
//         if(p==head)
//         {
//             x=p->data;
//             free(head);
//             head=NULL;
//         }
//         else
//         {
//             do
//             {
//                 p=p->next;
//             } while (p->next!=head);
//             p->next=head->next;   
//             x=head->data;
//             head->next=NULL;
//             free(head);
//             head=p->next;
//         }
//     }
//     else
//     {
//         for(int i=0; i<pos-1; i++)
//         {
//             q=p;
//             p=p->next;
//         }
//         q->next=p->next;
//         p->next=NULL;
//         free(p);
//     }
//     return x;
// }
// node 1 node 2 node 3 node 4
// int main()
// {
//     int dat,pos;
    // int A[] = {1,2,3,4};
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
//     return 0;
// }

// Circular Linked List
// #include <iostream>
// using namespace std;
// class Node
// {
//     public :
//     int data;
//     Node *next;
    
// }*head=NULL;

// class CirLinkedlist
// {
//     // private:
//     // Node *head;
//     public:
//     // Constructor
//     CirLinkedlist(){head=NULL;}
//     CirLinkedlist(int A[],int n);
//     // Destructor Remaining

//     // Function Declaration
//     int lengthcl();
//     void displaycl();
//     void displayclr(Node * p); //Doubt Recursive Function
//     void insertcl(int dat, int pos);
//     int deletecl(int pos);
// };
// // Create Function

// // Scope Resolution

// CirLinkedlist:: CirLinkedlist(int A[],int n)
// {
//     Node *t=NULL,*q;
//     head = new Node;
//     head->data=A[0];
//     q=head;
//     for(int i=1;i<n;i++)
//     {
//          t= new Node;
//          t->next=NULL;
//          t->data=A[i];
//          q->next=t;
//          q=t;
//     }
//     q->next=head;
// }

// // Length Function

// int CirLinkedlist:: lengthcl()
// {
//     Node *p=head;
//     int count=0;
//     if(p==NULL)count=0;
//     else
//     do
//     { 
//         count++;
//         p=p->next;
//     } while(p!=head);
//     return count;
// }

// // Display Function

// void CirLinkedlist:: displaycl()
// {
//     Node *p=head;
//     if(head==NULL)cout<<"Empty Circular Linked List"<<endl;
//     else
//     do
//     {
//       cout<<p->data<<" ";
//       p=p->next;
//     } while (p!=head);  
//     cout<<endl;
// } 

// // Recursive Display Function

// void CirLinkedlist:: displayclr(Node * p)
// {
//     // Node *p=head;
//     static int flag=0;
//     if(p!=head || flag==0)
//     {
//         flag=1;
//         cout<<p->data<<" ";
//         displayclr(p->next);
//     }
//     flag=0;
// }

// // Insert Function

// void CirLinkedlist:: insertcl(int dat, int pos)
// {
//    Node * t, *q, *p=head;
//    if(pos<0 || pos>lengthcl())
//    {
//        cout<<"Enter valid position : "<<endl;
//        return;
//    }
//    else if(pos==0)
//    {
//         t= new Node;
//         t->data=dat;
//         if(p==NULL)
//         {
//             head=t;
//             t->next=head;
//         }
//         else
//         {
//             do
//             {
//                 p=p->next;
//             }
//             while (p->next!=head);
//             t->next=head;
//             head=t;
//             p->next=t;
//         }
//    }
//    else
//    {
//         t= new Node;
//         t->data=dat;
//         for(int i=0 ; i<pos-1 ; i++)
//         {
//             p=p->next;
//         }
//         t->next=p->next;
//         p->next=t;
//    }
// }

// // Delete Function

// int CirLinkedlist:: deletecl(int pos)
// {
//     Node *q=NULL,*p=head;
//     int x;
//     if(pos<0 || pos>lengthcl())return -1;
//     if(pos==1)
//     {
//         if(p->next==head)
//         {
//             x=p->data;
//                p->next=NULL;
//             delete(head);
//             head=NULL;
//         }
//         else
//         {
//             do
//             {
//                 p=p->next;
//             } while (p->next!=head);
//             p->next=head->next;   
//             x=head->data;
//             head->next=NULL;
//             delete(head);
//             head=p->next;
//         }
//     }
//     else
//     {
//         for(int i=0; i<pos-1; i++)
//         {
//             q=p;
//             p=p->next;
//         }
//         q->next=p->next;
//         p->next=NULL;
//         delete(p);
//     }
//     return x;
// }
// // node 1 node 2 node 3 node 4
// int main()
// {
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
//     int dat,pos;
//     int A[] = {1,2,3,4};
//     CirLinkedlist l(A,4);
//     // l.displaycl();
//     // cout<<l.lengthcl()<<endl;
//     // l.insertcl(4,0);
//     // l.displaycl();
//     l.deletecl(2);
//     l.displaycl();
//     // l.displayclr(head);
//     return 0;
// }

// DoublyLL cpp

// # include <iostream>
// # include <bits/stdc++.h>

// using namespace std;

// class Node
// {
//    public:
//    Node * prev;
//    int data;
//    Node * next;
// }*first=NULL;

// class DoublyLL
// {
//    public:
//    DoublyLL(int A[] , int n);
//    ~DoublyLL();
//    void DisplaydLL(Node * p);
//    int LengthdLL(Node * p);
//    void Insertdll(Node * p , int pos , int dat);
//    int DeletedLL(Node * p , int pos );
//    void ReversedLL(Node * p);
// };

// // DoublyLL:: ~DoublyLL()
// // {
// //     Node *p=first;
// //     Node *q;
// //     while(p)
// //     {
// //         q=p;
// //         first=q->next;
// //         if(q->next)q->next->prev=NULL;
// //         q->next=NULL;
// //         delete(q);
// //         p=first;
// //     }
// //     delete(p);
// // }

// // Efficient One Delete All Destructor

// DoublyLL:: ~DoublyLL()
// {
//     Node *p=first;
//     while(first)
//     {
//         first=first->next;
//         if(p->next)p->next->prev=NULL;
//         p->next=NULL;
//         delete(p);
//         p=p->next;
//     }
// }

// DoublyLL:: DoublyLL(int A[] , int n)
// {
//     Node *t=NULL,*q=NULL;
//     first=new Node;
//     first->next=NULL;
//     first->data=A[0];
//     first->prev=NULL;
//     q=first;
//     for(int i=1 ; i<n ; i++)
//     {
//         t=new Node;
//         q->next=t;
//         t->prev=q;
//         t->data=A[i];
//         t->next=NULL;
//         q=t;
//     }
// }

// int DoublyLL :: LengthdLL(Node * p)
// {
//     int len=0;
//     while(p)
//     {
//         p=p->next;
//         len++;
//     }
//     return len;
// }

// void DoublyLL :: DisplaydLL(Node * p)
// {
//      while(p)
//      {
//         cout<<p->data<<" ";
//         p=p->next;
//      }
//      cout<<endl;
// }

// void DoublyLL :: Insertdll(Node * p , int pos , int dat)
// {
//     Node *t=NULL;
//     if(pos<0 || pos>LengthdLL(first))return;
//     if(pos==0)
//     {
//         t=new Node;
//         t->data=dat;
//         t->next=first;
//         t->prev=NULL;
//         if(first->next)
//         first->next->prev=t;
//         first=t;
//     }
//     else
//     {
//         for(int i=0; i<pos-1; i++)
//         {
//              p=p->next;
//         }
//         t=new Node; 
//         t->data=dat;
//         t->next=p->next;
//         t->prev=p;
//         if(p->next)
//         p->next->prev=t;
//         p->next=t;
//     }
// }

// int DoublyLL:: DeletedLL(Node * p , int pos )
// {
//      int x=-1;
//      if(pos<0 || pos>LengthdLL(first))return x;
//      if(pos==1)
//      {
//          first=first->next;
//          if(p->next)p->next->prev=NULL;
//          p->next=NULL;
//          x=p->data;
//          delete(p);
//      }
//      else
//      {
//          for(int i=0 ; i<pos-1 ; i++)
//          p=p->next;
//          p->prev->next=p->next; 
//          if(p->next)p->next->prev=p->prev;  
//          x=p->data;
//          p->next=NULL;
//          delete(p);
//      }
//      return x;
// }

// void DoublyLL:: ReversedLL(Node * p)
// {
//     Node *temp=NULL;
//     while(p)
//     {
//         temp=p->prev;
//         p->prev=p->next;
//         p->next=temp;
//         if(p->prev==NULL)
//         first=p;
//         p=p->prev;
//     }
// }

// int main()
// {
//     int A[]={10,20,30,40,50};
//     DoublyLL d( A , 5 );
//     // cout<<d.LengthdLL(first)<<" ";
//     // d.DisplaydLL(first);
//     // d.Insertdll(first,0,5);
//     // cout<< "The data deleted is :"<<d.DeletedLL(first,0)<<endl;
//     // d.ReversedLL(first);
//     d.DisplaydLL(first);
//     return 0;
// }

// Circular Doubly Linkedlist

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     Node * next;
//     int data;
//     Node * prev;
// }*head=NULL;

// class CirdoublyLL{
//     public:
//     CirdoublyLL(Node *p, int A[], int n);
//     ~CirdoublyLL();
//     void cirdbLLinsert(Node *p, int pos, int dat);
//     int cirdbLLdelete(Node *p, int pos);
//     void cirdbLLdisplay(Node *p);
//     int cirdbLLlength(Node *p);
// };
// // Node 1 Node 2 Node 3 Node 4 Node 5
// void CirdoublyLL:: ~CirdoublyLL()
// {
//     Node *p=head,*q;
//     q=p;
//     if(p!=NULL)
//     {
//     while (head->next!=head)
//     {  
//         head=head->next;
//         p->next->prev=p->prev;
//         p->prev->next=p->next;
//         p->next=NULL;
//         p->prev=NULL;
//         delete(p);
//         p=head;
//     }
//     delete(p);
//     head=NULL;
//     }
// }

// CirdoublyLL :: CirdoublyLL(Node *p, int A[], int n)
// {
//      Node *t;
//      head=new Node;
//      head->data=A[0];
//      p=head;
//      for(int i=1; i<n ; i++)
//      {
//          t=new Node;
//          t->data=A[i];  
//          p->next=t;
//          t->prev=p;
//          p=p->next;
//      }
//      p->next=head;
//      head->prev=p;
// }


// void CirdoublyLL :: cirdbLLdisplay(Node *p)
// {
//     if(p!=NULL){
//         do
//         {
//             cout<<p->data<<" ";
//             p=p->next;
//         }while(p!=head);
//     }
//      cout<<"\n";
// }

// int CirdoublyLL :: cirdbLLlength(Node *p)
// {
//    int len=0;
//    if(p!=NULL)
//    {
//         do
//         {
//             p=p->next;
//             len++;
//         } while (p!=head);
//    } 
//    return len;
// }

// void CirdoublyLL :: cirdbLLinsert(Node *p, int pos , int dat)
// {
//      Node *t=NULL;
//      if(pos<0 || pos>cirdbLLlength(head))return;
//      if(pos==0)
//      {
//          t=new Node;
//          t->next=p;
//          t->data=dat;
//          p=p->prev;  
//          t->prev=p;
//          p->next=t;
//          head->next->prev=t;
//          head=t;
//      }
//      else
//      {
//          for(int i=0; i<pos-1; i++)
//          {
//             p=p->next;
//          }
//          t=new Node;
//          t->data=dat;
//          t->next=p->next;
//          t->prev=p;
//          if(p->next)p->next->prev=t;
//          p->next=t;
//      }  
// }

// int CirdoublyLL :: cirdbLLdelete(Node *p,int pos)
// {
//      int x=-1;
//      Node * q;
//      if(pos<1 || pos>cirdbLLlength(head))return x;
//      if(pos==1)
//      {
//          if(p!=NULL)
//          {
//             q=p;
//             p=p->prev; 
//             x=q->data;
//             if(p->next!=head)
//             {
//                 p->next=q->next;
//                 if(q->next)q->next->prev=p;
//                 head=head->next;
//                 q->next=NULL;
//                 q->prev=NULL;
//                 delete(q);
//             }
//             else
//             {
//                 p->next=NULL;
//                 p->prev=NULL;
//                 head=NULL;
//                 delete(p);
//             }   
//          }  
//      }
//      else
//      {
//          for(int i=0; i<pos-1 ; i++)
//          {
//              q=p;
//              p=p->next;
//          }
//          x=p->data;
//          q->next=p->next;
//          if(p->next)p->next->prev=q;
//          p->next=NULL;
//          p->prev=NULL;
//          delete(p);
//      }
//      return x;
// }

// // Node 1 Node 2 Node 3 Node 4 Node 5
// int main()
// {
//     int A[]={10,20,30,40,50};
//     CirdoublyLL c(head, A , 5);
//     c.CirdoublyLL1();
//     // c.cirdbLLdisplay(head);
//     cout<<c.cirdbLLlength(head)<<endl;
//     // c.cirdbLLinsert(head,0,3);
//     // c.cirdbLLdisplay(head);
//     // cout<<c.cirdbLLdelete(head,1)<<endl;
//     // c.cirdbLLdisplay(head);
//     return 0;
// }

