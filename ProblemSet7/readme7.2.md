In problem7.2, I used libsndfile library to read and write the sampled sound file raw_sine.wav
I first defined the in and out sample sound using SF_INFO with null audio input and null output

Then I defined a static buffer size with #define value of 4096
then I created 5 channels worth buffer in order to hold the extended audio data

In the while loop, I filled up the array 5 tmes with the orginal samples with each sample 1 second long.
