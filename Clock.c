#include<stdio.h>
#include<windows.h>
int main()
{
    int s, m, h, d=1000;
    printf("Set time: \n");
    printf("Enter hours: \n");
    scanf("%d",&h);
    printf("Enter Mintues: \n");
    scanf("%d",&m);
    printf("Enter Seconds: \n");
    scanf("%d",&s); 
    int GMT = 0;  
    if(h > 12 || m > 60 || s > 60){
        printf("Error!!");
        exit(0);
    }
    while(1)
    {
        s++;
        if(s>59){
            m++;
            s=0;
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12){
            h=1;
        }
        printf("Clock: \n");
        printf("%02d:%02d:%02d\n",h,m,s);
        Sleep(d);
        system("cls");

    }
    return 0;
}
