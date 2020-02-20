#include <stdio.h>
void main()
{
    int d=0,y=0,m=0,s=0,s1=0,d1=0,m1=0,y1=0,temp=0;
    printf("Enter date\t");
    scanf("%d",&d);
    printf("Enter month\t");
    scanf("%d",&m);
    printf("Enter year\t");
    scanf("%d",&y);
    printf("\n");

    s=s|d;
    s=s<<11;
    temp=temp|m;
    temp=temp<<7;
    s=s|temp;
    y=y-1920;
    temp=temp|y;
    s=temp|s;
    printf("save %d in the database as DOB\n",s);
    printf("\n");
    printf("Enter DOB as in database\t");
    scanf("%d",&s1);

    temp=s1&63488;
    d1=s1>>11;

    temp=s1&1920;
    m1=temp>>7;

    temp=s1&127;
    y1=temp+1920;


   printf("\nDate\t%d\nMonth\t%d\nYear\t%d\n",d1,m1,y1);
}
