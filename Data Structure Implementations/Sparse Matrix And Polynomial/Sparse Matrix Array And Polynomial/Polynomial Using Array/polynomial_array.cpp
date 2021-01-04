#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Terms
{
    public:
    int coeff;
    int power;
};

class Poly
{
    private:
    int n;
    Terms *t;
    public:
    Poly(int n)
    {
        this->n=n;
        this->t=new Terms[this->n];
    }
    ~Poly()
    {
        delete [] t;
    }
    Poly operator + (Poly &d)
    {
        Poly * sum;
        sum=new Poly;
        sum->t=new Terms[n+d.n];
        int i,j,k;
        i=j=k=0;
        while(i<n && j<d.n)
        {
            if(t[i].power<d.t[j].power)
                sum->t[k++]=d.t[j++];
            else if(t[i].power>d.t[j].power)
                sum->t[k++]=t[i++];
            else
            {
                sum->t[k]=t[i];
                sum->t[k++].coeff = t[i++].coeff + t[j++].coeff;  
            }   
        }
        for(; i<n ; i++)
        sum->t[k++]=t[i++];
        for(; j<d.n ; j++)
        sum->t[k++]=d.t[j++];
        sum->n=k;
        return *sum;
    }

    friend istream & operator >> (istream &is,Poly &p);
    friend ostream & operator << (ostream &out, Poly &p);

};

istream & operator >> (istream &is,Poly &p)
{
   cout<<"Enter power and coefficient of terms of polynomial "<<endl;
   for(int i=0; i<p.n; i++)
   {
        cout<<"Enter coefficient and power of "<<i+1<<" term of polynomial :"<<endl;
        is>>p.t[i].coeff>>p.t[i].power;
   } 
   return is;
}

ostream & operator << (ostream &out, Poly &p)
{
   for(int i=0; i<p.n; i++)
   {
        out<<p.t[i].coeff<<"x"<<p.t[i].power<<"+";
   } 
   return out;
}

int main()
{
    int num1, num2;
    cout<<"Enter number of terms :"<<endl;
    cin>>num1;
    Poly p(num1);
    cin>>p;
    cout<<"First Polynomial: "<<endl;
    cout<<p<<endl;
    cout<<"Enter number of terms :"<<endl;
    cin>>num2;
    Poly q(num2);
    cin>>q;
    cout<<"Second Polynomial: \n"<<endl;
    cout<<q;
    Poly r=p+q;
    cout<<"Third Polynomial: \n"<<endl;
    cout<<r;
    return 0;
}