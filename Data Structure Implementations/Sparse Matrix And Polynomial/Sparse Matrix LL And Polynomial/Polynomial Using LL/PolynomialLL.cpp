// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//     Node * next;
//     int coeff;
//     int power;
// };

// class polynomialLL
// {
//     private:
//     int n;
//     Node *p;
//     public:
//     polynomialLL(int n)
//     {
//          this->n=n;
//          this->p=NULL;
//     }
//     // double eval(Node *p, double x );
//     friend  istream & operator >> ( istream &is , polynomialLL &po);
//     friend  ostream & operator << ( ostream &out , polynomialLL &po);
// };

// istream & operator >> ( istream &is , polynomialLL &po)
// {
//     Node *last=NULL,*t=NULL;
//      for( int i=0; i<po.n; i++)
//     {
//         int pow,coff;
//         cout<<"Enter the power and coefficient of each term :"<<endl;
//         if(po.p==NULL)
//         {
//             po.p=new Node;
//             is>>pow>>coff;
//             po.p->coeff=coff;
//             po.p->power=pow;
//             po.p->next=NULL;
//             last=po.p;
//         }
//         else
//         {
//             t=new Node;
//             is>>pow>>coff;
//             t->coeff=coff;
//             t->power=pow;
//             t->next=NULL;
//             last->next=t;
//             last=t; 
//         }
//     }
//     return is;
// }

// ostream & operator << ( ostream &out , polynomialLL &po)
// {
//      Node *e;
//      e=po.p;
//      while(e)
//     {
//         out<<e->coeff<<'x'<<e->power<<"+";
//         e=e->next;
//     }
//       out<<endl;
//       return out;
// }

// // double polynomialLL :: eval(Node *p, double x )
// // {
// //     double sum=0;
// //     while(p)
// //     {
// //         sum+=(p->coeff)*(pow(x,p->power));
// //         p=p->next;
// //     }
// //     return sum;
// // }

// int main()
// {
//     int num1,num2;
//     cout<<"Enter number of terms in 1st polynomial :"<<endl;
//     cin>>num1;
//     polynomialLL p(num1);
//     cin>>p;
//     cout<<p;
//     cout<<"Enter number of terms in 2nd polynomial :"<<endl;
//     cin>>num2;
//     polynomialLL q(num2);
//     cin>>q;
//     cout<<q;
//     // polynomialLL r=p+q;
//     // cout<<r;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int coeff;
    int power;
    Node * next;
};

void create(Node **temp,int x,int y)
{
     Node *p,*t,*last;
     p=*temp;
     if(p==NULL)
     {
        p=new Node;
        p->coeff=y;
        p->power=x;
        p->next=NULL;
        *temp=p;
        last=p;
     }
     else
     {
         t=new Node;
         t->coeff=y;
         t->power=x;
         last->next=t;
         last=t;
     }
}

void display(Node * temp)
{
     while(temp)
     {
       cout<<temp->coeff<<"x"<<temp->power;
       if(temp->next!=NULL)
       cout<<"+ ";
       temp=temp->next;
     }
     cout<<endl;
}

Node * add(Node *p, Node *q)
{
    Node *third=NULL;
    while(p && q)
    {
        if(p->power<q->power)
        {
          create(&third,q->power,q->coeff);
          q=q->next;
        }
        else if(p->power==q->power)
        {
          create(&third,p->power,p->coeff+q->coeff);
          p=p->next;
          q=q->next;
        }
        else
        {
          create(&third,p->power,p->coeff);
          p=p->next;
        }
    }
    while(p)
    {
       create(&third,p->power,p->coeff);
       p=p->next;
    }
    while(q)
    {
       create(&third,p->power,p->coeff);
       p=p->next;
    }
    return third;
}
int main( )
{
    Node * first=NULL;
    Node * second=NULL;
    Node * result=NULL;
    create(&first,4,5);
    create(&first,3,5);
    create(&first,2,5);
    create(&first,1,5);
    create(&first,0,5);
    create(&second,1,5);
    create(&second,0,5);
    display(first);
    display(second);
    display(add(first,second));
}
