#include<conio.h>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
main()
{
    int T,A,B,N,Q,P,x=0,l;
    cin>>T;
    while(T>0)
    {
        x++;
        l=0;
        cout<<"Case :"<<x<<endl;
        cin>>A>>B;
        cin>>N;
        srand(time(0));
        H:P=rand()%1000000000;
        if(P>A && P<=B)
            cout<<"";
        else
            goto H;
        for(int i=0;i<N;i++)
        {
            cin>>Q;
            if(Q<P)
                cout<<"Too_Low";
            else if(Q>P)
                cout<<"Too_Big";
            else if(P==Q)
            {
                cout<<"CORRECT";
                l=1;
                break;
            }
            cout<<endl;
        }
        if(l==0)
            cout<<"Wrong_Answer";
        T--;
        getch();
        system("CLS");
    }
    return 0;
}
