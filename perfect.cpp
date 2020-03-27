#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the no:";
    int no;
    cin>>no;
    int b=no;
    int sum=0;
    int i=1;
    while(i<no)
    {
        if(no%i==0)
            {
                sum=sum+i;
            }
        i++;
    }
    cout<<endl;
    if(b==sum)
        cout<<"Perfect";
    else
        cout<<"No";
    return 0;
}
