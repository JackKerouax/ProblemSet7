In problem7.1, I used popen() funtion to open up gnuplot in write mode
I used fprintf() funtion to trigger to popen() function and print out the sine data plot with only the first 100 points of data
I used fflush() funtion to clear (or flush) the output buffer and move the buffered data to console

And then I created a exit function, when type 0 or any integer smaller than 1 it will exit the gnuplot
