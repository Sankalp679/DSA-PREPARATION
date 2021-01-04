// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// class Stack
// {
//    public:
//    int size;
//    int top;
//    int *s;
// };

// void create(Stack &sta)
// {
//     cout<<"Enter the size of stack"<<endl;
//     cin>>sta.size;
//     sta.s=new int [size];
//     sta.top=-1;
// }

// void push(Stack &sta,int x)
// {
//    if(sta.top=size-1)
//    cout<<"Stack overflow"<<endl;
//    else
//    {
//       sta.top++;
//       sta.s[sta.top]=x;
//    }
// }

// int pop(Stack &sta)
// {
//    int x=-1;
//    if(sta.top==-1)
//       cout<<"Stack underflow"<<endl;
//    else
//       x=sta.s[s.top--];
//    return x;
// }

// int isempty(Stack &sta)
// {
//     if(sta.top==-1)
//       return 0;
//     else
//       return 1;
// }

// int isfull(Stack &sta)
// {
//    if(sta.top==size-1)
//       return 1;
//    else
//       return 0;
// }

// int peek(Stack &sta,int pos)
// {
//    int x=-1;
//    if(sta.top-pos+1<0)
//    cout<<"Invalid Index"<<endl;
//    else
//    x=sta.s[sta.top-pos+1]; 
//    return x;
// }                              

// int stacktop(Stack &sta)
// {
//    int x=-1;
//    if(isempty(Stack &sta)==1)
//       x=sta.s[sta.top];
//    return x;
// }

// void display(Stack &sta)
// {
//    int i;
//    for(i=sta.top; i>=0; i--)
//       cout<<sta.s[i];
//    cout<<endl;
// }

// int main()
// {
//    Stack b;
//    create(&b);
//    push(b,x);
//    pop(&b);
//    display(&b);
//    return 0;
// }

