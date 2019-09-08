#include <stdio.h>
#include "graphics.h"
#include <math.h>

void Yang(int n)
{
 setcolor(4);
 setlinestyle(0,0,3);
 line(200,300-n*20,300,300-n*20);
}

void Ying(int n)
{
 setcolor(2);
 setlinestyle(0,0,3);
 line(200,300-n*20,240,300-n*20);
 line(260,300-n*20,300,300-n*20);
}
static int gua[64][6]={
                       {1,1,1,1,1,1},  /*1 -?*/
                       {0,0,0,0,0,0},  /*2 -?*/
                       {1,0,0,0,1,0},  /*3 -?*/
                       {0,1,0,0,0,1},  /*4 -?*/
                       {1,1,1,0,1,0},  /*5 -*/
                       {0,1,0,1,1,1},  /*6 -*/
                       {0,1,0,0,0,0},  /*7 -*/
                       {0,0,0,0,1,0},  /*8 -*/
                       {1,1,1,0,1,1},  /*9 -*/
                       {1,1,0,1,1,1},  /*10-*/
                       {1,1,1,0,0,0},  /*11-*/
                       {0,0,0,1,1,1},  /*12-*/
                       {1,0,1,1,1,1},  /*13-*/
                       {1,1,1,1,0,1},  /*14-*/
                       {0,0,1,0,0,0},  /*15-*/
                       {0,0,0,1,0,0},  /*16-*/
                       {1,0,0,1,1,0},  /*17-*/
                       {0,1,1,0,0,1},  /*18-*/
                       {1,1,0,0,0,0},  /*19-*/
                       {0,0,0,0,1,1},  /*20-*/
                       {1,0,0,1,0,1},  /*21-*/
                       {1,0,1,0,0,1},  /*22-*/
                       {0,0,0,0,0,1},  /*23-*/
                       {1,0,0,0,0,0},  /*24-*/
                       {1,0,0,1,1,1},  /*25-*/
                       {1,1,1,0,0,1},  /*26-*/
                       {1,0,0,0,0,1},  /*27-*/
                       {0,1,1,1,1,0},  /*28-*/
                       {0,1,0,0,1,0},  /*29-*/
                       {1,0,1,1,0,1},  /*30-*/
                       {0,0,1,1,1,0},  /*31-*/
                       {0,1,1,1,0,0},  /*32-*/
                       {0,0,1,1,1,1},  /*33-*/
                       {1,1,1,1,0,0},  /*34-*/
                       {0,0,0,1,0,1},  /*35-*/
                       {1,0,1,0,0,0},  /*36-*/
                       {1,0,1,0,1,1},  /*37-*/
                       {1,1,0,1,0,1},  /*38-*/
                       {0,0,1,0,1,0},  /*39-*/
                       {0,1,0,1,0,0},  /*40-*/
                       {1,1,0,0,0,1},  /*41-*/
                       {1,0,0,0,1,1},  /*42-*/
                       {1,1,1,1,1,0},  /*43-*/
                       {0,1,1,1,1,1},  /*44-*/
                       {0,0,0,1,1,0},  /*45-*/
                       {0,1,1,0,0,0},  /*46-*/
                       {0,1,0,1,1,0},  /*47-*/
                       {0,1,1,0,1,0},  /*48-*/
                       {1,0,1,1,1,0},  /*49-*/
                       {0,1,1,1,0,1},  /*50-*/
                       {1,0,0,1,0,0},  /*51-*/
                       {0,0,1,0,0,1},  /*52-*/
                       {0,0,1,0,1,1},  /*53-*/
                       {1,1,0,1,0,0},  /*54-*/
                       {1,0,1,1,0,0},  /*55-*/
                       {0,0,1,1,0,1},  /*56-*/
                       {0,1,1,0,1,1},  /*57-*/
                       {1,1,0,1,1,0},  /*58-*/
                       {0,1,0,0,1,1},  /*59-*/
                       {1,1,0,0,1,0},  /*60-*/
                       {1,1,0,0,1,1},  /*61-*/
                       {0,0,1,1,0,0},  /*62-*/
                       {1,0,1,0,1,0},  /*63-*/
                       {0,1,0,1,0,1},  /*64-*/
                      };
void main()
{
 void Yang(int);
 void Ying(int);
 int gdriver=9,gmode=2;
 int m;
 int num=100;
/* detectgraph(&gdriver,&gmode);  */     /*??????*/
/* registerbgidriver(EGAVGA_DRIVER); */   /*??????????*/
 initgraph(&gdriver,&gmode,"e:\\turboc2");  /*?????*/
/* bar3d(100,100,300,250,50,1);  */         /*??????*/
 /*setbkcolor(1);*/                         /*?????*/
                               /*????,???*/
/* circle(320,240,100);*/                   /* ????color(int x,int y,int radius)*/
/* cleatdevice();   */                         /*??????*/

/* printf("the graphics driver is %d,the mode id %d\n",gdriver,gmode); */
while(num!=0)
{
printf("input the number which is in [1,64] and 0 to exit:");
scanf("%d",&num);
for(m=0;m<=5;m++)
{
 if(gua[num-1][m]==0)
   Ying(m);
 else
  if(gua[num-1][m]==1)
    Yang(m);
  else
   printf("something is wrong here!\n");
}
/* Ying(6);
 Yang(5);
 Ying(4);
 Yang(3);
 Ying(2);
 Yang(1);  */
 setcolor(1);
 circle(250,250,(int)sqrt(50*50+60*60));
 getch();
 clrscr();
 cleardevice();


}
/* closegraph();  */
 return 0;
}


