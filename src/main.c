#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int problem15();
int problem16();
int problem17();

int main(){

  problem17();
  return 0;
}

int problem15(){
  /* Dynamically allocate memory for a single integer using malloc().
  Store the value 108 in this allocated memory, print the value
  and its memory address, and then free the memory using free().*/

  int *i = malloc(sizeof(int));
  
  if(i == NULL){
    printf("Memory allocation failed!\n");
    return 1;
  }
  
  *i = 108;
  printf("Value stored dynamically: %d\n", *i);
  printf("Memory address allocated: %p\n",i);

  free(i);
  i = NULL;
  
  return 0;
}

int problem16(){
  /* Dynamically allocate memory for an array of 5 integers using malloc().
  Read 5 integer values from the user into the array, print them using
  pointer arithmetic, and finally, free the allocated memory.*/
  const int count = 5;
  int *arr = malloc(sizeof(int) * count);
  int i;

  if(arr == NULL){
    printf("Memory allocation failed!\n");
    return 1;
  }

  printf("Enter 5 integers:\n");
  for(i = 0; i < count; i++){
    printf("Element %d: ", i + 1);
    if(scanf("%d", &arr[i]) != 1){
      printf("Invalid input!\n");
      free(arr);
      return 1;  
    }
  }

  printf("Stored elements are: ");
  for(i = 0; i < count; i++){
    printf("%d ", arr[i]);
  }

  free(arr);
  arr = NULL;
  return 0;
}

int problem17(){
  /*Use calloc() to dynamically allocate memory
  for an array of 10 floating-point numbers.
  Print the first and last elements to verify that calloc
  automatically initializes all elements to zero. Then, free the memory.*/
  const int count = 10;
  float *arr = calloc(count, sizeof *arr);
  
  printf("First element: %.2f\n", arr[0]);
  printf("Last element: %.2f\n", arr[count - 1]);
  arr[4] = M_PI;
  printf("Element 5: %.3f\n", arr[4]); 
  
  free(arr);
  return 0;
}
