#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#define Z 5
#define SQR(x) (x)*(x)
#define APLUSB(x,y) (x)+(y)
#define INCFIVE(x)   (x)*5
#define ABSR(y,z) (((y)-(z))>0)?((y)-(z)):(((y)-(z))*-1)
#define MAX(y,z) ((y)>(z))?(y):(z)
#define PRINTI(w) puts("control output"); \
 printf(#w"=%d\n",w)
#define PRINTR(w) puts ("rezult :"); \
 printf (#w"=%f\n",(float)w)

void main()
{
    puts("Lab 13.2. Using macros and preprocessing directive");
    int x, y,x_kvadr, maxim, x_plus_y,x_plus_z,res2,res3;
    char ch;
    PRINTI(Z);
    do
    {
#if Z>=1 && Z<10
        puts("define maximum of two numbers");
        puts("Input 2 integer numbers");
        scanf("%d", &x);
        PRINTI(x); 
        scanf("%d", &y);
        PRINTI(y);
        

        x_plus_y = APLUSB(x,y);
       
        PRINTI(x_plus_y);
        x_plus_z = APLUSB(x, Z);
        PRINTI(x_plus_z);
        maxim = MAX(x_plus_y,x_plus_z);
        PRINTR(maxim);
#else 
        {
            puts("define maximum of two numbers");
            puts("Input 2 integer numbers");
            scanf("%d", &x);
            PRINTI(x);
            scanf("%d", &y);
            PRINTI(y);
           
            x_kvadr = SQR(x);
            PRINTI(x_kvadr);
            res2 = ABSR(y, Z);
            PRINTI(res2);
            res3 = INCFIVE(res2);
            PRINTI(res3);
            maxim = MAX(x_kvadr,res3);
            PRINTR(maxim);
        }
#endif 
        puts("Repeat? y /n "); ch = _getch();
    } while (ch == 'y');

}

