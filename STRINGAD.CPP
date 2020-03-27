#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream>
using namespace std;
class string1
{
	char s[100];
	public:
		void getdata()
		{
			cout<<"Enter the string:";
			gets(s);
		}
        string1 & operator +(string1 &p)
        {
           /* string1 temp;
            strcpy(temp.s,s);
            strcat(temp.s,p.s);
            return temp;  */

            strcat (s,p.s);
            return *this;
        }
        operator ==(string1 p)
        {
            int c;
            for(int i=0;s[i]!=NULL;i++)
            {
                if(s[i]==p.s[i])
                    c=0;
                else
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
                return 0;
            else
                return 1;
        }
        void putdata()
        {
            cout<<"Final string ::"<<s;
        }
};

int main()
{
	string1 s1,s2,s3;
	s1.getdata();
	s2.getdata();
	if(s1==s2)
        cout<<"Two strings are Equal";
    else
        cout<<"Two strings are not Equal";
    s3=s1+s2;
    cout<<endl;
    s3.putdata();
	return 0;
}
