#include<iostream>
using namespace std;
class radio
{
public:
    void connect_radio()
    {
        cout<<"\nSelect stations:98.4,102.4,87.0\n";
        float c;
        cin>>c;
        cout<<"\nThe Radio station "<<c<<" Connected";
    }
};
class phone
{
public:
    void connect_phone()
    {
        cout<<"\nThe Phone is connected";
    }
};
class video_call : public phone,public radio
{
public:
    void video_call_connect()
    {
        cout<<"\nThe video-call is connected";
    }
};
main()
{
    video_call v;
    int c;
    cout<<"1.phone\n2.Radio\n3.video_call\nEnter the your choice:";
    cin>>c;
    switch(c)
    {
        case 1: v.connect_phone();
                break;

        case 2: v.connect_radio();
                break;

        case 3: v.video_call_connect();
                break;

        default:cout<<"Invailed choice !!!";
                break;
    }
    return 0;
}
