#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#define size 100
using namespace std;
int top=-1;
int s[size];
void push(int);
int pop();
void display();
int main()
{
    int c,a,b;
    while(1)
    {
        cout<<"\n1.Push\n2.Pop\n3.Display\n4.Exit";
        cout<<"\nEnter the choice:";
        cin>>c;
        switch(c)
        {
            case 1: cout<<"Enter the number :: ";
                    cin>>a;
                    push(a);
                    break;
            case 2: b=pop();
                    cout<<"Deleted value :: "<<b;
                    break;

            case 3: cout<<"Display\n";
                    display();
                    break;

            case 4: exit(0);
                    break;

        }
        getch();
    }
    return 0;
}
void push(int n)
{
    s[++top]=n;
}
int pop()
{
    return s[top--];
}
void display()
{
    for(int i=top;i>=0;i--)
        cout<<"\n"<<s[i];
}
