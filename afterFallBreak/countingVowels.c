#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define maxStringSize 256

int isVowel(char letter) {

  int vowelCount = 0;
  int vowelCountA = 0;
  int vowelCountE = 0;
  int vowelCountI = 0;
  int vowelCountO = 0;
  int vowelCountU = 0;
  int vowelCountY = 0;

  char *myString;
  int i;
  char testChar = myString[i];

 for (i = 0; i < lengthString(myString); i++) {

  switch(testChar) {

      case 'a': {
        vowelCountA++;
          break;
      } case 'e': {
        vowelCountE++;
          break;
      } case 'i': {
        vowelCountI++;
          break;
      } case 'o': {
        vowelCountO++;
          break;
      } case 'u': {
        vowelCountU++;
          break;
      } case 'A': {
        vowelCountA++;
          break;
      } case 'E': {
        vowelCountE++;
          break;
      } case 'I': {
        vowelCountI++;
          break;
      } case 'O': {
        vowelCountO++;
          break;
      } case 'U': {
        vowelCountU++;
          break;
      }
   }

//      if ((testChar =='a') || (testChar =='e') || 
//         (testChar =='i') || (testChar =='o') ||
//         (testChar =='u') || (testChar =='A') ||
//         (testChar =='E') || (testChar =='I') ||
//         (testChar =='O') || (testChar =='U')) {
//         vowelCount = vowelCount+1;
//     }

    if ((myString[i] == 'y') && (i == (lengthString(myString) - 2))) {
      vowelCountY = vowelCountY + 1;
      vowelCount = vowelCount + 1;
    }

    if ((myString[i] == 'Y') && (i == (lengthString(myString) - 2))) {
      vowelCountY = vowelCountY + 1;
      vowelCount = vowelCount + 1;
    }
 }
}

int v(char *myString) {

  int vowelCount = 0;
  int vowelCountA = 0;
  int vowelCountE = 0;
  int vowelCountI = 0;
  int vowelCountO = 0;
  int vowelCountU = 0;
  int vowelCountY = 0;

  int i;

  for (i = 0; i < lengthString(myString); i++) {
  
    char testChar = myString[i];

     if (isVowel(myString[i])) {
           vowelCount++;
     }
    
    printf("testing character %c\n", testChar);

  }

return vowelCount;

}

int main () {

  int vowelCount = 0;
  int vowelCountA = 0;
  int vowelCountE = 0;
  int vowelCountI = 0;
  int vowelCountO = 0;
  int vowelCountU = 0;
  int vowelCountY = 0;


  char myString [100];

    if (myString == NULL) {
      printf("no memory\n");
     return 1;
    }

  printf("Enter your string:\n");
   printf("\n");
   fgets(myString, maxStringSize, stdin);


  printf("\n");
 printf("There are %d vowels in the string %s\n", v(myString), myString);
//  printf("There are %d A's\n", v(myString));
//  printf("There are %d E's\n", v(myString));
//  printf("There are %d I's\n", v(myString));
//  printf("There are %d O's\n", v(myString));
//  printf("There are %d U's\n", v(myString));
//  printf("There are %d Y's as vowels\n", v(myString));

  return 0;
}
