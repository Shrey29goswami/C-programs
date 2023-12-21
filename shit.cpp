#include <graphics.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include <conio.h>
  #include <dos.h>

  int main(void)  {
        /* request auto detection */
        int gdriver = DETECT, gmode, errorcode;
        int i, midx, midy;
        int stangle1 = -45, endangle1 = 0, radius = 100;
        int stangle2 =  135, endangle2 = 180;

        /* initialize graphics and local variables */
        initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");

        /* read result of initialization */
        errorcode = graphresult();
        if (errorcode != grOk) {
                 /* an error occurred */
                printf("Graphics error: %s\n", grapherrormsg(errorcode));
                printf("Press any key to halt:");
                getch();
                exit(1); /* terminate with an error code */
        }

        /* mid position of x in x-axis */
        midx = getmaxx() / 2;
        /* mid position of y in y-axis */
        midy = getmaxy()/ 2;

        for (i = 0; i < 400; i++) {
                /* start and end angle of fan's first wing */
                if (endangle1 == 360) {
                        stangle1 = -45;
                        endangle1 = 0;
                }

                /* start and end angle of fan's second wing */
                if (endangle2 == 360) {
                        stangle2 = -45;
                        endangle2 = 0;
                }

                /* clears graphic device */
                cleardevice();
                stangle1 = stangle1 + 45;
                stangle2 = stangle2 + 45;
                endangle1 = endangle1 + 45;
                endangle2 = endangle2 + 45;

                /* fan stand */
                rectangle(midx - 5, midy - 5, midx + 5, midy + 150);

                /* draws first wing of fan */
                setfillstyle(SLASH_FILL, i % 15);
                pieslice(midx, midy, stangle1, endangle1, radius);

                /* draws second wing of fan */
                setfillstyle(BKSLASH_FILL, i % 15);
                pieslice(midx, midy, stangle2, endangle2, radius);
                /* sleep for 40 millisecond */
                delay(75);
        }

        /* clean up */
        getch();

        /* deallocate memory allocated for graphic screen */
        closegraph();

        return 0;
  }
