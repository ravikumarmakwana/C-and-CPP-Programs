#include<iostream>
using namespace std;
struct complex
{
    int r,i;
}s1,s2,s3;
main()
{
    cout<<"Enter the real part:";
    cin>>s1.r;
    cout<<"Enter the image part:";
    cin>>s1.i;
    cout<<"Enter the real part:";
    cin>>s2.r;
    cout<<"Enter the image part:";
    cin>>s2.i;
    s3.r=s1.r+s2.r;
    s3.i=s1.i+s2.i;
    cout<<"\nAddition of two complex number:";
    cout<<s3.r<<" + i "<<s3.i<<endl;
    return 0;
}
