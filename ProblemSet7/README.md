# Problem Set 7

Start Date and Time| Due Date and Time | Cut-off Date and Time |
---|---|---|
10:50:00 AM on October 24, 2019 | 11:59:59 PM on November 6, 2019 | 12:00:00 AM on November 14, 2019 |

## Reading
- [Package Manager](https://en.wikipedia.org/wiki/Package_manager)	
- [How to Install and Use Homebrew](https://www.datacamp.com/community/tutorials/homebrew-install-use)
- [Using Sox](http://billposer.org/Linguistics/Computation/SoxTutorial.html)
- [WAVE File Format Specification](http://soundfile.sapp.org/doc/WaveFormat/)
- [libsndfile](http://www.mega-nerd.com/libsndfile/)
- [Signal Generator](https://en.wikipedia.org/wiki/Signal_generator)
- [Sum of Sines](http://sites.music.columbia.edu/cmc/MusicAndComputers/chapter3/03_03.php)

## Problem 7.1 - Plotting
- Create a file named `ProblemSet7.1.c`.
- Use the `popen()` and `fprintf()` function to plot the content of `sine.dat` (included in the problem set folder).
- The program should only plot the first 100 points of the `sine.dat`.

## Problem 7.2 - Audio File I/O
- Create a file named `ProblemSet7.2.c`.
- Write a program that reads `sine.wav` (included in the problem set folder) and extends the duration to 5 second.
- Write out the resulting 5 second sine wave to `sine10.wav` file in the same directory.
- Use `libsndfile` for this problem set.

## Grading Rubric
Description|Grade
---|---:|
All problem sets submitted | 10%
No compilation warning or error| 10%
Clean, understandable, commented, and organized | 10%
Thoroughly documented in README.md | 20%
Correctly implemented | 50%
**Total** | **100%**

## Submission Guideline
- Make sure you have a folder with your name at the root directory of the repository.
- Create a folder name with the right problem set number (i.e. `Problem Set 1`) within the folder that has your name.
- Please follow the example `README.md` file in `Akito van Troyer/Problem Set 1/` for documenting your problem set.
- Commit and push C files and README.md for this problem set into the newly created folder to complete the problem set.

## Submission policy:
- All problem must be submitted to: https://github.com/navreyort/EP-353-FA2019
- Late projects will incur a penalty of 10% for each day it is late.
- Problem sets and projects are due by 11:59:59pm on the date specified
- After 12:00:00am (the next day after the due day), your problem sets/projects is one day late (-10%).
- After the next 12:00:00am cycle (two days after the due day), your problem sets/projects is two days late (-20%).
- Problem sets and projects will not be accepted after 12:00:00am at one week after the deadline

--- 
**Berklee College of Music**  
Electronic Production and Design  
EP-353: Audio Programming in C  
Fall 2019