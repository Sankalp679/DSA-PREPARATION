// #include<stdio.h>
// #include<stdlib.h>

// struct Node 
// {
//    int row;
//    int column;
//    int value;
//    struct Node * next;
// }*start=NULL;

// void create(struct Node * p, int val , int row_no , int col_no)
// {
//     struct Node * t=NULL;
//     if(p==NULL)
//     {
//          start=(struct Node *)malloc(sizeof(struct Node *));
//          start->row=row_no;
//          start->column=col_no;
//          start->value=val;
//          start->next=NULL;
//          p=start;
//     }
//     else
//     {
//         t=(struct Node *)malloc(sizeof(struct Node *));
//         while (p->next)
//         {
//             p=p->next;
//         }
//         p->next=t;
//         t->row=row_no;
//         t->column=col_no;
//         t->value=val;
//         t->next=NULL;
//     }
// }

// void display(struct Node * p)
// {
//     struct Node * r,*c,*v;
//     r=c=v=p;
//     printf("The row values are : \n");
//     while(r)
//     {
//         printf("%d ",r->row);
//         r=r->next;
//     }
//     printf("\n");
//     printf("The col values are : \n");
//     while(c)
//     {
//         printf("%d ",c->column);
//         c=c->next;
//     }
//     printf("\n");
//     printf("The values are : \n");
//     while(v)
//     {
//         printf("%d ",v->value);
//         v=v->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     int i,j;
//     int sparsematrix[4][5]={
//         {0,0,1,1,2},
//         {0,0,2,3,4},
//         {0,0,7,6,9},
//         {7,2,7,0,0}
//     };
//     for(i=0 ; i<4 ; i++)
//     {
//         for(j=0 ; j<5 ; j++)
//         {
//             if(sparsematrix[i][j]!=0)
//                 create(start,sparsematrix[i][j],i,j);
//         }
//     }
//     display(start);
// }


// Including Addition Of Sparse Matrix

// #include<stdio.h>
// #include<stdlib.h>

// struct Node 
// {
//    int row;
//    int column;
//    int value;
//    struct Node * next;
// };

// void create(struct Node ** p, int val , int row_no , int col_no)
// {
//     struct Node * temp=NULL,*r=NULL;
//     temp=*p;
//     if(temp==NULL)
//     {
//          temp=(struct Node *)malloc(sizeof(struct Node *));
//          temp->row=row_no;
//          temp->column=col_no;
//          temp->value=val;
//          temp->next=NULL;
//          *p=temp;
//     }
//     else
//     {
//         r=(struct Node *)malloc(sizeof(struct Node *));
//         while (temp->next)
//             temp=temp->next;
//         r->next=temp;
//         r->row=row_no;
//         r->column=col_no;
//         r->value=val;
//         temp->next=r;
//         r->next=NULL;
//     }
// }

// void display(struct Node * p)
// {
//     struct Node * r,*c,*v;
//     r=c=v=p;
//     printf("The row values are : \n");
//     while(r)
//     {
//         printf("%d ",r->row);
//         r=r->next;
//     }
//     printf("\n");
//     printf("The col values are : \n");
//     while(c)
//     {
//         printf("%d ",c->column);
//         c=c->next;
//     }
//     printf("\n");
//     printf("The values are : \n");
//     while(v)
//     {
//         printf("%d ",v->value);
//         v=v->next;
//     }
//     printf("\n");
// }

// struct Node * add(struct Node * p,struct Node * q)
// {
//     struct Node *third=NULL;
//     while(p!=NULL && q!=NULL)
//     {
//         if(p->row==q->row)
//         {
//             if(p->column>q->column)
//             {
//                 create(&third, q->value, q->row, q->column);
//                 q=q->next;
//             }
//             else if(p->column<q->column)
//             { 
//                 create(&third, p->value, p->row, p->column);
//                 p=p->next;
//             }
//             else
//             {
//                 create(&third, p->value+q->value, p->row, p->column);
//                 p=p->next;
//                 q=q->next;
//             }
//         }
//         else
//         {
//             if(p->row<q->row)
//             {
//                 create(&third, p->value, p->row, p->column);
//                 p=p->next;
//             }
//             else
//             {
//                 create(&third, q->value, p->row, p->column);
//                 q=q->next;
//             }
//         }
//     }
//     while(p)
//     {
//            create(&third, p->value, p->row, p->column);
//            p=p->next;
//     }
//     while(q)
//     {
//            create(&third, q->value, p->row, p->column);
//            q=q->next;
//     }
//     return third;
// }

