#include<stdio.h>
#include<conio.h>
main()
{
    char s[100],ch;
    printf("Enter the Line of Text :\n");
    ch=getchar();
    int i=0;
    while(ch!='@')
    {
        s[i]=ch;
        i++;
        ch=getchar();
    }
    s[i]='\0';
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>= 'A' && s[i]<='Z')
            printf("%c : Upper Case", s[i] );
        else if(s[i]>='a' && s[i]<='z')
            printf("%c : Lower Case",s[i]);
        else if(s[i]>='0' && s[i]<='9')
            printf("%c : Digits",s[i]);
        else if(s[i]== '+' || s[i]== '-' || s[i]=='*' || s[i]=='/' || s[i]=='%')
            printf("%c : Arithmetic operator",s[i]);
        else
            printf("%c : Others Symbols",s[i]);
        printf("\n");
    }
    getch();
}

