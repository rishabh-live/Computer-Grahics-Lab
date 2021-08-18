
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
    /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   /* initialize graphics and local
   variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\BGI");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();

      exit(1);    /* terminate with an error code */
   }


   setcolor(getmaxcolor());

   //Boundary of the display area
   line(0,2,639,2);
   line(0,0,0,479);
   line(639,0,639,479);
   line(0,477,639,477);


  line(0,0,100,100);
  putpixel(getmaxx()/2,getmaxy()/2,4);
  circle(100,100,50);
   /* clean up */
   getch();
   closegraph();
   return 0;
}
