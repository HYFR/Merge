/* Japhet M. Perez
21 September 2015
Alex Noguchi
CS 232
merge sort */

#include <stdio.h>
#include "function.h"

#define MAX 25

int main(int argc, char *argv[]) {
  int i;
  int n[argc-2];
  int length = argc - 2;
  int beginning = 0;
  char word[MAX];

  
  for(i = 0; i < argc; i++) {
    printf("%s ", argv[i]);
  }

  printf("\n");

  for(i = 0; i < length; i++) {
    sscanf(argv[i+2], "%d", &n[i]);
  }

  // this if statement checks to see what function I am calling in the second element of user input on the command line. 
  if(argv[1][0] == 'm') {
    merge(n, beginning, length - 1);
  }
  else {
      printf("The only acceptable word is merge. Type merge in.\n");
    return;
  }

  
  printf("Sorted list in ascending order:\n");
  for(i = 0; i < length; i++) {
    printf("%d ", n[i]);
  }

  printf("\n");
  
  return 0;
}
