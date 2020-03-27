#include <stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		int m,n,j,k,l=0;
        char a[12];

        scanf("%d %d",&n,&m);

        scanf("%s",a);

        int pos_x,pos_y,count=0;

        for(j=0;j<m;j++)
        {
            for(k=0;k<n;k++)
            {
                pos_x=j;
                pos_y=k;

                l=0;

                while((a[l]!='\0') && !((pos_x<0)||(pos_x>=m)||(pos_y<0)||(pos_y>=n)) )
                {
                    if(a[l]=='L')
                    {
                        pos_x--;
                    }

                    if(a[l]=='R')
                    {
                        pos_x++;
                    }

                    if(a[l]=='U')
                    {
                        pos_y--;
                    }

                    if(a[l]=='D')
                    {
                        pos_y++;
                    }
                    l++;

                }

                if((pos_x<0)||(pos_x>=m)||(pos_y<0)||(pos_y>=n))
                    count=0;
                else
                {
                    count=1;
                    printf("safe\n");
                    break;
                }
            }

            if(count==1)
                break;
        }

        if(count==0)
            printf("unsafe\n");


	}
}
