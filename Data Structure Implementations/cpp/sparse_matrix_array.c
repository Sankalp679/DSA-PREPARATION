#include<stdio.h>
#include<stdlib.h>

struct Element
{
   int x;
   int i;
   int j;
};

struct Sparse
{
     int m;
     int n;
     int num;
     struct Element *ele;
};

void create(struct Sparse *s)
{   
    printf("Enter the dimensions of matrix m rows n columns : \n");
    scanf("%d %d",&s->m,&s->n);
    printf("Enter the number of non-zero elements in the matrix: \n");
    scanf("%d",&s->num);
    s->ele=(struct Element *)malloc((s->num)*sizeof(struct Element));
    printf("Enter the row column and values of elements: \n");
    for(int i=0;i<s->num;i++)
        scanf("%d %d %d",&s->ele[i].i,&s->ele[i].j,&s->ele[i].x);
}

void display(struct Sparse s)
{
    for(int i=0; i<s.m; i++)
    {
        for(int j=0; j<s.n; j++)
        {
            if(s.ele[i].i==i && s.ele[i].j==j)
                printf("%d ",s.ele[i].x);
            else
                printf("0 "); 
        }
        printf("\n");
    }
} 

struct Sparse * add(struct Sparse * s1 , struct Sparse *s2)
{
    int i,j,k;
    i=j=k=0;
    struct Sparse *sum;
    if(s1->m!=s2->m || s1->n!=s2->n)
    return 0;
    sum=(struct Sparse *)malloc(sizeof(struct Sparse));
    sum->ele=(struct Element *)malloc((s1->num+s2->num)*sizeof(struct Element));
    while(i<s1->num && j<s2->num)
    {
       
        if(s1->ele[i].i>s2->ele[j].i)
            sum->ele[k++]=s2->ele[j++];
        else if(s1->ele[i].i<s2->ele[j].i)
            sum->ele[k++]=s1->ele[i++];
        else
        {
            if(s1->ele[i].j>s2->ele[j].j)
            sum->ele[k++]=s2->ele[j++];
            else if(s1->ele[i].j<s2->ele[j].j)
            sum->ele[k++]=s1->ele[i++];
            else
         sum->ele[k]=s1->ele[i];
 sum->ele[k++].x=s1->ele[i++].x+s2->ele[j++].x;
        }
    }  
    for( ; i<s1->num ; i++ )
    sum->ele[k++]=s1->ele[i];
    for( ; j<s2->num ; j++ )
    sum->ele[k++]=s2->ele[j];
    sum->num=k;
    sum->n=s1->n;
    sum->m=s1->m;
    return sum;
}

int main()
{
    struct Sparse s1,s2,*s3;
    create(&s1);
    create(&s2);
    s3=add(&s1,&s2);
    printf("First Matrix : \n");
    display(s1);
    printf("Second Matrix : \n");
    display(s2);
    printf("Third Matrix : \n");
    display(*s3);
    return 0;
}

// 0 0 1
// 1 1 1
// 2 2 1
// 3 3 1
// 4 4 1

// 0 0 1
// 1 0 1
// 2 0 1
// 3 0 1
// 4 0 1

// sparse_matrix_array in cpp

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Element
// {
//     public: 
//     int i;
//     int j;
//     int x;
// };

// class Sparse
// {
//     private:
//     int m;
//     int n;
//     int num;
//     Element * ele;
//     public:

//     Sparse(int m, int n, int num)
//     {
//       this->m=m;
//       this->n=n;
//       this->num=num;
//       ele=new Element[this->num];
//     }

//     ~Sparse()
//     {
//         delete [] ele;
//     }
    
//     Sparse  operator + (Sparse &s)
//     {
//        Sparse *sum;
//        int i,j,k;
//        i=j=k=0;
//        if(n<s.n || m<s.m)
//           return Sparse(0,0,0);
//        sum=new Sparse(n,m,num);
//        while(i<num && j<s.num)
//        {
//          if(ele[i].i<s.ele[j].i)
//          sum->ele[k++]=ele[i++];
//          else if(ele[i].i>s.ele[j].i)
//          sum->ele[k++]=s.ele[j++];
//          else
//          {
//            if(ele[i].j<s.ele[j].j)
//            sum->ele[k++]=ele[i++];
//            else if(ele[i].j>s.ele[j].j)
//            sum->ele[k++]=s.ele[j++];
//            else{
//            sum->ele[k]=ele[i];
//            sum->ele[k++].x = ele[i++].x + s.ele[j++].x;}
//          }
//        }
//        for(;i<n;i++)
//        sum->ele[k++]=ele[i++];
//        for(;j<n;j++)
//        sum->ele[k++]=s.ele[j++];
//        sum->n=n;
//        sum->m=m;
//        sum->num=k;
//        return *sum;
//     }

//     friend istream & operator >> ( istream & is , Sparse &s);
//     friend ostream & operator << ( ostream & out , Sparse &s);
// };

// istream & operator >> ( istream & is , Sparse &s)
// {
//         int row,column,value;
//         cout<<"Enter the row column value of non zero elements"<<endl;
//         for(int i=0; i<s.num; i++)
//         is>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
//         return is;
// }

// ostream & operator << ( ostream & out , Sparse &s)
// {
//     int k=0;
//     for(int i=0; i<s.m; i++)
//     {
//         for(int j=0; j<s.n; j++)
//         {
//             if(i==s.ele[k].i && j==s.ele[k].j)
//             out<<s.ele[k++].x<<" ";
//             else
//             out<<"0 ";
//         }
//         out<<endl;
//     }
//     return out;
// }

// int main()
// {
//     Sparse s1(5,5,5);
//     cin>>s1;
//     cout<<"First Matrix :"<<endl;
//     cout<<s1;
//     Sparse s2(5,5,5);
//     cin>>s2;
//     cout<<"Second Matrix :"<<endl;
//     cout<<s2;
//     Sparse s3=s1+s2;
//     cout<<"Addition Of two matrix :"<<endl;
//     cout<<s3;
//     return 0;
// }