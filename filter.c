/* filter.c
Name:     Daniel Di Cesare
*/
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/*usage, make then ./filter inputPPM kernel outputPPM*/
/*Comments are added to censor any code that can be used for academic dishonesty*/
/* kernel style 
3
1
-1 -1 -1
-1 8 -1
-1 -1 -1
*/

typedef struct {
 /*store rgb values*/
} RGB;

typedef struct {
  /*holds properties of image */
} Image;

int writePPM(char* filename, Image *ppm) {
  FILE* f = fopen(filename, "wb");
/* FILE FORMAT: 
  P3
  WIDTH HEIGHT
  255
/* 
  input image data here
*/
  fclose(f);
  return 0;
}

Image* readPPM(char* filename) {

  FILE* f = fopen(filename, "rb"); 
  /*create an image using struct
  char buf[32];
  /*check and read data*/
  /*assign data*/
  /*LOOP & ASSIGN*/
  fclose(f);
  return ppm;
}

Image* convolution(Image* ppmI, int mDim, float* kernel) {
  /*create an output ppm image to save data into*/
  /*APPLY ALG. FROM https://en.wikipedia.org/wiki/Kernel_(image_processing) */
  return ppmO;
}


int main(int argc, char** argv) {
  /*~~~~~~~~~~~~~~~~~~~~START OF COMMAND ARGS~~~~~~~~~~~~~~~~~~~~~~~~~~*/
  /*check number of command line args*/
  char *kernelName, *outputPPM, *inputPPM;

  /*~~~~~~~~~~~~~~~~~~~~read from kernel file ~~~~~~~~~~~~~~~~~~~~~~~~~*/
  FILE* kernel = fopen(kernelName, "r"); /*change to argv2*/
  /*create array to save kernel into.
  int i = 0;

  /*~~~~this divides the matrix by the specified parameter~~~~~~~~~~~~~*/

  /*~~~~~~~~~~~~~~~~~~~~~~END OF KERNEL READ~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
  Image *ppm;
  ppm = readPPM(inputPPM);

  writePPM(outputPPM, ppm);
  Image *ppmOut;
  ppmOut = convolution(ppm, kParam1, kArray);
  writePPM(outputPPM, ppmOut);
  free(ppm);
  free(ppmOut);

  return 0;
}