// int main()
// {   
//     struct Node * first = NULL;
//     struct Node * second = NULL;
//     int i,j,k,l;
//     int sparsematrix1[4][5]={
//         {1,0,1,1,2},
//         {0,0,2,3,4},
//         {0,0,7,6,9},
//         {7,2,7,0,8}
//     };
//     for(i=0 ; i<4 ; i++)
//     {
//         for(j=0 ; j<5 ; j++)
//         {
//             if(sparsematrix1[i][j]!=0)
//                 create(&first,sparsematrix1[i][j],i,j);
//         }
//     }
//     display(first);
//       int sparsematrix2[4][5]={
//         {0,0,1,1,2},
//         {0,0,2,3,4},
//         {0,0,7,6,9},
//         {7,2,7,0,0}
//     };
//     for(k=0 ; k<4 ; k++)
//     {
//         for(l=0 ; l<5 ; l++)
//         {
//             if(sparsematrix2[k][l]!=0)
//                 create(&second,sparsematrix2[k][l],k,l);
//         }
//     }
//     display(second);
//     display(add(first,second));
// }




// #include<stdio.h>
// #include<stdlib.h>

// struct Node
// {
//     struct Node* next;;
//     int value;
//     int column;
// }*start=NULL;

// int main()
// {
//     int i=0,j=0,k=0,l=0;
//     struct Node * A[4]={};
    // struct Node *t;
    // struct Node *p=NULL;
    // struct Node *q=NULL;
//     int sparsematrix[4][5]={
//         {1,0,2,2,2},
//         {2,0,0,3,1},
//         {1,5,0,0,0},
//         {8,4,0,3,0}
//     };
    // for( i = 0; i < 4; i++)
    // {
    //     start=NULL;
    //     for ( j = 0; j < 5; j++)
    //     {
    //         if(sparsematrix[i][j]!=0)
    //         {
    //             if(start==NULL)
    //             {
    //                 start=(struct Node *)malloc(sizeof(struct Node *));
    //                 start->column=j;
    //                 start->value=sparsematrix[i][j];
    //                 start->next=NULL;
    //                 A[k]=start;
    //                 l=k;
    //                 k++;
    //                 p=start;
    //             }
    //             else
    //             {
    //                 if(l==i)
    //                 {
    //                     while(p->next)
    //                     {
    //                         p=p->next;
    //                     }
    //                     t=(struct Node *)malloc(sizeof(struct Node *));
    //                     p->next=t;
    //                     t->column=j;
    //                     t->value=sparsematrix[i][j];
    //                     t->next=NULL;
    //                     p=t;
    //                 }
    //                 else
    //                 start=NULL;
    //             }
    //         }
    //     }
    // }
    
//     for(int i=0;i<4;i++)
//     {
//         q=A[i];
//         for (int j = 0; j < 5; j++)
//         {
//             if(q && (q->column==j))
//             printf("%d ",q->value);
//             else
//             printf("0 ");
//             if(q->next && q->column==j);
//             q=q->next;
//         }    
//         printf("\n");
//     }
//     return 0;
// }
    
// For the best performance both lists should be stored in order of ascending keys.

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//     int value;
//     int column;
//     Node * next;
// }*start=NULL;

// Node * A[5]={};
// Node * B[5]={};
// Node * C[5]={};

// class sparse
// {
//     public:
//     void create(int first[4][5],Node * C[]);
//     void display(Node* D[]);
//     void add(Node * C[],Node * D[]);
// };

