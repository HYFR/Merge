#include <stdio.h>

#define MAX 25 

// The indices are used as points of comparison to the given parameters. Depending on which is bigger (the parameters or indice pointed at) the elements in the subarrays are sorted from least to greatest.
void mergeSort(int array[], int low, int mid, int high) {
  int i;
  int a;
  int b;
  int c;
  int temp[MAX];

    c = low;
    i = low;
    a = mid + 1;

    while((c <= mid) && (a <= high)) {

         if(array[c] <= array[a]) {
             temp[i] = array[c];
             c++;
         }
         else{
             temp[i] = array[a];
             a++;
         }
         i++;
    }

    if(c > mid) {
         for(b = a; b <= high; b++) {
             temp[i] = array[b];
             i++;
         }
    }
    
    else {
         for(b = c; b <= mid; b++) {
             temp[i] = array[b];
             i++;
         }
    }
   
    for(b = low; b <= high; b++) {
         array[b] = temp[b];
    }

    if(temp == NULL) {
      return;
    }
}

// After the subarrays are in a sorted order, this function merges them into the original array, but in a sorted order.
void merge(int array[], int low, int high) {
  int mid;

  if(low < high) {
    mid = (low + high) / 2;
    merge(array, low, mid);
    merge(array, mid + 1, high);
    mergeSort(array, low, mid, high);
  }
}

// compares the elements of arrays for testing in my test_functions file
int match(int a[], int b[]) {
  int i;
  int length = (sizeof(a) / sizeof(a[0]));

  for(i = 0; i < length; i++) {
    if(a[i] != b[i]) {
      return 0;
    }
    return 1;
  }
}
