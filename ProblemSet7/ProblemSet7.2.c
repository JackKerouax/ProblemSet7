#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <sndfile.h>
/*
## Problem 7.2 - Audio File I/O
- gcc ProblemSet7.2.c -o ProblemSet7.2 -l sndfile && ./ProblemSet7.2
*/

// #define kSampleRate 44100
// #define kSec 1
// #define kNumFrames (kSampleRate * kSec)
// #define kNumChannels 1 
// #define kFormat (SF_FORMAT_WAV | SF_FORMAT_PCM_24)
// #define kFileName "raw_sine.wav"

#define BufferSize 4096
#define nLoops 5

int main() {

  SF_INFO in, out;  
  SNDFILE *audio = NULL, *output = NULL;

  float *databuffer;
  static float buffer[BufferSize]; 
  //Static variables have a property of preserving their value even after they are out of their scope

  //The sf_open() function opens the sound file at the specified path.
  audio = sf_open("raw_sine.wav", SFM_READ, &in); 
  //read only mode
  databuffer = (float*) malloc(in.frames * 5 * sizeof(float)); 
  //The malloc() function reserves a block of memory of the specified number of bytes. And, it returns a pointer of void which can be casted into pointers of any form.
  //create 5 channels worth buffer for holding audio data

  int i = 0;

  while(i < nLoops){
    sf_read_float(audio, databuffer + (i * in.frames), in.frames);
    //The file read functions fill the array pointed to by ptr with the requested number of items or frames.
    sf_seek(audio, 0, SEEK_SET);
    /*The file seek functions work much like lseek in unistd.h with the exception that 
    the non-audio data is ignored and the seek only moves within the audio data section of the file. 
    In addition, seeks are defined in number of (multichannel) frames. 
    Therefore, a seek in a stereo file from the current position forward 
    with an offset of 1 would skip forward by one sample of both channels.
    */
   
    i++;
  }


  sf_close(audio);

  out = in; 
  


  output = sf_open("sine10.wav", SFM_WRITE, &out); 
  
  if(output == NULL){	//Check if the file was opened correctly
    printf ("Error");
    puts (sf_strerror(NULL));
    return 1;
  }

  sf_write_float(output, databuffer, in.frames * 5); 

  sf_close(output);

  return 0;
}