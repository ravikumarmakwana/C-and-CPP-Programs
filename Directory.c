#include<stdio.h>
#include<conio.h>
#include<dirent.h>
#include<dir.h>
void main()
{
    DIR *d;
    struct dirent *dir;
    d=opendir("rsvi");
    if(d)
    {
        while((dir==readdir(d))!=NULL)
        {
            printf("%s\n",dir->d_name);
        }
    }
    getch();
}
