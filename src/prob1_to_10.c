#include <math.h>
#include <stdint.h>
#include <stdio.h>

//From https://pynative.com/c-programming-pointers-exercises/

int problem1(){
    //Declare an integer, a pointer to an integer, and initialize the pointer
    // to the address of the integer. Print the variables value and value
    // accessed via the pointer.
    int16_t x = 14;
    int16_t * p = &x;

    printf("Var 'x' value: %d\n", x);
    printf("Var 'x' address: %p\n", &x);
    printf("Ptr 'p' value: %p\n", p);
    printf("Value accessed by dereferencing: %d\n", *p);

    return 0;
}

int problem2(){
    //Write a program that uses the dereference operator (*)
    // to change the value of a variable through its pointer.

    int num =  100;
    int *p  = &num;

    printf("Original value of num: %d\n", num);
    *p = 500;
    printf("New value of num: %d\n", num);

    return 0;
}

int problem3(){
    //Print the memory addresses of two different variables
    // (e.g., an int and a float) using the address-of operator (&).
    // Additionally, print the address of a pointer variable itself.

    int a = 10;
    float b = 20.5f;

    int *p_a = &a;

    printf("Addres of int 'a': %p\n", &a);
    printf("Address of float 'b': %p\n", &b);
    printf("Address stored in 'p_a': %p\n", p_a);
    printf("Address of 'p_a': %p\n", &p_a);
    
    return 0;
}


int problem4(){

    // Write a program to print the size (in bytes) of
    // a pointer to an integer, a pointer to a character,
    // and a pointer to a float on your system.

    int * pi;
    char * pc;
    float * pf;
        
    printf("size of int pointer is: %lu bytes.\n", sizeof(pi));
    printf("size of char pointer is: %lu bytes.\n", sizeof(pc));
    printf("size of float pointer is: %lu bytes.\n", sizeof(pf));
    printf("size of int variable: %lu bytes.\n", sizeof(int));
    printf("size of float variable: %lu bytes.\n", sizeof(float_t));    
    return 0;
}

void problem5(int *num){
    // Create a function increment_value that takes an
    // integer pointer as an argument and increments the
    // value of the variable it points to by one. Demonstrate the change in the main function.

    *num += 1;

}


int problem6(){

    int arr[] = {10, 20, 30, 40, 50, 60, 80, 100};
    int len = sizeof arr / sizeof arr[0];
    int * p = arr;

    int i;
    for(i = 0; i < len; i++){
        printf("Element %d: %i\n",i,*p);
        p++;
    }
    return 0;
}


int problem7(){
    // Given an array, access and print the third element (index 2) using three different methods:
    // subscript notation, pointer notation with the base address,
    // and pointer notation with an offset pointer.

    int data[5] = {1, 3, 5, 7, 9};
    int *p = data;

    printf("Subcript: %d\n", data[2]);
    printf("Pointer w/ base: %d\n", *(data + 2));
    printf("Pointer w/ offset: %d\n", *(p+2));
    
    return 0;
}

// int problem8(){
//     // Declare an array and attempt to assign a new address
//     // to the array’s name. Observe the compilation error and explain why it occurs.
    
//     int arr[5] = {1,2,3,4,5};
//     int other_var = 10;

//     int *p = &other_var;
//     // arr = p;    

//     return 0;
// }

int problem9(int *num, int size){

    int sum = 0;
    int i;

    for(i = 0; i < size; i++){
        sum += *(num + i);
    }    
    return sum;
}

int problem10(){
    // Write a program to reverse an integer array in place (without using
    // a second array) by swapping elements using pointers.
    int num[] = {1,2,3,4,5,6};
    int len = sizeof(num)/sizeof(num[0]);
    int * start = num;
    int * end = (num + len - 1);
    int i;
    int temp = 0;

    printf("Original array:");
    for(i = 0; i < len; i++){
        printf(" %d ", num[i]);
    }
    printf("\n");

    while(start < end){
        temp = *end;
        *end = *start;
        *start = temp;

        start++;
        end--;
    }    

    printf("\nReversed array:");
    for(i = 0; i < len; i++){
        printf(" %d ", num[i]);
    }

    printf("\n");
    return 0;
}

int main() {
    // Problem 5
    // int num = 10;
    // printf("Num = %d.\n", num); problem5(&num); printf("Now num = %d.\n", num);
    //
    // Problem 9
    // int len = sizeof num / sizeof num[0];
    // int sum = problem9(num, len);
    // printf("The sum of array elements is %d\n", sum);

    problem10();
    return 0;
}
