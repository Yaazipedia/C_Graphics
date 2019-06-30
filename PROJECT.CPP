#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

void main()
{
  int maths[10],english[10],hindi[10], roll, term=1, ans;
  char name[20];
  long double contact;

  int gd=DETECT, gm, mx, my, a, b, i, x[10], y[10];
  initgraph(&gd, &gm, "C:\\TurboC++\\Disk\\TurboC3\\BGI");

  mx=getmaxx();
  my=getmaxy();
  a=mx/10;
  b=my/11;
  gotoxy(10,3);
  printf("PRESS ENTER AFTER EVERY DETAIL");
  gotoxy(10,5);
  printf("Enter Roll:");
  gotoxy(10,7);
  printf("Enter Name:");
  gotoxy(10,9);
  printf("Enter Contact:");
  gotoxy(10,11);
  printf("Enter Term:");
  gotoxy(10,13);
  printf("Marks in Maths:");
  gotoxy(10,15);
  printf("Marks in English:");
  gotoxy(10,17);
  printf("Marks in Hindi:");
  gotoxy(10,19);
  printf("SUBMIT?");

  gotoxy(30,5);
  scanf("%d", &roll);
  gotoxy(30,7);
  scanf("%s", &name);
  gotoxy(30,9);
  scanf("%ld", &contact);

  for(i=0; i<3; i++)
  {
	gotoxy(30+i*5,11);
	printf("%d", term+i);
	gotoxy(30+i*5,13);
	scanf("%d", &maths[i]);
	gotoxy(30+i*5,15);
	scanf("%d", &english[i]);
	gotoxy(30+i*5,17);
	scanf("%d", &hindi[i]);
  }
  gotoxy(30,19);
  printf("press 0 to exit or 1 to submit");
  gotoxy(30,21);
  scanf("%d", &ans);

  if(ans==1)
  {
	 cleardevice();
	 setlinestyle(0,1,6);
      rectangle(0,2,mx,my-2);
	for(i=1; i<=8; i++)
		x[i]=i*a;
	for(i=1; i<=11; i++)
		y[i]=i*b;
      line(x[1]-400,y[1],x[1]-400,y[11]);
      line(x[1]-400,y[11],x[8],y[11]);

		outtextxy(x[1]-430,y[1],"100");
		outtextxy(x[1]-430,y[2],"90");
		outtextxy(x[1]-430,y[3],"80");
		outtextxy(x[1]-430,y[4],"70");
		outtextxy(x[1]-430,y[5],"60");
		outtextxy(x[1]-430,y[6],"50");
		outtextxy(x[1]-430,y[7],"40");
		outtextxy(x[1]-430,y[8],"30");
		outtextxy(x[1]-430,y[9],"20");
		outtextxy(x[1]-430,y[10],"10");

		settextstyle(1,1,1);
		outtextxy(x[3],y[5],"TERM 1");
		outtextxy(x[5],y[5],"TERM 2");
		outtextxy(x[7],y[5],"TERM 3");
		outtextxy(x[1]-440,y[6],"Marks Obtained->");

		setfillstyle(1,RED);
		settextstyle(1,0,1);
		bar(x[3],y[3]-120,x[3]+20,y[3]-100);
		outtextxy(x[3]+21,y[3]-110,"MATHS");
		setfillstyle(1,GREEN);
		bar(x[5],y[3]-120,x[5]+20,y[3]-100);
		outtextxy(x[5]+21,y[3]-110,"ENGLISH");
		setfillstyle(1,CYAN);
		bar(x[7],y[3]-120,x[7]+20,y[3]-100);
		outtextxy(x[7]+21,y[3]-110,"HINDI");

      setfillstyle(1,RED);
      bar(x[3],y[11]-maths[0]*4.3,x[4]-50,y[11]);
      setfillstyle(1,GREEN);
      bar(x[4]-50,y[11]-english[0]*4.3,x[4]-37,y[11]);
      setfillstyle(1,CYAN);
      bar(x[4]-37,y[11]-hindi[0]*4.3,x[4]-24,y[11]);

      setfillstyle(1,RED);
      bar(x[5],y[11]-maths[1]*4.3,x[6]-50,y[11]);
      setfillstyle(1,GREEN);
      bar(x[6]-50,y[11]-english[1]*4.3,x[6]-37,y[11]);
      setfillstyle(1,CYAN);
      bar(x[6]-37,y[11]-hindi[1]*4.3,x[6]-24,y[11]);

      setfillstyle(1,RED);
      bar(x[7],y[11]-maths[2]*4.3,x[8]-50,y[11]);
      setfillstyle(1,GREEN);
      bar(x[8]-50,y[11]-english[2]*4.3,x[8]-37,y[11]);
      setfillstyle(1,CYAN);
      bar(x[8]-37,y[11]-hindi[2]*4.3,x[8]-24,y[11]);

  }
  else if(ans==0)
  {
     exit(0);
  }
  getch();
  cleardevice();
}
