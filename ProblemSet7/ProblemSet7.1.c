#include <stdio.h>
#include <stdlib.h>

/*
## Problem 7.1 - Plotting
gcc ProblemSet7.1.c -o ProblemSet7.1 && ./ProblemSet7.1
- Use the `popen()` and `fprintf()` function to plot the content of `sine.dat` (included in the problem set folder).
- The program should only plot the first 100 points of the `sine.dat`.
*/
int main(int argc, char *argv[]) {

FILE* plotsin = popen("gnuplot", "w");

if (plotsin) 
    fprintf(plotsin, "plot \"sine.dat\" every ::0::100 with lines\n");
    fflush(plotsin);
// used to clear (or flush) the output buffer and move the buffered data to console


int exit = 1;
    while (exit>=1)
    {
        printf("type 0 to exit");
        scanf("%d", &exit);
    }

pclose(plotsin);

return 0;
}