#include<iostream>
using namespace std;
int counter=0;
void Path(int n, char s[], int no)
{
   if (n==0)
   {
        s[no] = '\0';
        for(int i=0;i<no;i++)
            cout<<" "<<s[i];
        cout<<endl;
        counter++;
   }
   if(n>=1)
   {
        s[no] = '1';
        Path(n-1,s,no+1);
   }
   if(n>=2)
   {
        s[no] = '2';
        Path(n-2,s,no+1);
   }
   if(n>=3)
   {
        s[no] = '3';
        Path(n-3,s,no+1);
   }
}
void print(int n)
{
    char s[n];
    Path(n, s, 0);
    cout<<"\n";
}
main()
{
    int c;
    cout<<"Enter the stare:";
    cin>>c;
    cout<<"\nPossibly ways\n";
    print(c);
    cout<<"\nTotal Steps :: "<<counter<<endl;
    return 0;
}
