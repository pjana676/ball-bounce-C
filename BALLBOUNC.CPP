/* A simle pin ball programe that i impliment for the education perpus
  that is a ball bouncing programe ,but i exactly want create this programe
  but that not use in graphics.....................................
  my self ...............PRITAM JANA...................................
  student of MMITC&BM in MMU Mullana,Ambala,hariyana on MCA.........................*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int k=35,l=24,h=0,i=40,j=12,s=k,flag=0,count=100,b1=10,b2=6,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0,flag9=0,flag10=0;
void main()
  {
   clrscr();
   int n;
   void ball(int);
   void bar(int);
   void brk(int);
   printf("   IF YOU WANT TO PLAY PRESS ENTER   THEN TURN LEFT PRESS 4 & RIGHT PRESS 6 \n\n   AND QUIT GAME PRESS ESC");
   n=getch();
   while((n!=27)||(n==13))
   {
    if(n==13)
     {
      ball(n);
      clrscr();
      count=100-count;
      gotoxy(25,12);
      printf("SORRY SIR YOU ARE FALOURE  ! YOUR'S SCORE IS ...%d\n\n\n\n\n\n\n\t\t\t\t\tIF YOU AGAIN PLAY SO PRESS.....ENTER\n\t\t\t\t\t\t     OR QUIT PRESS.....ESC",count);
     }
    n=getch();
    if(n==13)
     h=0,k=35,l=24,i=40,j=12,s=k,flag=0,count=100,b1=10,b2=6,flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,flag6=0,flag7=0,flag8=0,flag9=0,flag10=0;
   }
  }
void bar(int n)
  {
   if((n==52)&&(2<k))
      {
       k=k-3;

      }
   else if((n==54)&&(k<69))
      {
       k=k+3;

      }

  }
void brk(int)
 {
   if((i==b1)&&(j==b2))
    {
     if(flag1!=1)
      {
       h=1;
       count=count-3;
      }
     flag1=1;
     flag=1;

    }
   if(flag1==0)
   {
   gotoxy(b1,b2);
   printf("P");
   }
   b1=b1+5;
   if((i==b1)&&(j==b2))
    {
     if(flag2!=1)
      {
       h=1;
       count=count-3;
      }
     flag2=1;
     flag=1;

    }
   if(flag2==0)
   {
   gotoxy(b1,b2);
   printf("R");
   }
   b1=b1+5;
   if((i==b1)&&(j==b2))
    {
     if(flag3!=1)
      {
       h=1;
       count=count-3;
      }
     flag3=1;
     flag=1;

    }
   if(flag3==0)
   {
   gotoxy(b1,b2);
   printf("I");
   }
   b1=b1+5;
   if((i==b1)&&(j==b2))
    {
     if(flag4!=1)
      {
       h=1;
       count=count-3;
      }
     flag4=1;
     flag=1;

    }
   if(flag4==0)
   {
   gotoxy(b1,b2);
   printf("T");
   }
   b1=b1+5;
   if((i==b1)&&(j==b2))
    {
     if(flag5!=1)
      {
       h=1;
       count=count-3;
      }
     flag5=1;
     flag=1;

    }
   if(flag5==0)
   {
   gotoxy(b1,b2);
   printf("A");
   }
   b1=b1+5;
   if((i==b1)&&(j==b2))
    {
     if(flag6!=1)
      {
       h=1;
       count=count-3;
      }
     flag6=1;
     flag=1;

    }
   if(flag6==0)
   {
   gotoxy(b1,b2);
   printf("M");
   }

   b1=b1+15;
   if((i==b1)&&(j==b2))
    {
     if(flag7!=1)
      {
       h=1;
       count=count-3;
      }
     flag7=1;
     flag=2;

    }
   if(flag7==0)
   {
   gotoxy(b1,b2);
   printf("J");
   }
   b1=b1+5;
   if((i==b1)&&(j==b2))
    {
     if(flag8!=1)
      {
       h=1;
       count=count-3;
      }
     flag8=1;
     flag=2;

    }
   if(flag8==0)
   {
   gotoxy(b1,b2);
   printf("A");
   }
   b1=b1+5;
   if((i==b1)&&(j==b2))
    {
     if(flag9!=1)
      {
       h=1;
       count=count-3;
      }
     flag9=1;
     flag=2;

    }
   if(flag9==0)
   {
   gotoxy(b1,b2);
   printf("N");
   }
   b1=b1+5;
   if((i==b1)&&(j==b2))
    {
     if(flag10!=1)
      {
       h=1;
       count=count-3;
      }
     flag10=1;
     flag=2;

    }
   if(flag10==0)
   {
   gotoxy(b1,b2);
   printf("A");
   }


   b1=10,b2=6;
 }
void ball(int n)
  {
  int m,t=0;

  while((j<24)&&(n!=27)&&(count>1))
   {

     clrscr();
     brk(n);
     gotoxy(k,l);

     printf("!_________!");

     gotoxy(i,j);
     printf("*");
     delay(count);
     if(j==1)
      h=1;
     if(h==1)
      j++;
      else
      j--;
     if(kbhit())
      {
       n=getch();
       bar(n);
      }

     if((j==23)&&((i==k+1)||(i==k+2)||(i==k+3)||(i==k+4)||(i==k)))
       {
	flag=1;

	count=count-1;
       }
     else if((j==23)&&((i==k+9)||(i==k+6)||(i==k+7)||(i==k+8)))
       {
	flag=2;
	count=count-1;
       }
     else if((j==23)&&(i==k+5))
       {
	flag=0;
	count=count-1;
       }


     if(flag==1)
      {

       if(0==t)
	i--;
       else if(t==1)
	i++;
       if(j==1)
	h=1;
       else if(j==23)
	h=0;
      }
     else if(flag==2)
      {
       if(0==t)
	i--;
       else if(t==1)
	i++;
       if(j==1)
	h=1;
       else if(j==23)
	h=0;
      }
     else if(flag==0)
      {
       if(j==1)
	h=1;
       else if(j==23)
	h=0;
      }
     if(j==23)
      {
       if((i!=k+1)&&(i!=k+2)&&(i!=k+3)&&(i!=k+4)&&(i!=k)&&(i!=k+5)&&(i!=k+6)&&(i!=k+7)&&(i!=k+8)&&(i!=k+9)&&(i!=k+10))
	break;
      }

     if(i==1)
      t=1;
     else if(i==80)
      t=0;


   }
  }