// void sparse :: create(int first[4][5],Node *C[])
// {
//     Node *t;
//     Node *p = NULL;
//     int i=0,j=0,k=0,l=0;
//     for( i = 0; i < 4; i++)
//     {
//         start=NULL;
//         for ( j = 0; j < 5; j++)
//         {
//             if(first[i][j]!=0)
//             {
//                 if(start==NULL)
//                 {
//                     start=new Node;
//                     start->column=j;
//                     start->value=first[i][j];
//                     start->next=NULL;
//                     C[k]=start;
//                     l=k;
//                     k++;
//                     p=start;
//                 }
//                 else
//                 {
//                     if(l==i)
//                     {
//                         while(p->next)
//                         {
//                             p=p->next;
//                         }
//                         t=new Node;
//                         p->next=t;
//                         t->column=j;
//                         t->value=first[i][j];
//                         t->next=NULL;
//                         p=t;
//                     }
//                     else
//                     start=NULL;
//                 }
//             }
//         }
//     }
// }

// void sparse :: display(Node* D[])
// {
//     Node *q=NULL;
//     for(int i=0;i<4;i++)
//     {
//         q=D[i];
//         for (int j = 0; j < 5; j++)
//         {
//             if(q && (q->column==j))
//             cout<<q->value<<" ";
//             else
//             cout<<0<<" ";
//             if(q->next && q->column==j)
//             q=q->next;
//         }    
//         cout<<endl;
//     }
// }

// void sparse :: add(Node * C[],Node * D[])
// {
//     int adding[4][5]={};
//     Node *q=NULL;
//     Node *p=NULL;
//     for(int i=0;i<4;i++)
//     {
//         q=C[i];
//         p=D[i];
//         for (int j = 0; j < 5; j++)
//         {
//             if(p->column==j && q->column==j)
//             adding[i][j]=q->value+p->value;
//             else if(p->column==j)
//             adding[i][j]=p->value;
//             else if(q->column==j)
//             adding[i][j]=q->value;
//             else
//             adding[i][j]=0;
//             if(q->next && q->column==j)
//             q=q->next;
//             if(p->next && p->column==j)
//             p=p->next;
//         }    
        
//     }
//     cout<<"row "<<"column "<<"value "<<endl;
//     for(int i=0;i<4;i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if(adding[i][j]!=0)
//             {
//                 cout<<i<<" "<<j<<" "<<adding[i][j]<<endl;
//             }
//         }  
//     }
// }
   

 

// int main()
// {
//     sparse s;
//     int sparsematrix1[4][5]=
//     {
//         {1,0,0,2,2},
//         {2,0,0,0,1},
//         {1,5,0,0,0},
//         {8,4,0,3,0}
//     };
//     int sparsematrix2[4][5]=
//     {
//         {1,1,5,1,2},
//         {2,3,0,4,1},
//         {1,5,15,0,2},
//         {8,4,0,30,0}
//     };
//     s.create(sparsematrix1,A);
//     s.create(sparsematrix2,B);
//     // s.display(A);
//     // s.display(B);
//     s.add(A,B);
// }


// Using Map:  This method saves space but sequential access of items is costly.
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     map<pair<int,int>,int>m;
//     int sparsematrix[4][5]=
//     {
//         {1,0,0,2,2},
//         {2,0,0,0,1},
//         {1,5,0,0,0},
//         {8,4,0,3,0}
//     };
//     for(int i=0; i<4; i++)
//     {
//         for(int j=0; j<5; j++)
//         {
//             if(sparsematrix[i][j]!=0)
//                 m[make_pair(i+1,j+1)]=sparsematrix[i][j];
//         }
//     }
    
//     int c=0;
//     for(auto i=m.begin(); i!=m.end(); i++)
//     {
//         if(c!=i->first.first)
//         {
//             cout<<"row = "<<i->first.first<<endl;
//             c=i->first.first;
//         }
//         cout<<"column = "<<i->first.second<<endl;
//         cout<<"value = "<<i->second<<endl;
//     }
// }


