#include<iostream>
using namespace std;
class calendar
{
    int day,month,year;
public:
    calender()
    {
        day=1;
        month=1;
        year=1990;
    }
    calendar(int x,int y,int z)
    {
            day=x;
            month=y;
            year=z;
    }
    void putdata()
    {
        if(month==1)
            cout<<"jun,";
        else if(month==2)
            cout<<"feb,";
        else if(month==3)
            cout<<"may,";
        else if(month==4)
            cout<<"apr,";
        else if(month==5)
            cout<<"may,";
        else if(month==6)
            cout<<"jun,";
        else if(month==7)
            cout<<"jul,";
        else if(month==8)
            cout<<"aug,";
        else if(month==9)
            cout<<"sept";
        else if(month==10)
            cout<<"oct";
        else if(month==11)
            cout<<"nev";
        else
            cout<<"dec";
        cout<<day<<" "<<year;
    }
    operator ++()
    {
        day+=1;
        if(day>30 && month%2!=0)
        {
            day=day%30;
            month+=1;
        }
        if(month>12)
        {
            month%=12;
            year+=1;
        }
    }
    operator --()
    {
        day-=1;
        if(day<1 && month%2!=0)
        {
            day=day%30;
            month-=1;
        }
        if(month<1)
        {
            month%=12;
            year-=1;
        }
    }
};
main()
{
    int x,y,z;
    cin>>x>>y>>z;
    calendar s(x,y,z);
    ++s;
    s.putdata();
    cout<<"\n";
    calendar s2(x,y,z);
    --s2;
    s2.putdata();
    return 0;
}
