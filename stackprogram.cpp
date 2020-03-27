#include<cstdlib>
#include<iostream>
using namespace std;
int top=-1;
#define size 5
int s[size];
void push(int n)
{
    if(top==size-1)
        cout<<"Overflow";
    else
        s[++top]=n;
}
int pop()
{
    if(top==-1)
        cout<<"Underflow";
    else
        return s[top--];
    return 0;
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<s[i]<<endl;
    }
}
main()
{
    while(1)
    {
    cout<<"\n1.Push\n2.POP\n3.Display\n4.ExitEnter the choice";
    int c,n;
    cin>>c;
    switch(c)
    {
    case 1: cout<<"Enter the number:";
            cin>>n;
            push(n);
            break;
    case 2: c=pop();
            if(c!=0)
                cout<<c;
            break;
    case 3: display();
            break;
    case 4: exit(0);
            break;
    }
    }
    return 0;
}
