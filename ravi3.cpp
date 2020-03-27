#include<iostream>
using namespace std;
main()
{
    int no,l=0;
    cout<<"Enter the number:";
    cin>>no;
    for(int i=1;i<no;i++)
    {
        if(no%i==0)
        {
            l=l+i;
        }
    }
    if(no==l)
        cout<<"The given Number is perfect Number\n";
    else
        cout<<"The given Number is not perfect Number \n";
    return 0;
}
