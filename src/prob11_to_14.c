#include <stdio.h>


int problem11(char *string){
  /* Write a function custom_strlen to calculate the length
     of a string (null-terminated character array) without
     using the standard C library function strlen(). The
     function must use a character pointer to traverse
     the string until it finds the null terminator (\0). */
  char *c = string;
  while(*c != 0){
    c++;
  }
  return c - string;
}

void problem12(char *src, char *dest){
  /* Implement a function custom_strcpy that copies the content of a source
  string (src) to a destination string (dest) using only character pointers.*/
  while((*dest++ = *src++) != '\0');
}

void problem13(){
  /*Count the number of vowels (A, E, I, O, U, and
    their lowercase counterparts) in a given string
    using a character pointer for traversal.*/
  char sentence[] = "The quick brown fox jumped over the lazy dog.";
  printf("Sentence: %s\n", sentence);
  char *s = sentence;

  int vowel = 0;
  while(*s != '\0'){
    if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u' || *s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U') vowel++;
    s++;
  }
  printf("Total number of vowels: %d\n", vowel);  
}

void problem14(){
  /*Use a pointer to iterate
  through a string and print each character on a new line,
  stopping at the null terminator.*/
  char *message = "C Pointers";
  while (*message != '\0') {
    printf("%c\n",*message);
    message++;
  }
}

int main(){
  /* char *string = "Poopy Poop Pee";
  int len = problem11(string);
  printf("%s is %d chars\n",string,len);
  printf("sizeof char is :%zu\n",sizeof(char)); 
  
  char *source = "Pointer master v2 Rtn 2 streetz.";
  char dest[50];
  problem12(source, dest);
  printf("Src: %s\nDest: %s\n",source,dest);
  printf("Src is %d chars\n",problem11(source));*/

  
  problem14();
  return 0;
}
