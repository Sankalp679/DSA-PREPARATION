#include<stdio.h>
#include<stdlib.h>

struct Node 
{
   int row;
   int column;
   int value;
   struct Node * next;
};

void create(struct Node ** p, int val , int row_no , int col_no)
{
    struct Node * temp=NULL,*r=NULL;
    temp=*p;
    if(temp==NULL)
    {
         temp=(struct Node *)malloc(sizeof(struct Node *));
         temp->row=row_no;
         temp->column=col_no;
         temp->value=val;
         temp->next=NULL;
         *p=temp;
    }
    else
    {
        r=(struct Node *)malloc(sizeof(struct Node *));
        while (temp->next)
            temp=temp->next;
        r->next=temp;
        r->row=row_no;
        r->column=col_no;
        r->value=val;
        temp->next=r;
        r->next=NULL;
    }
}

void display(struct Node * p)
{
    struct Node * r,*c,*v;
    r=c=v=p;
    printf("The row values are : \n");
    while(r)
    {
        printf("%d ",r->row);
        r=r->next;
    }
    printf("\n");
    printf("The col values are : \n");
    while(c)
    {
        printf("%d ",c->column);
        c=c->next;
    }
    printf("\n");
    printf("The values are : \n");
    while(v)
    {
        printf("%d ",v->value);
        v=v->next;
    }
    printf("\n");
}

struct Node * add(struct Node * p,struct Node * q)
{
    struct Node *third=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->row==q->row)
        {
            if(p->column>q->column)
            {
                create(&third, q->value, q->row, q->column);
                q=q->next;
            }
            else if(p->column<q->column)
            { 
                create(&third, p->value, p->row, p->column);
                p=p->next;
            }
            else
            {
                create(&third, p->value+q->value, p->row, p->column);
                p=p->next;
                q=q->next;
            }
        }
        else
        {
            if(p->row<q->row)
            {
                create(&third, p->value, p->row, p->column);
                p=p->next;
            }
            else
            {
                create(&third, q->value, p->row, p->column);
                q=q->next;
            }
        }
    }
    while(p)
    {
           create(&third, p->value, p->row, p->column);
           p=p->next;
    }
    while(q)
    {
           create(&third, q->value, p->row, p->column);
           q=q->next;
    }
    return third;
}

int main()
{   
    struct Node * first = NULL;
    struct Node * second = NULL;
    int i,j,k,l;
    int sparsematrix1[4][5]={
        {1,0,1,1,2},
        {0,0,2,3,4},
        {0,0,7,6,9},
        {7,2,7,0,8}
    };
    for(i=0 ; i<4 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(sparsematrix1[i][j]!=0)
                create(&first,sparsematrix1[i][j],i,j);
        }
    }
    display(first);
      int sparsematrix2[4][5]={
        {0,0,1,1,2},
        {0,0,2,3,4},
        {0,0,7,6,9},
        {7,2,7,0,0}
    };
    for(k=0 ; k<4 ; k++)
    {
        for(l=0 ; l<5 ; l++)
        {
            if(sparsematrix2[k][l]!=0)
                create(&second,sparsematrix2[k][l],k,l);
        }
    }
    display(second);
    display(add(first,second));
}
