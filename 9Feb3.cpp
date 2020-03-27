#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

main()
{
    /*
    int a,sum=0,n;
    // Armstrong number between 0 to 1000
    cout<<"Armstrong number between 0 to 1000:\n";
    for(int i=1;i<1000;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            a=n%10;
            sum+=a*a*a;
            n=n/10;
        }
        if(sum==i)
            cout<<i<<" ";
    }
    cout<<endl;
    //Perfect number between 1 to 100
    cout<<"Perfect number between 1 to 10000\n";
    for(int i=1;i<10000;i++)
    {
        n=i;
        sum=0;
        for(int j=1;j<n;j++)
        {
            if(n%j==0)
                sum+=j;
        }
        if(sum==i)
            cout<<i<<" " ;
    }
    cout<<endl;
    //prime number between 1 to 100
    cout<<"Prime number between 1 to 100\n";
    int c=0;
    for(int i=1;i<=100;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
            else
                c=0;
        }
        if(c==0)
            cout<<i<<" ";
        c=0;
    }*/
    /*
    int n;
    cout<<"Enter the Number for Fibonacci series :";
    cin>>n;
    int b=1;
    int a=0,sum;
    for(int i=0;i<n;i++)
    {
        if(i==0)
            cout<<a<<" ";
        else if(i==1)
            cout<<b<<" ";
        else{
            sum=a+b;
            cout<<sum<<" ";
            a=b;
            b=sum;
        }
    }*/

    //palindrome number

    /*int n,sum=0,a;
    for(int i=0;i<1000;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            a=n%10;
            sum=sum*10+a;
            n=n/10;
        }
        if(sum==i)
            cout<<i<<" ";
    }*/
    //strong numbers
    /*int n,sum,a;
    for(int i=0;i<1000;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            a=n%10;
            sum+=fact(a);
            n/=10;
        }
        if(sum==i)
        cout<<i<<" ";
    }*/
    int a[2][2];
    int b[2][2];
    cout<<"Enter the matrix ::"<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cin>>a[i][j];
    }
    cout<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            b[i][j]=a[j][i];
    }
    cout<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cout<<a[i][j]<<" " ;
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cout<<b[i][j]<<" " ;
        cout<<endl;
    }
    return 0;
}
