#include<cstdlib>
#include<iostream>
using namespace std;
int f=-1,r=-1;
int n=5;
int Q[5];
void putData()
{
    if(r==n-1 && f==0)
    {
        cout<<"Overflow";
        return ;
    }
    if(f==-1)
    {
        r=f=0;
    }
    else
    {
        if(r==n-1)
            r=0;
        else
            r++;
    }
    int x;
    cout<<"Enter the Value :";
    cin>>x;
    Q[r]=x;
    cout<<"Value SuccessFully Inserted "<<endl<<endl;
    return ;
}
void getData()
{
    if(f==-1)
    {
        cout<<"Underflow"<<endl;
        return ;
    }
    int y=Q[f];
    cout<<"Deleted Element : "<<y;
    if(f==r)
    {
        f=r=-1;
    }
    else
    {
        if(f==n-1)
            f=0;
        else
            f++;
    }
}
void display()
{
    cout<<endl;
    cout<<"Element of Queue:\n";
    for(int i=f;i<=r;i++)
        cout<<Q[i]<<" " ;
    cout<<endl;
}
main()
{
    int c;
    while(1)
    {
        cout<<"1. Insert data "<<endl;
        cout<<"2. Delete data "<<endl;
        cout<<"3. Display "<<endl;
        cout<<"4. Exit "<<endl;
        cout<<"Enter the choice :"<<endl;
        cin>>c;
        switch(c)
        {
            case 1: putData();
                    break;

            case 2: getData();
                    break;

            case 3: display();
                    break;

            case 4: exit(0);
                    break;

            default: cout<<"Invalid Choice ";
                    break;
        }
    }
}
