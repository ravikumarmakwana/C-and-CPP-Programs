#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>

using namespace std;
int  main()
{
    system("CLS");
	char s[8][5];
	int n;
	int i,j;
	cout<<"Bus Sit Registration:\n";
	int r,c;
	for(i=0;i<8;i++)
    {
        for(j=0;j<5;j++)
        {
            s[i][j]='0';
        }
    }

	s[0][0]=' ';
	s[1][0]='1';
	s[2][0]='2';
	s[3][0]='3';
	s[4][0]='4';
	s[5][0]='5';
	s[6][0]='6';
	s[7][0]='7';
	s[0][1]='A';
	s[0][2]='B';
	s[0][3]='C';
	s[0][4]='D';
	while(1)
	{
        cout<<"\n";
        for(i=0;i<8;i++)
        {
            for(j=0;j<5;j++)
            {
                cout<<s[i][j]<<" ";
            }
		cout<<"\n";
        }
        cout<<"\n";
        cout<<"1.Regerstion\n2.Exit\nEnter the choice :";
        cin>>n;

        switch(n)
        {
            case 1: cout<<"\nEnter the row :";
                    cin>>r;
                    cout<<"\nEnter the column :";
                    cin>>c;
                    if(r<8 &&c<5)
                    {
                        if(s[r][c]=='X')
                        {
                            cout<<"Sorry\nRegistration all ready exits";
                        }
                        else
                        {
                            s[r][c]='X';
                            cout<<"\nRegistration Successful";
                        }
                    }
                    else
                    {
                        cout<<"\nSit not exits";
                    }
                    break;

            case 2: exit(0);
                    break;

            default:cout<<"Invailed choice !!!!!!\nTry Again";
                break;
        }
        getch();
	}
	return 0;
}
