#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Element
{
    public: 
    int i;
    int j;
    int x;
};

class Sparse
{
    private:
    int m;
    int n;
    int num;
    Element * ele;
    public:

    Sparse(int m, int n, int num)
    {
      this->m=m;
      this->n=n;
      this->num=num;
      ele=new Element[this->num];
    }

    ~Sparse()
    {
        delete [] ele;
    }
    
    Sparse  operator + (Sparse &s)
    {
       Sparse *sum;
       int i,j,k;
       i=j=k=0;
       if(n<s.n || m<s.m)
          return Sparse(0,0,0);
       sum=new Sparse(n,m,num);
       while(i<num && j<s.num)
       {
         if(ele[i].i<s.ele[j].i)
         sum->ele[k++]=ele[i++];
         else if(ele[i].i>s.ele[j].i)
         sum->ele[k++]=s.ele[j++];
         else
         {
           if(ele[i].j<s.ele[j].j)
           sum->ele[k++]=ele[i++];
           else if(ele[i].j>s.ele[j].j)
           sum->ele[k++]=s.ele[j++];
           else{
           sum->ele[k]=ele[i];
           sum->ele[k++].x = ele[i++].x + s.ele[j++].x;}
         }
       }
       for(;i<n;i++)
       sum->ele[k++]=ele[i++];
       for(;j<n;j++)
       sum->ele[k++]=s.ele[j++];
       sum->n=n;
       sum->m=m;
       sum->num=k;
       return *sum;
    }

    friend istream & operator >> ( istream & is , Sparse &s);
    friend ostream & operator << ( ostream & out , Sparse &s);
};

istream & operator >> ( istream & is , Sparse &s)
{
        int row,column,value;
        cout<<"Enter the row column value of non zero elements"<<endl;
        for(int i=0; i<s.num; i++)
        is>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
        return is;
}

ostream & operator << ( ostream & out , Sparse &s)
{
    int k=0;
    for(int i=0; i<s.m; i++)
    {
        for(int j=0; j<s.n; j++)
        {
            if(i==s.ele[k].i && j==s.ele[k].j)
            out<<s.ele[k++].x<<" ";
            else
            out<<"0 ";
        }
        out<<endl;
    }
    return out;
}

int main()
{
    Sparse s1(5,5,5);
    cin>>s1;
    cout<<"First Matrix :"<<endl;
    cout<<s1;
    Sparse s2(5,5,5);
    cin>>s2;
    cout<<"Second Matrix :"<<endl;
    cout<<s2;
    Sparse s3=s1+s2;
    cout<<"Addition Of two matrix :"<<endl;
    cout<<s3;
    return 0;
}